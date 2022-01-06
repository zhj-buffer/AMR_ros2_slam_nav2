# ros2_slam_nav2
AMR on Jetson 

# launch

```
alan@nvidia-desktop:~/src/turtlebot3$ ros2 launch turtlebot3_bringup robot.launch.py                                                                                 
[INFO] [launch]: All log files can be found below /home/alan/.ros/log/2022-01-06-19-56-06-346460-nvidia-desktop-25874 
[INFO] [launch]: Default logging verbosity is set to INFO 
urdf_file_name : turtlebot3_waffle.urdf 
[INFO] [robot_state_publisher-1]: process started with pid [25878] 
[INFO] [ahrs_driver_node-2]: process started with pid [25879] 
[INFO] [rslidar_sdk_node-3]: process started with pid [25880]
[INFO] [rviz2-4]: process started with pid [25881]
[INFO] [ros2_drive_package_can_ctrol-5]: process started with pid [25882]
[rslidar_sdk_node-3] ********************************************************
[rslidar_sdk_node-3] **********                                    **********
[rslidar_sdk_node-3] **********    RSLidar_SDK Version: v1.3.0     ********** 
[rslidar_sdk_node-3] **********                                    **********
[rslidar_sdk_node-3] ********************************************************
[rslidar_sdk_node-3] ------------------------------------------------------
[rslidar_sdk_node-3] Receive Packets From : Online LiDAR
[rslidar_sdk_node-3] Msop Port: 6699
[rslidar_sdk_node-3] Difop Port: 7788
[rslidar_sdk_node-3] ------------------------------------------------------
[rslidar_sdk_node-3] ------------------------------------------------------
[rslidar_sdk_node-3] Send PointCloud To : ROS
[rslidar_sdk_node-3] PointCloud Topic: /rslidar_points
[rslidar_sdk_node-3] ------------------------------------------------------
[rviz2-4] No protocol specified
[rviz2-4] qt.qpa.screen: QXcbConnection: Could not connect to display :0
[rviz2-4] Could not connect to any X display.
[robot_state_publisher-1] Parsing robot urdf xml string.
[robot_state_publisher-1] Link base_link had 7 children
[robot_state_publisher-1] Link camera_link had 2 children
[robot_state_publisher-1] Link camera_depth_frame had 1 children
[robot_state_publisher-1] Link camera_depth_optical_frame had 0 children
[robot_state_publisher-1] Link camera_rgb_frame had 1 children
[robot_state_publisher-1] Link camera_rgb_optical_frame had 0 children
[robot_state_publisher-1] Link caster_back_left_link had 0 children
[robot_state_publisher-1] Link caster_back_right_link had 0 children
[robot_state_publisher-1] Link imu_link had 0 children
[robot_state_publisher-1] Link base_scan had 0 children
[robot_state_publisher-1] Link wheel_left_link had 0 children
[robot_state_publisher-1] Link wheel_right_link had 0 children
[robot_state_publisher-1] [INFO] [1641470166.643306649] [robot_state_publisher]: got segment base_footprint
[robot_state_publisher-1] [INFO] [1641470166.643612137] [robot_state_publisher]: got segment base_link
[robot_state_publisher-1] [INFO] [1641470166.643663372] [robot_state_publisher]: got segment base_scan
[robot_state_publisher-1] [INFO] [1641470166.643695406] [robot_state_publisher]: got segment camera_depth_frame
[robot_state_publisher-1] [INFO] [1641470166.643725359] [robot_state_publisher]: got segment camera_depth_optical_frame
[robot_state_publisher-1] [INFO] [1641470166.643754833] [robot_state_publisher]: got segment camera_link
[robot_state_publisher-1] [INFO] [1641470166.643785746] [robot_state_publisher]: got segment camera_rgb_frame
[robot_state_publisher-1] [INFO] [1641470166.643815828] [robot_state_publisher]: got segment camera_rgb_optical_frame
[robot_state_publisher-1] [INFO] [1641470166.643848118] [robot_state_publisher]: got segment caster_back_left_link
[robot_state_publisher-1] [INFO] [1641470166.643878199] [robot_state_publisher]: got segment caster_back_right_link
[robot_state_publisher-1] [INFO] [1641470166.643907993] [robot_state_publisher]: got segment imu_link
[robot_state_publisher-1] [INFO] [1641470166.643939226] [robot_state_publisher]: got segment wheel_left_link
[robot_state_publisher-1] [INFO] [1641470166.643970748] [robot_state_publisher]: got segment wheel_right_link
[ERROR] [rviz2-4]: process has died [pid 25881, exit code 1, cmd '/home/alan/ros2/install/lib/rviz2/rviz2 -d /home/alan/src/turtlebot3/install/rslidar_sdk/share/rslidar_sdk/rviz/rviz2.rviz --ros-args -r __node:=rviz2 -r __ns:=/rviz2'].
[ros2_drive_package_can_ctrol-5] [INFO] [1641470166.665016804] [ros2_drive_package_can_ctrol]: Node inited:'
[ros2_drive_package_can_ctrol-5] [INFO] [1641470166.665387575] [ros2_drive_package_can_ctrol]: >>open can deivce success!
[rslidar_sdk_node-3] ---here---------------------------------------------------
[rslidar_sdk_node-3] Send LaserScan To : ROS
[rslidar_sdk_node-3] LaserScan Topic: /rslidar_laserscan
[rslidar_sdk_node-3] ------------------------------------------------------
[rslidar_sdk_node-3] [WARN] [1641470166.667688943] [rcl.logging_rosout]: Publisher already registered for provided node name. If this is due to multiple nodes with the same name then all logs for that logger name will go out over the existing publisher. As soon as any node with that name is destructed it will unregister the publisher, preventing any further logs for that name from being published on the rosout topic.
[rslidar_sdk_node-3] set ring: 6
[rslidar_sdk_node-3] RoboSense-LiDAR-Driver is running.....
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[ahrs_driver_node-2] [ERROR] [1641470216.636639271] [ahrs_bringup]: Serial Port initialized 
[ahrs_driver_node-2] [INFO] [1641470216.637380781] [ahrs_bringup]: ahrsBringup::processLoop: start 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
^C[WARNING] [launch]: user interrupted with ctrl-c (SIGINT) 
[ros2_drive_package_can_ctrol-5] [INFO] [1641470351.271357935] [rclcpp]: signal_handler(signal_value=2) 
[rslidar_sdk_node-3] [INFO] [1641470351.272513099] [rclcpp]: signal_handler(signal_value=2) 
[rslidar_sdk_node-3] RoboSense-LiDAR-Driver is stopping.....
[ahrs_driver_node-2] [INFO] [1641470351.274535668] [rclcpp]: signal_handler(signal_value=2)
[robot_state_publisher-1] [INFO] [1641470351.274533908] [rclcpp]: signal_handler(signal_value=2)
[INFO] [ahrs_driver_node-2]: process has finished cleanly [pid 25879] 
[INFO] [robot_state_publisher-1]: process has finished cleanly [pid 25878]
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
^C[WARNING] [launch]: user interrupted with ctrl-c (SIGINT) again, ignoring... 
[ros2_drive_package_can_ctrol-5] [INFO] [1641470351.774051580] [rclcpp]: signal_handler(signal_value=2)
[rslidar_sdk_node-3] [INFO] [1641470351.774744352] [rclcpp]: signal_handler(signal_value=2)
[rslidar_sdk_node-3] RoboSense-LiDAR-Driver is stopping.....
[INFO] [ros2_drive_package_can_ctrol-5]: process has finished cleanly [pid 25882] 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[INFO] [rslidar_sdk_node-3]: process has finished cleanly [pid 25880] 
```

