from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, SetEnvironmentVariable
from launch.conditions import IfCondition, UnlessCondition
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    use_sim_time = DeclareLaunchArgument('use_sim_time', default_value='true')
    gui = DeclareLaunchArgument('gui', default_value='true')
    debug = DeclareLaunchArgument('debug', default_value='false')

    model_path = os.path.join(get_package_share_directory('utexas_gdc'), 'Media', 'models')
    set_model_path = SetEnvironmentVariable(
        name='GAZEBO_MODEL_PATH',
        value=model_path + (':' + os.environ.get('GAZEBO_MODEL_PATH', '') if os.environ.get('GAZEBO_MODEL_PATH') else '')
    )

    world_file = os.path.join(get_package_share_directory('utexas_gdc'), 'worlds', 'combined.world')

    gazebo_server = ExecuteProcess(
        cmd=['gzserver', '--verbose', world_file],
        output='screen',
        condition=UnlessCondition(LaunchConfiguration('debug'))
    )

    gazebo_server_debug = ExecuteProcess(
        cmd=['gzserver', '--verbose', '-s', 'libgazebo_ros_factory.so', world_file],
        output='screen',
        condition=IfCondition(LaunchConfiguration('debug'))
    )

    gazebo_gui = ExecuteProcess(
        cmd=['gzclient'],
        output='screen',
        condition=IfCondition(LaunchConfiguration('gui'))
    )

    return LaunchDescription([
        use_sim_time,
        gui,
        debug,
        set_model_path,
        gazebo_server,
        gazebo_server_debug,
        gazebo_gui,
    ])
