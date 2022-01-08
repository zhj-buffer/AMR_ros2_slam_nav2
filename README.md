# export the ENV
```
source /home/alan/ros2/install/setup.bash
export DISPLAY=:0
export ROS_DOMAIN_ID=7
export TURTLEBOT3_MODEL=waffle
```


# ros2_slam_nav2
AMR on Jetson 

```
sudo apt install libgazebo9-dev
sudo apt install liblua5.3-dev libangles-dev

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

# launch the robot

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
# Same the map from SLAM
```
alan@nvidia-desktop:~/src/turtlebot3$  ros2 run nav2_map_server map_saver_cli -f ~/map 
[INFO] [1641476904.985122753] [map_saver]:  
        map_saver lifecycle node launched.
        Waiting on external lifecycle transitions to activate
        See https://design.ros2.org/articles/node_lifecycle.html for more information.
[INFO] [1641476904.985493333] [map_saver]: Creating 
[INFO] [1641476904.986656372] [map_saver]: Saving map from 'map' topic to '/home/alan/map' file
[WARN] [1641476904.986730136] [map_saver]: Free threshold unspecified. Setting it to default value: 0.250000
[WARN] [1641476904.986820381] [map_saver]: Occupied threshold unspecified. Setting it to default value: 0.650000
[ERROR] [1641476906.991951357] [map_saver]: Failed to save the map: timeout 
[INFO] [1641476906.992239820] [map_saver]: Destroying 
alan@nvidia-desktop:~/src/turtlebot3$  
```
# launch the navigation with existed map
```
alan@nvidia-desktop:~/src/turtlebot3$ ros2 launch turtlebot3_navigation2 navigation2.launch.py map:=$HOME/map.yaml 
[INFO] [launch]: All log files can be found below /home/alan/.ros/log/2022-01-06-21-45-18-169586-nvidia-desktop-12076 
[INFO] [launch]: Default logging verbosity is set to INFO 
[INFO] [map_server-1]: process started with pid [12080] 
[INFO] [amcl-2]: process started with pid [12081] 
[INFO] [lifecycle_manager-3]: process started with pid [12082]
[INFO] [controller_server-4]: process started with pid [12083]
[INFO] [planner_server-5]: process started with pid [12084]
[INFO] [recoveries_server-6]: process started with pid [12085]
[INFO] [bt_navigator-7]: process started with pid [12086]
[INFO] [waypoint_follower-8]: process started with pid [12087]
[INFO] [lifecycle_manager-9]: process started with pid [12093] 
[INFO] [rviz2-10]: process started with pid [12110]
[lifecycle_manager-3] [INFO] [1641476719.448830337] [lifecycle_manager_localization]: Creating
[map_server-1] [INFO] [1641476719.478618366] [map_server]:
[map_server-1]  map_server lifecycle node launched.
[map_server-1]  Waiting on external lifecycle transitions to activate
[map_server-1]  See https://design.ros2.org/articles/node_lifecycle.html for more information.
[map_server-1] [INFO] [1641476719.479076151] [map_server]: Creating
[planner_server-5] [INFO] [1641476719.510275841] [planner_server]:
[planner_server-5]      planner_server lifecycle node launched.
[planner_server-5]      Waiting on external lifecycle transitions to activate
[planner_server-5]      See https://design.ros2.org/articles/node_lifecycle.html for more information.
[planner_server-5] [INFO] [1641476719.516583130] [planner_server]: Creating
[lifecycle_manager-3] [INFO] [1641476719.526574012] [lifecycle_manager_localization]: Creating and initializing lifecycle service clients
[amcl-2] [INFO] [1641476719.538274652] [amcl]:
[amcl-2]        amcl lifecycle node launched.
[amcl-2]        Waiting on external lifecycle transitions to activate
[amcl-2]        See https://design.ros2.org/articles/node_lifecycle.html for more information.
[amcl-2] [INFO] [1641476719.538676497] [amcl]: Creating
[lifecycle_manager-3] [INFO] [1641476719.549355769] [lifecycle_manager_localization]: Starting managed nodes bringup...
[lifecycle_manager-3] [INFO] [1641476719.549491425] [lifecycle_manager_localization]: Configuring map_server
[controller_server-4] [INFO] [1641476719.613523822] [controller_server]:
[controller_server-4]   controller_server lifecycle node launched.
[controller_server-4]   Waiting on external lifecycle transitions to activate
[controller_server-4]   See https://design.ros2.org/articles/node_lifecycle.html for more information.
[rviz2-10] No protocol specified
[rviz2-10] qt.qpa.screen: QXcbConnection: Could not connect to display :0
[rviz2-10] Could not connect to any X display.
[ERROR] [rviz2-10]: process has died [pid 12110, exit code 1, cmd '/home/alan/ros2/install/lib/rviz2/rviz2 -d /home/alan/src/turtlebot3/install/nav2_bringup/share/nav2_bringup/rviz/nav2_default_view.rviz --ros-args -r __node:=rviz2 --params-file /tmp/launch_params_advl7v77'].
[controller_server-4] [INFO] [1641476719.638749521] [controller_server]: Creating controller server
[map_server-1] [INFO] [1641476719.668176602] [map_server]: Configuring
[map_server-1] [INFO] [map_io]: Loading yaml file: /home/alan/map.yaml
[map_server-1] [ERROR] [map_io]: Failed processing YAML file /home/alan/map.yaml at position (-1:-1) for reason: bad file
[map_server-1] [ERROR] [1641476719.668780667] []: Caught exception in callback for transition 10
[map_server-1] [ERROR] [1641476719.668819869] []: Original error: Failed to load map yaml file: /home/alan/map.yaml
[map_server-1] [WARN] [1641476719.668869088] []: Error occurred while doing error handling.
[map_server-1] [FATAL] [1641476719.668908450] [map_server]: Lifecycle node map_server does not have error state implemented
[lifecycle_manager-3] [ERROR] [1641476719.673326739] [lifecycle_manager_localization]: Failed to change state for node: map_server
[lifecycle_manager-3] [ERROR] [1641476719.673441338] [lifecycle_manager_localization]: Failed to bring up all requested nodes. Aborting bringup.
[planner_server-5] [INFO] [1641476719.679067309] [global_costmap.global_costmap]:
[planner_server-5]      global_costmap lifecycle node launched.
[planner_server-5]      Waiting on external lifecycle transitions to activate
[planner_server-5]      See https://design.ros2.org/articles/node_lifecycle.html for more information.
[planner_server-5] [INFO] [1641476719.685851264] [global_costmap.global_costmap]: Creating Costmap
[bt_navigator-7] [INFO] [1641476719.802167544] [bt_navigator]:
[bt_navigator-7]        bt_navigator lifecycle node launched.
[bt_navigator-7]        Waiting on external lifecycle transitions to activate
[bt_navigator-7]        See https://design.ros2.org/articles/node_lifecycle.html for more information.
[bt_navigator-7] [INFO] [1641476719.807736328] [bt_navigator]: Creating
[controller_server-4] [INFO] [1641476719.808368619] [local_costmap.local_costmap]:
[controller_server-4]   local_costmap lifecycle node launched.
[controller_server-4]   Waiting on external lifecycle transitions to activate
[controller_server-4]   See https://design.ros2.org/articles/node_lifecycle.html for more information.
[controller_server-4] [INFO] [1641476719.811859658] [local_costmap.local_costmap]: Creating Costmap
[waypoint_follower-8] [INFO] [1641476719.830581897] [waypoint_follower]:
[waypoint_follower-8]   waypoint_follower lifecycle node launched.
[waypoint_follower-8]   Waiting on external lifecycle transitions to activate
[waypoint_follower-8]   See https://design.ros2.org/articles/node_lifecycle.html for more information.
[waypoint_follower-8] [INFO] [1641476719.832734047] [waypoint_follower]: Creating
[lifecycle_manager-9] [INFO] [1641476719.871500839] [lifecycle_manager_navigation]: Creating
[lifecycle_manager-9] [INFO] [1641476719.975401687] [lifecycle_manager_navigation]: Creating and initializing lifecycle service clients 
[recoveries_server-6] [INFO] [1641476719.992596355] [recoveries_server]:  
[recoveries_server-6]   recoveries_server lifecycle node launched.
[recoveries_server-6]   Waiting on external lifecycle transitions to activate
[recoveries_server-6]   See https://design.ros2.org/articles/node_lifecycle.html for more information.
[lifecycle_manager-9] [INFO] [1641476720.031926986] [lifecycle_manager_navigation]: Starting managed nodes bringup... 
[lifecycle_manager-9] [INFO] [1641476720.032097683] [lifecycle_manager_navigation]: Configuring controller_server
[controller_server-4] [INFO] [1641476720.034332269] [controller_server]: Configuring controller interface
[controller_server-4] [INFO] [1641476720.036771603] [controller_server]: Controller frequency set to 10.0000Hz
[controller_server-4] [INFO] [1641476720.036892569] [local_costmap.local_costmap]: Configuring
[controller_server-4] [INFO] [1641476720.057377337] [local_costmap.local_costmap]: Using plugin "static_layer" 
[controller_server-4] [INFO] [1641476720.066800156] [local_costmap.local_costmap]: Subscribing to the map topic (/map) with transient local durability 
[controller_server-4] [INFO] [1641476720.068887214] [local_costmap.local_costmap]: Initialized plugin "static_layer"
[controller_server-4] [INFO] [1641476720.068989076] [local_costmap.local_costmap]: Using plugin "obstacle_layer"
[controller_server-4] [INFO] [1641476720.070042029] [local_costmap.local_costmap]: Subscribed to Topics: scan
[controller_server-4] [INFO] [1641476720.088599684] [local_costmap.local_costmap]: Initialized plugin "obstacle_layer" 
[controller_server-4] [INFO] [1641476720.088823216] [local_costmap.local_costmap]: Using plugin "inflation_layer" 
[controller_server-4] [INFO] [1641476720.096785892] [local_costmap.local_costmap]: Initialized plugin "inflation_layer" 
[controller_server-4] [INFO] [1641476720.128521003] [controller_server]: Created progress_checker : progress_checker of type nav2_controller::SimpleProgressChecker  
[controller_server-4] [INFO] [1641476720.132669133] [controller_server]: Created goal_checker : goal_checker of type nav2_controller::SimpleGoalChecker
[controller_server-4] [INFO] [1641476720.145015312] [controller_server]: Created controller : FollowPath of type dwb_core::DWBLocalPlanner
[controller_server-4] [INFO] [1641476720.147809609] [controller_server]: Setting transform_tolerance to 0.200000
[controller_server-4] [INFO] [1641476720.210460426] [controller_server]: Using critic "RotateToGoal" (dwb_critics::RotateToGoalCritic)
[controller_server-4] [INFO] [1641476720.215678408] [controller_server]: Critic plugin initialized
[controller_server-4] [INFO] [1641476720.216578009] [controller_server]: Using critic "Oscillation" (dwb_critics::OscillationCritic)
[controller_server-4] [INFO] [1641476720.219867949] [controller_server]: Critic plugin initialized
[controller_server-4] [INFO] [1641476720.220404170] [controller_server]: Using critic "BaseObstacle" (dwb_critics::BaseObstacleCritic)
[controller_server-4] [INFO] [1641476720.222051076] [controller_server]: Critic plugin initialized
[controller_server-4] [INFO] [1641476720.223211267] [controller_server]: Using critic "GoalAlign" (dwb_critics::GoalAlignCritic)
[controller_server-4] [INFO] [1641476720.225651881] [controller_server]: Critic plugin initialized
[controller_server-4] [INFO] [1641476720.227154491] [controller_server]: Using critic "PathAlign" (dwb_critics::PathAlignCritic)
[controller_server-4] [INFO] [1641476720.230036857] [controller_server]: Critic plugin initialized
[controller_server-4] [INFO] [1641476720.231678994] [controller_server]: Using critic "PathDist" (dwb_critics::PathDistCritic)
[controller_server-4] [INFO] [1641476720.233369711] [controller_server]: Critic plugin initialized
[controller_server-4] [INFO] [1641476720.234623571] [controller_server]: Using critic "GoalDist" (dwb_critics::GoalDistCritic)
[controller_server-4] [INFO] [1641476720.235270839] [controller_server]: Critic plugin initialized
[controller_server-4] [INFO] [1641476720.235356572] [controller_server]: Controller Server has FollowPath  controllers available.
[lifecycle_manager-9] [INFO] [1641476720.254149183] [lifecycle_manager_navigation]: Configuring planner_server
[planner_server-5] [INFO] [1641476720.255414244] [planner_server]: Configuring
[planner_server-5] [INFO] [1641476720.255553580] [global_costmap.global_costmap]: Configuring
[planner_server-5] [INFO] [1641476720.280974137] [global_costmap.global_costmap]: Using plugin "static_layer"
[planner_server-5] [INFO] [1641476720.298015101] [global_costmap.global_costmap]: Subscribing to the map topic (/map) with transient local durability
[planner_server-5] [INFO] [1641476720.301645092] [global_costmap.global_costmap]: Initialized plugin "static_layer"
[planner_server-5] [INFO] [1641476720.301795724] [global_costmap.global_costmap]: Using plugin "obstacle_layer"
[planner_server-5] [INFO] [1641476720.305228648] [global_costmap.global_costmap]: Subscribed to Topics: scan
[planner_server-5] [INFO] [1641476720.320119030] [global_costmap.global_costmap]: Initialized plugin "obstacle_layer"
[planner_server-5] [INFO] [1641476720.320249725] [global_costmap.global_costmap]: Using plugin "voxel_layer"
[planner_server-5] [INFO] [1641476720.324365406] [global_costmap.global_costmap]: Subscribed to Topics: pointcloud
[planner_server-5] [INFO] [1641476720.355154577] [global_costmap.global_costmap]: Initialized plugin "voxel_layer"
[planner_server-5] [INFO] [1641476720.355288312] [global_costmap.global_costmap]: Using plugin "inflation_layer"
[planner_server-5] [INFO] [1641476720.363765736] [global_costmap.global_costmap]: Initialized plugin "inflation_layer"
[planner_server-5] [INFO] [1641476720.388331943] [planner_server]: Created global planner plugin GridBased of type nav2_navfn_planner/NavfnPlanner
[planner_server-5] [INFO] [1641476720.388484783] [planner_server]: Configuring plugin GridBased of type NavfnPlanner
[planner_server-5] [INFO] [1641476720.408485781] [planner_server]: Planner Server has GridBased  planners available.
[lifecycle_manager-9] [INFO] [1641476720.427712304] [lifecycle_manager_navigation]: Configuring recoveries_server
[recoveries_server-6] [INFO] [1641476720.429749503] [recoveries_server]: Configuring
[recoveries_server-6] [INFO] [1641476720.460598550] [recoveries_server]: Creating recovery plugin spin of type nav2_recoveries/Spin
[recoveries_server-6] [INFO] [1641476720.464194810] [recoveries_server]: Configuring spin
[recoveries_server-6] [INFO] [1641476720.480407697] [recoveries_server]: Creating recovery plugin backup of type nav2_recoveries/BackUp
[recoveries_server-6] [INFO] [1641476720.484256643] [recoveries_server]: Configuring backup
[recoveries_server-6] [INFO] [1641476720.498303523] [recoveries_server]: Creating recovery plugin wait of type nav2_recoveries/Wait
[recoveries_server-6] [INFO] [1641476720.500906098] [recoveries_server]: Configuring wait
[lifecycle_manager-9] [INFO] [1641476720.517062949] [lifecycle_manager_navigation]: Configuring bt_navigator
[bt_navigator-7] [INFO] [1641476720.519141527] [bt_navigator]: Configuring
[bt_navigator-7] [INFO] [1641476720.651713894] [bt_navigator_rclcpp_node]: Waiting for "compute_path_to_pose" action server 
[bt_navigator-7] [INFO] [1641476720.652706045] [bt_navigator_rclcpp_node]: "ComputePathToPose" BtActionNode initialized 
[bt_navigator-7] [INFO] [1641476720.655741059] [bt_navigator_rclcpp_node]: Waiting for "global_costmap/clear_entirely_global_costmap" service
[bt_navigator-7] [INFO] [1641476720.656164186] [bt_navigator_rclcpp_node]: "ClearGlobalCostmap-Context" BtServiceNode initialized
[bt_navigator-7] [INFO] [1641476720.667845176] [bt_navigator_rclcpp_node]: Waiting for "follow_path" action server 
[bt_navigator-7] [INFO] [1641476720.668472283] [bt_navigator_rclcpp_node]: "FollowPath" BtActionNode initialized
[bt_navigator-7] [INFO] [1641476720.671524738] [bt_navigator_rclcpp_node]: Waiting for "local_costmap/clear_entirely_local_costmap" service 
[bt_navigator-7] [INFO] [1641476720.672882764] [bt_navigator_rclcpp_node]: "ClearLocalCostmap-Context" BtServiceNode initialized 
[bt_navigator-7] [INFO] [1641476720.675555902] [bt_navigator_rclcpp_node]: Waiting for "local_costmap/clear_entirely_local_costmap" service
[bt_navigator-7] [INFO] [1641476720.675962452] [bt_navigator_rclcpp_node]: "ClearLocalCostmap-Subtree" BtServiceNode initialized
[bt_navigator-7] [INFO] [1641476720.678037158] [bt_navigator_rclcpp_node]: Waiting for "global_costmap/clear_entirely_global_costmap" service 
[bt_navigator-7] [INFO] [1641476720.678425211] [bt_navigator_rclcpp_node]: "ClearGlobalCostmap-Subtree" BtServiceNode initialized
[bt_navigator-7] [INFO] [1641476720.688683340] [bt_navigator_rclcpp_node]: Waiting for "spin" action server
[bt_navigator-7] [INFO] [1641476720.689367057] [bt_navigator_rclcpp_node]: "Spin" BtActionNode initialized
[bt_navigator-7] [INFO] [1641476720.700287846] [bt_navigator_rclcpp_node]: Waiting for "wait" action server
[bt_navigator-7] [INFO] [1641476720.700914088] [bt_navigator_rclcpp_node]: "Wait" BtActionNode initialized
[lifecycle_manager-9] [INFO] [1641476720.710973486] [lifecycle_manager_navigation]: Configuring waypoint_follower
[waypoint_follower-8] [INFO] [1641476720.712913368] [waypoint_follower]: Configuring 
[lifecycle_manager-9] [INFO] [1641476720.781266833] [lifecycle_manager_navigation]: Activating controller_server 
[controller_server-4] [INFO] [1641476720.782228934] [controller_server]: Activating 
[controller_server-4] [INFO] [1641476720.782326123] [local_costmap.local_costmap]: Activating
[controller_server-4] [INFO] [1641476720.782371054] [local_costmap.local_costmap]: Checking transform
[controller_server-4] [INFO] [1641476720.782509845] [local_costmap.local_costmap]: Timed out waiting for transform from base_link to odom to become available, tf error: Invalid frame ID "odom" passed to canTransform argument target_frame - frame does not exist
```

```
alan@nvidia-desktop:~/src/turtlebot3$ ros2 topic list 
/amcl/transition_event 
/bms_fb
/bms_flag_fb
/bt_navigator/transition_event
/ctrl_cmd
/ctrl_fb
/goal_pose
/imu
/io_cmd
/io_fb 
/joint_states
/l_wheel_fb
/mag_pose_2d
/map_server/transition_event
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
/waypoint_follower/transition_event
alan@nvidia-desktop:~/src/turtlebot3$  
```