```
alan@nvidia-desktop:~/src/turtlebot3$ ros2 topic list 
/bms_fb 
/bms_flag_fb
/ctrl_cmd
/ctrl_fb
/imu
/io_cmd 
/io_fb
/joint_states
/l_wheel_fb
/mag_pose_2d
/odom
/parameter_events
/r_wheel_fb
/rear_free_ctrl_cmd
/robot_description
/rosout
/rslidar_points
/rslidar_sdk/rslidar_laserscan
/smoother_cmd_vel
/tf
/tf_static
alan@nvidia-desktop:~/src/turtlebot3$ ros2 service list 
/ahrs_bringup/describe_parameters 
/ahrs_bringup/get_parameter_types
/ahrs_bringup/get_parameters
/ahrs_bringup/list_parameters 
/ahrs_bringup/set_parameters
/ahrs_bringup/set_parameters_atomically
/robot_state_publisher/describe_parameters
/robot_state_publisher/get_parameter_types
/robot_state_publisher/get_parameters
/robot_state_publisher/list_parameters
/robot_state_publisher/set_parameters
/robot_state_publisher/set_parameters_atomically
/ros2_drive_package_can_ctrol/describe_parameters
/ros2_drive_package_can_ctrol/get_parameter_types
/ros2_drive_package_can_ctrol/get_parameters
/ros2_drive_package_can_ctrol/list_parameters
/ros2_drive_package_can_ctrol/set_parameters
/ros2_drive_package_can_ctrol/set_parameters_atomically
/rslidar_sdk/rslidar_sdk_node/describe_parameters
/rslidar_sdk/rslidar_sdk_node/get_parameter_types
/rslidar_sdk/rslidar_sdk_node/get_parameters
/rslidar_sdk/rslidar_sdk_node/list_parameters
/rslidar_sdk/rslidar_sdk_node/set_parameters
/rslidar_sdk/rslidar_sdk_node/set_parameters_atomically
```
