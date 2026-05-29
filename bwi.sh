#!/bin/bash
# bwi.sh — manage BWI ROS2 simulation containers
#
# Each container is isolated by ROS_DOMAIN_ID so multiple experiments
# can run on the same machine without interfering. Containers on different
# machines sharing the same DOMAIN_ID will see each other's topics via
# ROS2 DDS multicast (requires --network=host and L2 connectivity).
#
# Typical workflow:
#   ./bwi.sh build                      # build the Docker image
#   ./bwi.sh start 1                    # start container with domain 1
#   ./bwi.sh colcon 1                   # build the workspace inside it
#   ./bwi.sh run 1 launch bwi_launch segbot_v2.launch.py gazebo_gui:=False
#   ./bwi.sh run 1 run bwi_perc bwibot_detection_gazebo_r1
#   ./bwi.sh list
#   ./bwi.sh stop 1

set -euo pipefail

# Local tag used for build/run. Override with BWI_IMAGE to point at a registry:
#   export BWI_IMAGE=docker.io/youruser/bwi_ros2_sim:latest
IMAGE="${BWI_IMAGE:-bwi_ros2_sim:latest}"

_name() { echo "bwi_sim_d${1}"; }

_assert_running() {
    if ! docker ps --format '{{.Names}}' | grep -q "^$(_name "$1")$"; then
        echo "[bwi] Container $(_name "$1") is not running. Run: $0 start $1" >&2
        exit 1
    fi
}

# ── setup (GPU toolkit) ───────────────────────────────────────────────────────
cmd_setup_gpu() {
    # Must run as root so it can install packages and restart Docker.
    # Typical call from cluster_setup.py:
    #   echo PASS | sudo -S bash bwi.sh setup
    if [ "$(id -u)" -ne 0 ]; then
        echo "[bwi] WARNING: 'setup' needs root to install packages — skipping (no sudo access)." >&2
        echo "[bwi] Ask an admin to run: sudo bash $0 setup" >&2
        return
    fi

    if ! nvidia-smi > /dev/null 2>&1; then
        echo "[bwi] No NVIDIA GPU detected — skipping toolkit install (CPU-only node, Xvfb will be used)."
        return
    fi
    echo "[bwi] NVIDIA GPU detected."

    if dpkg -l nvidia-container-toolkit 2>/dev/null | grep -q '^ii'; then
        echo "[bwi] nvidia-container-toolkit already installed."
        if docker info --format '{{json .Runtimes}}' 2>/dev/null | grep -q '"nvidia"'; then
            echo "[bwi] nvidia Docker runtime already configured — nothing to do."
            return
        fi
        echo "[bwi] nvidia Docker runtime NOT configured — running nvidia-ctk configure + Docker restart..."
        nvidia-ctk runtime configure --runtime=docker
        systemctl restart docker
        echo "[bwi] Docker restarted with nvidia runtime."
        return
    fi

    echo "[bwi] Installing nvidia-container-toolkit..."
    curl -fsSL https://nvidia.github.io/libnvidia-container/gpgkey \
        | gpg --dearmor -o /usr/share/keyrings/nvidia-container-toolkit-keyring.gpg

    curl -s -L https://nvidia.github.io/libnvidia-container/stable/deb/nvidia-container-toolkit.list \
        | sed 's#deb https://#deb [signed-by=/usr/share/keyrings/nvidia-container-toolkit-keyring.gpg] https://#g' \
        | tee /etc/apt/sources.list.d/nvidia-container-toolkit.list > /dev/null

    apt-get update -qq
    apt-get install -y nvidia-container-toolkit
    nvidia-ctk runtime configure --runtime=docker
    systemctl restart docker
    echo "[bwi] nvidia-container-toolkit installed. Docker restarted with GPU runtime."
}

# ── push ─────────────────────────────────────────────────────────────────────
cmd_push() {
    if [[ "$IMAGE" == bwi_ros2_sim:* ]]; then
        echo "[bwi] ERROR: BWI_IMAGE is not set to a registry path." >&2
        echo "       Set it first, e.g.:" >&2
        echo "         export BWI_IMAGE=docker.io/youruser/bwi_ros2_sim:latest" >&2
        echo "       then re-run: $0 push" >&2
        exit 1
    fi
    echo "[bwi] Pushing $IMAGE ..."
    docker push "$IMAGE"
    echo "[bwi] Push complete."
}

