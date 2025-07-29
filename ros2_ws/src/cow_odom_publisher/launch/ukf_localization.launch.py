from launch import LaunchDescription
from ament_index_python.packages import get_package_share_directory
from launch.actions import DeclareLaunchArgument, OpaqueFunction
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
import os

def launch_setup(context, *args, **kwargs):
    param_file_path = LaunchConfiguration('param_file').perform(context)

    return [
        Node(
            package='robot_localization',
            executable='ukf_node',
            name='ukf_filter_node',
            output='screen',
            parameters=[param_file_path]
        )
    ]

def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument(
            'param_file',
            default_value=os.path.join(
                get_package_share_directory("robot_localization"),
                'params',
                'ukf.yaml'
            ),
            description='Full path to the parameter file to use for the UKF node',
        ),
        OpaqueFunction(function=launch_setup)
    ])