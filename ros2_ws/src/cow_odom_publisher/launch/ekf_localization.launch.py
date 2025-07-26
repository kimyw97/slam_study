from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    # Declare the launch argument
    ekf_param_path_arg = DeclareLaunchArgument(
        name='ekf_param_path',
        description='Absolute path to the EKF YAML parameter file'
    )

    ekf_param_path = LaunchConfiguration('ekf_param_path')

    return LaunchDescription([
        ekf_param_path_arg,

        Node(
            package='robot_localization',
            executable='ekf_node',
            name='ekf_filter_node',
            output='screen',
            parameters=[ekf_param_path]
        )
    ])