# ── pull ─────────────────────────────────────────────────────────────────────
cmd_pull() {
    if [[ "$IMAGE" == bwi_ros2_sim:* ]]; then
        echo "[bwi] ERROR: BWI_IMAGE is not set to a registry path." >&2
        echo "       Set it first, e.g.:" >&2
        echo "         export BWI_IMAGE=docker.io/youruser/bwi_ros2_sim:latest" >&2
        echo "       then re-run: $0 pull" >&2
        exit 1
    fi
    echo "[bwi] Pulling $IMAGE ..."
    docker pull "$IMAGE"
    # Also tag it locally as bwi_ros2_sim:latest so start/run work without BWI_IMAGE
    docker tag "$IMAGE" bwi_ros2_sim:latest
    echo "[bwi] Pull complete. Tagged as bwi_ros2_sim:latest."
}

# ── build ────────────────────────────────────────────────────────────────────
cmd_build_image() {
    local script_dir
    script_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
    echo "[bwi] Building image $IMAGE ..."
    docker build -t "$IMAGE" "$script_dir"
}

# ── start ────────────────────────────────────────────────────────────────────
cmd_start() {
    local domain="${1:-0}"
    local name
    name=$(_name "$domain")

    xhost +local:docker > /dev/null 2>&1 || true
    mkdir -p /tmp/.X11-unix

    # Each domain gets its own virtual display so multiple containers on the same
    # host don't fight over display :99 or Gazebo's master port 11345.
    # Xvfb is started on the HOST and mounted into the container via /tmp/.X11-unix,
    # so the entrypoint inside the container sees a working display without starting
    # its own — no display conflict, no image rebuild required.
    local vdisp=":$((99 + domain))"
    local gzport="$((11344 + domain))"
    if ! xdpyinfo -display "${vdisp}" >/dev/null 2>&1; then
        if command -v Xvfb >/dev/null 2>&1; then
            Xvfb "${vdisp}" -screen 0 1280x1024x24 -nolisten tcp &>/dev/null &
            sleep 0.5
            echo "[bwi] Started Xvfb ${vdisp} for domain ${domain}."
        else
            echo "[bwi] WARNING: Xvfb not found — install with: sudo apt-get install -y xvfb" >&2
            vdisp="${DISPLAY:-:0}"
        fi
    else
        echo "[bwi] Display ${vdisp} already active."
    fi

    if docker ps -a --format '{{.Names}}' | grep -q "^${name}$"; then
        echo "[bwi] Restarting existing container $name ..."
        docker start "$name"
    else
        echo "[bwi] Creating $name  (ROS_DOMAIN_ID=$domain, DISPLAY=${vdisp}, GZ_PORT=${gzport}) ..."
        mkdir -p "$HOME/bwi_results"

        GPU_FLAGS=()
        if ! nvidia-smi > /dev/null 2>&1; then
            echo "[bwi] No NVIDIA GPU detected (nvidia-smi failed) — running CPU-only."
        elif ! docker info --format '{{json .Runtimes}}' 2>/dev/null | grep -q '"nvidia"'; then
            echo "[bwi] NVIDIA GPU detected but nvidia Docker runtime is NOT configured." >&2
            echo "[bwi]   Fix: sudo nvidia-ctk runtime configure --runtime=docker && sudo systemctl restart docker" >&2
            echo "[bwi] Running CPU-only until Docker is restarted with the nvidia runtime." >&2
        else
            GPU_FLAGS=(--gpus all --env "NVIDIA_DRIVER_CAPABILITIES=graphics,compute,utility")
            echo "[bwi] NVIDIA GPU + Docker runtime detected — enabling GPU passthrough."
        fi

        docker run -d \
            --name "$name" \
            --network=host \
            "${GPU_FLAGS[@]}" \
            --shm-size=2g \
            --ulimit nofile=65536:65536 \
            --ulimit rtprio=99:99 \
            --cap-add SYS_NICE \
            --env "ROS_DOMAIN_ID=$domain" \
            --env "DISPLAY=${vdisp}" \
            --env "GAZEBO_MASTER_URI=http://localhost:${gzport}" \
            --env "RMW_IMPLEMENTATION=rmw_cyclonedds_cpp" \
            --volume "/tmp/.X11-unix:/tmp/.X11-unix:rw" \
            --volume "$HOME/bwi_results:/results:rw" \
            "$IMAGE" \
            tail -f /dev/null
    fi
    echo "[bwi] $name ready."
}

# ── colcon build inside container ────────────────────────────────────────────
cmd_colcon() {
    local domain="${1:-0}"
    local name
    name=$(_name "$domain")
    _assert_running "$domain"
    echo "[bwi] Running colcon build in $name ..."
    docker exec -it -w /workspace "$name" \
        bash -c "source /opt/ros/humble/setup.bash && \
                 colcon build --cmake-args -DCMAKE_BUILD_TYPE=Release"
    echo "[bwi] Build complete. You can now run nodes in domain $domain."
}

