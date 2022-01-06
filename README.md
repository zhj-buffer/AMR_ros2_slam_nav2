# ros2_slam_nav2
AMR on Jetson 

```
sudo apt install libgazebo9-dev

```

```
git clone https://github.com/ompl/ompl.git
cd ompl
mkdir build 
cd build 
cmake ..
make -j16
sudo make install 
sudo ldconfig
```

```
src/vision_opencv/cv_bridge/CMakeLists.txt
#install(TARGETS ${PROJECT_NAME}
#        RUNTIME DESTINATION bin
#        ARCHIVE DESTINATION lib
#        LIBRARY DESTINATION lib
#)
```

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

[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[rslidar_sdk_node-3] ERRCODE_MSOPTIMEOUT 
[ahrs_driver_node-2] [ERROR] [1641470216.636639271] [ahrs_bringup]: Serial Port initialized 
[ahrs_driver_node-2] [INFO] [1641470216.637380781] [ahrs_bringup]: ahrsBringup::processLoop: start 
[rslidar_sdk_node-3] ERRCODE_DIFOPTIMEOUT 
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
```
```
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

# launch the slam
```
alan@nvidia-desktop:~/src/turtlebot3$ ros2 launch turtlebot3_cartographer cartographer.launch.py 
[INFO] [launch]: All log files can be found below /home/alan/.ros/log/2022-01-06-20-02-21-057360-nvidia-desktop-26325 
[INFO] [launch]: Default logging verbosity is set to INFO 
[INFO] [cartographer_node-1]: process started with pid [26329] 
[INFO] [occupancy_grid_node-2]: process started with pid [26330] 
[INFO] [rviz2-3]: process started with pid [26331]
[cartographer_node-1] [INFO] [1641470541.254201729] [cartographer_ros]: I0106 20:02:21.000000 26329 configuration_file_resolver.cc:41] Found '/home/alan/src/turtlebot3/install/turtlebot3_cartographer/share/turtlebot3_cartographer/config/turtlebot3_lds_2d.lua' for 'turtlebot3_lds_2d.lua'.
[cartographer_node-1] [INFO] [1641470541.255193397] [cartographer_ros]: I0106 20:02:21.000000 26329 configuration_file_resolver.cc:41] Found '/home/alan/src/turtlebot3/install/cartographer/share/cartographer/configuration_files/map_builder.lua' for 'map_builder.lua'.
[cartographer_node-1] [INFO] [1641470541.255318620] [cartographer_ros]: I0106 20:02:21.000000 26329 configuration_file_resolver.cc:41] Found '/home/alan/src/turtlebot3/install/cartographer/share/cartographer/configuration_files/map_builder.lua' for 'map_builder.lua'.
[cartographer_node-1] [INFO] [1641470541.255511622] [cartographer_ros]: I0106 20:02:21.000000 26329 configuration_file_resolver.cc:41] Found '/home/alan/src/turtlebot3/install/cartographer/share/cartographer/configuration_files/pose_graph.lua' for 'pose_graph.lua'.
[cartographer_node-1] [INFO] [1641470541.255580713] [cartographer_ros]: I0106 20:02:21.000000 26329 configuration_file_resolver.cc:41] Found '/home/alan/src/turtlebot3/install/cartographer/share/cartographer/configuration_files/pose_graph.lua' for 'pose_graph.lua'.
[cartographer_node-1] [INFO] [1641470541.256059554] [cartographer_ros]: I0106 20:02:21.000000 26329 configuration_file_resolver.cc:41] Found '/home/alan/src/turtlebot3/install/cartographer/share/cartographer/configuration_files/trajectory_builder.lua' for 'trajectory_builder.lua'.
[cartographer_node-1] [INFO] [1641470541.256135558] [cartographer_ros]: I0106 20:02:21.000000 26329 configuration_file_resolver.cc:41] Found '/home/alan/src/turtlebot3/install/cartographer/share/cartographer/configuration_files/trajectory_builder.lua' for 'trajectory_builder.lua'.
[cartographer_node-1] [INFO] [1641470541.256305519] [cartographer_ros]: I0106 20:02:21.000000 26329 configuration_file_resolver.cc:41] Found '/home/alan/src/turtlebot3/install/cartographer/share/cartographer/configuration_files/trajectory_builder_2d.lua' for 'trajectory_builder_2d.lua'.
[cartographer_node-1] [INFO] [1641470541.256376627] [cartographer_ros]: I0106 20:02:21.000000 26329 configuration_file_resolver.cc:41] Found '/home/alan/src/turtlebot3/install/cartographer/share/cartographer/configuration_files/trajectory_builder_2d.lua' for 'trajectory_builder_2d.lua'.
[cartographer_node-1] [INFO] [1641470541.256701988] [cartographer_ros]: I0106 20:02:21.000000 26329 configuration_file_resolver.cc:41] Found '/home/alan/src/turtlebot3/install/cartographer/share/cartographer/configuration_files/trajectory_builder_3d.lua' for 'trajectory_builder_3d.lua'.
[cartographer_node-1] [INFO] [1641470541.256771623] [cartographer_ros]: I0106 20:02:21.000000 26329 configuration_file_resolver.cc:41] Found '/home/alan/src/turtlebot3/install/cartographer/share/cartographer/configuration_files/trajectory_builder_3d.lua' for 'trajectory_builder_3d.lua'.
[rviz2-3] No protocol specified
[rviz2-3] qt.qpa.screen: QXcbConnection: Could not connect to display :0
[rviz2-3] Could not connect to any X display.
[ERROR] [rviz2-3]: process has died [pid 26331, exit code 1, cmd '/home/alan/ros2/install/lib/rviz2/rviz2 -d /home/alan/src/turtlebot3/install/turtlebot3_cartographer/share/turtlebot3_cartographer/rviz/tb3_cartographer.rviz --ros-args -r __node:=rviz2 --params-file /tmp/launch_params_6x3fchlj'].
[cartographer_node-1] [INFO] [1641470541.339160485] [cartographer_ros]: I0106 20:02:21.000000 26329 submap_2d.cc:187] Added submap 1
[cartographer_node-1] [INFO] [1641470541.339323501] [cartographer_ros]: I0106 20:02:21.000000 26329 map_builder_bridge.cc:132] Added trajectory with ID '0'.
[occupancy_grid_node-2] [WARN] [1641470542.307796982] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641470543.307854154] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641470544.307858459] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641470545.307970673] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641470546.307971937] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641470547.308089144] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641470548.308057319] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641470549.308201982] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
^C[WARNING] [launch]: user interrupted with ctrl-c (SIGINT) 
[cartographer_node-1] [INFO] [1641470550.114476178] [rclcpp]: signal_handler(signal_value=2)
[occupancy_grid_node-2] [INFO] [1641470550.114719998] [rclcpp]: signal_handler(signal_value=2)
[cartographer_node-1] [INFO] [1641470550.118486626] [cartographer_ros]: I0106 20:02:30.000000 26329 node.cc:545] Shutdown the subscriber of [scan]
[cartographer_node-1] [INFO] [1641470550.118614921] [cartographer_ros]: I0106 20:02:30.000000 26329 node.cc:545] Shutdown the subscriber of [odom]
[cartographer_node-1] [INFO] [1641470550.126324858] [cartographer_ros]: I0106 20:02:30.000000 26329 map_builder_bridge.cc:149] Finishing trajectory with ID '0'...   
[cartographer_node-1] [INFO] [1641470550.126477858] [cartographer_ros]: I0106 20:02:30.000000 26329 map_builder_bridge.cc:158] Running final trajectory optimization...
[cartographer_node-1] [INFO] [1641470550.126550950] [cartographer_ros]: I0106 20:02:30.000000 26341 constraint_builder_2d.cc:281] 0 computations resulted in 0 additional constraints.
[cartographer_node-1] [INFO] [1641470550.126625002] [cartographer_ros]: I0106 20:02:30.000000 26341 constraint_builder_2d.cc:283] Score histogram: 
[cartographer_node-1] Count: 0
[cartographer_node-1] [INFO] [1641470550.126717230] [cartographer_ros]: I0106 20:02:30.000000 26341 pose_graph_2d.cc:382] Remaining work items in queue: 1
[cartographer_node-1] [INFO] [1641470550.126779666] [cartographer_ros]: I0106 20:02:30.000000 26341 constraint_builder_2d.cc:281] 0 computations resulted in 0 additional constraints.
[cartographer_node-1] [INFO] [1641470550.126826196] [cartographer_ros]: I0106 20:02:30.000000 26341 constraint_builder_2d.cc:283] Score histogram:
[cartographer_node-1] Count: 0
[cartographer_node-1] [INFO] [1641470550.127168710] [cartographer_ros]: I0106 20:02:30.000000 26344 constraint_builder_2d.cc:281] 0 computations resulted in 0 additional constraints.
[cartographer_node-1] [INFO] [1641470550.127225897] [cartographer_ros]: I0106 20:02:30.000000 26344 constraint_builder_2d.cc:283] Score histogram:
[cartographer_node-1] Count: 0
Optimizing: Done.
Optimizing: Done.
[cartographer_node-1] [INFO] [1641470550.139013422] [cartographer_ros]: I0106 20:02:30.000000 26342 constraint_builder_2d.cc:281] 0 computations resulted in 0 additional constraints.
[cartographer_node-1] [INFO] [1641470550.139092402] [cartographer_ros]: I0106 20:02:30.000000 26342 constraint_builder_2d.cc:283] Score histogram:
[cartographer_node-1] Count: 0
[INFO] [occupancy_grid_node-2]: process has finished cleanly [pid 26330]
[INFO] [cartographer_node-1]: process has finished cleanly [pid 26329]
alan@nvidia-desktop:~/src/turtlebot3$
```
