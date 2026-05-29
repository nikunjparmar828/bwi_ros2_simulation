#!/bin/bash
set -e

# Gazebo classic setup — sets base paths for Gazebo plugins/models/resources.
[ -f /usr/share/gazebo/setup.sh ] && source /usr/share/gazebo/setup.sh

source /opt/ros/humble/setup.bash

# source /opt/ros/humble/setup.bash should extend GAZEBO_PLUGIN_PATH but doesn't
# in Docker — add the ROS Humble lib path explicitly so Gazebo finds all ROS plugins
# (libgazebo_ros_camera.so, libgazebo_ros_diff_drive.so, etc.)
export GAZEBO_PLUGIN_PATH=/opt/ros/humble/lib:${GAZEBO_PLUGIN_PATH}
[ -f /workspace/install/setup.bash ] && source /workspace/install/setup.bash
export ROS_DOMAIN_ID="${ROS_DOMAIN_ID:-0}"

# Each container gets a unique virtual display derived from ROS_DOMAIN_ID so
# that multiple containers sharing /tmp/.X11-unix don't collide on the same
# Xvfb socket file (e.g. domain 1 → :100, domain 2 → :101, …).
_VNUM="$((99 + ${ROS_DOMAIN_ID}))"

if ! xdpyinfo -display "${DISPLAY:-:0}" > /dev/null 2>&1; then
    export DISPLAY=":${_VNUM}"
    if [ ! -f "/tmp/.X${_VNUM}-lock" ]; then
        Xvfb ":${_VNUM}" -screen 0 1280x1024x24 -nolisten tcp &
        sleep 0.5
    fi
fi

exec nice -n -20 "$@"
