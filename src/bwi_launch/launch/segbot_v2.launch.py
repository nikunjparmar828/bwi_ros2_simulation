from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, TimerAction, IncludeLaunchDescription, SetEnvironmentVariable, ExecuteProcess
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory, get_package_prefix
from launch.conditions import IfCondition
import os
import subprocess

def generate_launch_description():
    # Launch arguments
    rviz_gui = LaunchConfiguration('rviz_gui')
    rviz_gui_arg = DeclareLaunchArgument(
        'rviz_gui', default_value='false', description='Use RViz GUI'
    )

    use_sim_time = LaunchConfiguration('use_sim_time')
    use_sim_time_arg = DeclareLaunchArgument(
        'use_sim_time', default_value='true', description='Use simulation time'
    )

    gazebo_gui = LaunchConfiguration('gazebo_gui')
    gazebo_gui_arg = DeclareLaunchArgument(
        'gazebo_gui', default_value='False', description='Launch Gazebo GUI'
    )

    world_file = os.path.join(
        get_package_share_directory('utexas_gdc'), 'worlds', 'hallway_correct.world'
    )

    world_arg = DeclareLaunchArgument(
        'world', default_value=world_file, description='Gazebo world file'
    )

    # Add models directory to Gazebo search path
    model_path = os.path.join(
        get_package_share_directory('utexas_gdc'),
        'Media', 'models'
    )

    set_model_path = SetEnvironmentVariable(
        name='GAZEBO_MODEL_PATH',
        value=model_path
    )

    # URDF - preprocess xacro into string
    xacro_file = os.path.join(
        get_package_share_directory('segbot_description'),
        'robots', 'segbot_v2.urdf.xacro'
    )

    robot_desc_1 = subprocess.check_output([
        'xacro', xacro_file, 'prefix:=r1'
    ]).decode()

    robot_desc_2 = subprocess.check_output([
        'xacro', xacro_file, 'prefix:=r2'
    ]).decode()

    config_folder = os.path.join(get_package_share_directory('bwi_launch'), "config")

    # Map file
    utexas_gdc_package = get_package_share_directory('utexas_gdc') 
    map_file = os.path.join(utexas_gdc_package, "maps/simulation/my_map.yaml")    

    # Navigation
    nav2_package = get_package_share_directory('nav2_bringup')
    r1_nav2_params_yaml = os.path.join(nav2_package, "params/nav2_params_multi_robot_1.yaml")   
    r2_nav2_params_yaml = os.path.join(nav2_package, "params/nav2_params_multi_robot_2.yaml")   

    navigation_r1 = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(nav2_package, "launch", "bringup_launch.py")),
        launch_arguments={'namespace': 'r1', 'use_namespace': 'true', "map": map_file, 'params_file': r1_nav2_params_yaml, 'use_sim_time': 'true' }.items()
    )

    navigation_r2 = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(os.path.join(nav2_package, "launch", "bringup_launch.py")),
            launch_arguments={'namespace': 'r2', 'use_namespace': 'true', "map": map_file, 'params_file': r2_nav2_params_yaml, 'use_sim_time': 'true' }.items(),
    )  

    # RViz
    rviz_node_r1 = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2_r1",
        namespace="r1",
        output="log",
        arguments=["-d", os.path.join(config_folder, "rviz_config_r1.rviz")],
        condition=IfCondition(rviz_gui)
    )

    rviz_node_r2 = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2_r2",
        namespace="r2",
        output="log",
        arguments=["-d", os.path.join(config_folder, "rviz_config_r2.rviz")],
        condition=IfCondition(rviz_gui)
    )    

    # Gazebo launch
    gazebo_package = get_package_share_directory('gazebo_ros')
    gazebo_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(gazebo_package, "launch", "gazebo.launch.py")),
        launch_arguments={'world': world_file, 'gui': gazebo_gui}.items()
    )

    robot_state_publisher_r1 = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        namespace='r1',
        output='both',
        parameters=[{'robot_description': robot_desc_1, 'use_sim_time': use_sim_time}],
    )    

    robot_state_publisher_r2 = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        namespace='r2',
        output='both',
        parameters=[{'robot_description': robot_desc_2, 'use_sim_time': use_sim_time}],
    )    

    # Delayed spawn of robot 1 in Gazebo
    delayed_spawn_r1 = TimerAction(
        period=0.1,
        actions=[Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            name='spawn_segbot_v2_r1',
            arguments=[
                '-topic', 'r1/robot_description',
                '-entity', 'segbot_v2_r1',
                '-x', '-20.0',
                '-y', '-1.0',
                '-z', '0.0',
                '-Y', '3.14159',
            ],
            output='screen'
        )]
    )

    # Delayed spawn of robot 2 in Gazebo
    delayed_spawn_r2 = TimerAction(
        period=0.1,
        actions=[Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            name='spawn_segbot_v2_r2',
            arguments=[
                '-topic', 'r2/robot_description',
                '-entity', 'segbot_v2_r2',
                '-x', '-30.0',
                '-y', '-1.0',
                '-z', '0.0',
                '-Y', '0.0',
            ],
            output='screen'
        )]
    )    

    # ============================================================
    # TF RELAYS - Copy global /tf to namespaced topics for AMCL
    # ============================================================
    
    # Relay /tf -> /r1/tf
    tf_relay_to_r1 = ExecuteProcess(
        cmd=['python3', '-c', """
import rclpy
from rclpy.node import Node
from tf2_msgs.msg import TFMessage

class TFRelay(Node):
    def __init__(self):
        super().__init__('tf_relay_to_r1')
        self.sub = self.create_subscription(TFMessage, '/tf', self.cb, 100)
        self.pub = self.create_publisher(TFMessage, '/r1/tf', 100)
    def cb(self, m):
        self.pub.publish(m)

rclpy.init()
rclpy.spin(TFRelay())
"""],
        output='screen',
    )

    # Relay /tf_static -> /r1/tf_static
    tf_static_relay_to_r1 = ExecuteProcess(
        cmd=['python3', '-c', """
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, DurabilityPolicy, ReliabilityPolicy
from tf2_msgs.msg import TFMessage

class TFStaticRelay(Node):
    def __init__(self):
        super().__init__('tf_static_relay_to_r1')
        qos = QoSProfile(depth=100, durability=DurabilityPolicy.TRANSIENT_LOCAL, reliability=ReliabilityPolicy.RELIABLE)
        self.sub = self.create_subscription(TFMessage, '/tf_static', self.cb, qos)
        self.pub = self.create_publisher(TFMessage, '/r1/tf_static', qos)
    def cb(self, m):
        self.pub.publish(m)

rclpy.init()
rclpy.spin(TFStaticRelay())
"""],
        output='screen',
    )

    # Relay /tf -> /r2/tf
    tf_relay_to_r2 = ExecuteProcess(
        cmd=['python3', '-c', """
import rclpy
from rclpy.node import Node
from tf2_msgs.msg import TFMessage

class TFRelay(Node):
    def __init__(self):
        super().__init__('tf_relay_to_r2')
        self.sub = self.create_subscription(TFMessage, '/tf', self.cb, 100)
        self.pub = self.create_publisher(TFMessage, '/r2/tf', 100)
    def cb(self, m):
        self.pub.publish(m)

rclpy.init()
rclpy.spin(TFRelay())
"""],
        output='screen',
    )

    # Relay /tf_static -> /r2/tf_static
    tf_static_relay_to_r2 = ExecuteProcess(
        cmd=['python3', '-c', """
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, DurabilityPolicy, ReliabilityPolicy
from tf2_msgs.msg import TFMessage

class TFStaticRelay(Node):
    def __init__(self):
        super().__init__('tf_static_relay_to_r2')
        qos = QoSProfile(depth=100, durability=DurabilityPolicy.TRANSIENT_LOCAL, reliability=ReliabilityPolicy.RELIABLE)
        self.sub = self.create_subscription(TFMessage, '/tf_static', self.cb, qos)
        self.pub = self.create_publisher(TFMessage, '/r2/tf_static', qos)
    def cb(self, m):
        self.pub.publish(m)

rclpy.init()
rclpy.spin(TFStaticRelay())
"""],
        output='screen',
    )
 

    return LaunchDescription([
        rviz_gui_arg,
        use_sim_time_arg,
        gazebo_gui_arg,
        world_arg,
        set_model_path,
        gazebo_launch,
        robot_state_publisher_r1,
        robot_state_publisher_r2,
        delayed_spawn_r1,
        delayed_spawn_r2,
        # TF relays - start before navigation
        tf_relay_to_r1,
        tf_static_relay_to_r1,
        tf_relay_to_r2,
        tf_static_relay_to_r2,
        # Navigation and RViz
        navigation_r1,
        navigation_r2,
        rviz_node_r1,
        rviz_node_r2,
    ])