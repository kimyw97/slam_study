<!-- @format -->

1. 로봇쪽 launch 돌리기
   1. ros2 launch cow_odom_publisher cow.launch.py
2. tf pub
   1. ros2 launch robot_monitoring robot_description.launch.py urdf_path:=/home/kyw/vscode/slam_study/ros2_ws/src/robot_monitoring/urdf/myrobot.urdf.xacro
3. ekf 돌리기
   1. ros2 launch cow_odom_publisher ekf_localization.launch.py ekf_param_path:=/home/kyw/vscode/slam_study/config/ekf.yaml
4. slam돌리기
   1. ros2 launch nav2_bringup slam_launch.py slam_params_file:=/home/kyw/vscode/slam_study/config/slam_config.yaml

#머신 상태
macos(UTM:VM, ubuntu 24.04) <-> raspberrypi5(ubuntu 24.04)
가상 머신에서는 꼭 네트워크 설정에서 Bidged 모드
각 머신의 ROS_DOMAIN_ID 통일

```bash
echo $ROS_DOMAIN_ID

export ROS_DOMAIN_ID=0
```
