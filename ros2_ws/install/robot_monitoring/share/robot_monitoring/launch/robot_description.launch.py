from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, Command
from launch_ros.actions import Node

def generate_launch_description():
    urdf_path_arg = DeclareLaunchArgument(
        name='urdf_path',
        description='Absolute path to URDF/XACRO file'
    )

    urdf_path = LaunchConfiguration('urdf_path')

    return LaunchDescription([
        urdf_path_arg,

        # Joint State Publisher
        Node(
            package='joint_state_publisher',
            executable='joint_state_publisher',
            name='joint_state_publisher',
            output='screen'
        ),

        # Robot State Publisher
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[
                {
                    'robot_description': Command(['xacro ', urdf_path]),
                    'use_sim_time': False,
                    'publish_frequency': 10.0,
                }
            ]
        )
    ])