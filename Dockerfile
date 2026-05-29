FROM osrf/ros:humble-desktop-full

ENV DEBIAN_FRONTEND=noninteractive
ENV LANG=C.UTF-8
ENV LC_ALL=C.UTF-8
ENV BWI_WORKSPACE=/workspace
ENV GAZEBO_PLUGIN_PATH=/opt/ros/humble/lib:$GAZEBO_PLUGIN_PATH

RUN apt-get update && apt-get install -y --no-install-recommends \
    python3-colcon-common-extensions \
    python3-pip \
    python3-tz \
    libboost-all-dev \
    qt5-qmake \
    qtbase5-dev \
    libsdl2-dev \
    unzip \
    ros-humble-gazebo-ros-pkgs \
    ros-humble-gazebo-plugins \
    ros-humble-gazebo-ros2-control \
    ros-humble-navigation2 \
    ros-humble-nav2-bringup \
    ros-humble-slam-toolbox \
    ros-humble-velodyne-description \
    ros-humble-velodyne-gazebo-plugins \
    ros-humble-laser-proc \
    ros-humble-topic-tools \
    ros-humble-diagnostic-updater \
    xvfb \
    x11-utils \
    ros-humble-rmw-cyclonedds-cpp \
    && rm -rf /var/lib/apt/lists/*

RUN pip3 install --no-cache-dir "numpy<2" ultralytics

RUN rosdep update

WORKDIR /workspace

COPY src/ ./src/
COPY models/ ./models/

# Pre-install all rosdep deps so colcon build works offline inside the container
# apt-get update must run here because the cache from the earlier layer is cleared
RUN apt-get update && \
    . /opt/ros/humble/setup.sh && \
    rosdep install --from-paths src --ignore-src -r -y \
        --skip-keys "hector_gazebo_plugins ament_python ament_cmake" && \
    rm -rf /var/lib/apt/lists/* && \
    colcon build

COPY docker/entrypoint.sh /entrypoint.sh
RUN chmod +x /entrypoint.sh

ENTRYPOINT ["/entrypoint.sh"]
CMD ["bash"]