# ── run a ros2 command ───────────────────────────────────────────────────────
cmd_run() {
    local domain="${1:-0}"
    shift
    _assert_running "$domain"
    # exec replaces this shell so Ctrl-C reaches the ros2 process
    exec docker exec -it "$(_name "$domain")" /entrypoint.sh ros2 "$@"
}

# ── interactive shell ─────────────────────────────────────────────────────────
cmd_shell() {
    local domain="${1:-0}"
    _assert_running "$domain"
    exec docker exec -it "$(_name "$domain")" /entrypoint.sh bash
}

# ── run any command (not prefixed with ros2) ──────────────────────────────────
cmd_exec() {
    local domain="${1:-0}"
    shift
    _assert_running "$domain"
    exec docker exec -it "$(_name "$domain")" /entrypoint.sh "$@"
}

# ── stop + remove ─────────────────────────────────────────────────────────────
cmd_stop() {
    local domain="${1:-0}"
    local name
    name=$(_name "$domain")
    docker stop "$name" && docker rm "$name"
    echo "[bwi] $name removed."
}

# ── list ──────────────────────────────────────────────────────────────────────
cmd_list() {
    docker ps --filter "name=bwi_sim_d" \
              --format "table {{.Names}}\t{{.Status}}"
}

# ── usage ─────────────────────────────────────────────────────────────────────
usage() {
    cat <<EOF
Usage: $(basename "$0") <command> [DOMAIN_ID] [args...]

  setup                        Install nvidia-container-toolkit if GPU present (run as sudo)
  build                        Build the Docker image
  push                         Push image to registry   (requires BWI_IMAGE=registry/repo:tag)
  pull                         Pull image from registry (requires BWI_IMAGE=registry/repo:tag)
  start  [DOMAIN_ID]           Start container          (default: 0)
  colcon [DOMAIN_ID]           colcon build inside container
  run    [DOMAIN_ID] <args>    Execute: ros2 <args> inside container
  exec   [DOMAIN_ID] <args>    Execute any command inside container
  shell  [DOMAIN_ID]           Open a bash shell
  stop   [DOMAIN_ID]           Stop and remove container
  list                         List all running BWI containers

ROS_DOMAIN_ID isolates experiments on the same machine.
Containers on different machines with the same DOMAIN_ID communicate
via DDS multicast when --network=host is used (requires L2 reachability).

Build once, push to Docker Hub, pull everywhere:
  export BWI_IMAGE=docker.io/youruser/bwi_ros2_sim:latest
  $(basename "$0") build && $(basename "$0") push   # on the build machine
  $(basename "$0") pull                              # on every target machine

Examples — single machine:
  $(basename "$0") build
  $(basename "$0") start 1
  $(basename "$0") colcon 1
  $(basename "$0") run 1 launch bwi_launch segbot_v2.launch.py gazebo_gui:=False
  $(basename "$0") run 1 run bwi_perc bwibot_detection_gazebo_r1
  $(basename "$0") run 1 run bwi_perc bwibot_detection_gazebo_r2
  $(basename "$0") run 1 run bwi_reset reset_robots --hallway_type SH1 --spawn_distance 10.0
  $(basename "$0") run 1 run bwi_tasks door_to_door_collision_avoidance_r1 --phhp_radius 2.0 --phhp_dr 2.0 --detection_range 2.0 --phhp_k_end 2.0 --phhp_k_begin 2.0
  $(basename "$0") run 1 run bwi_tasks door_to_door_collision_avoidance_r2 --phhp_radius 2.0 --phhp_dr 2.0 --detection_range 2.0 --phhp_k_end 2.0 --phhp_k_begin 2.0
  $(basename "$0") stop 1

Examples — 4 isolated experiments on one machine:
  for d in 1 2 3 4; do $(basename "$0") start \$d && $(basename "$0") colcon \$d; done
EOF
}

case "${1:-}" in
    setup)  cmd_setup_gpu ;;
    build)  cmd_build_image ;;
    push)   cmd_push ;;
    pull)   cmd_pull ;;
    start)  shift; cmd_start  "$@" ;;
    colcon) shift; cmd_colcon "$@" ;;
    run)    shift; cmd_run    "$@" ;;
    shell)  shift; cmd_shell  "$@" ;;
    exec)   shift; cmd_exec   "$@" ;;
    stop)   shift; cmd_stop   "$@" ;;
    list)   cmd_list ;;
    *)      usage ;;
esac
