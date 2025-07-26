1. 로봇쪽 launch 돌리기
    1. ros2 launch cow_odom_publisher cow.launch.py
2. tf pub
    1. ros2 launch robot_monitoring robot_description.launch.py urdf_path:=/home/kyw/vscode/slam_study/ros2_ws/src/robot_monitoring/urdf/myrobot.urdf.xacro
3. ekf 돌리기
    1. ros2 launch cow_odom_publisher ekf_localization.launch.py
4. slam돌리기
    1. ros2 launch nav2_bringup slam_launch.py slam_params_file:=/home/kimyw/vscode/CHORES/cow/raspberrypi/ros2_ws/src/navigation2_custom/nav2_bringup/params/slam_config.yaml