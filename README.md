# export the ENV
```
source  ./install/setup.bash
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
ros2 launch amr_bring all.launch.py
```

![amr](https://user-images.githubusercontent.com/27679222/156326068-f38b1550-f9df-4bf2-a0a9-d893a616b85d.png)

```
nvidia@nvidia-desktop:~/workspace/alan/AMR$ ros2 launch amr_bringup robot.launch.py  
[INFO] [launch]: All log files can be found below /home/nvidia/.ros/log/2022-01-11-08-54-29-668969-nvidia-desktop-18209 
[INFO] [launch]: Default logging verbosity is set to INFO 
urdf_file_name : yhs_dgt001m.urdf 
[INFO] [robot_state_publisher-1]: process started with pid [18214] 
[INFO] [ahrs_driver_node-2]: process started with pid [18215] 
[INFO] [rslidar_sdk_node-3]: process started with pid [18216]
[INFO] [ros2_drive_package_can_ctrol-4]: process started with pid [18217]
[INFO] [rada_pub-5]: process started with pid [18218]
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
[robot_state_publisher-1] Parsing robot urdf xml string.
[robot_state_publisher-1] Link base_link had 2 children
[robot_state_publisher-1] Link imu_link had 0 children
[robot_state_publisher-1] Link base_scan had 0 children
[robot_state_publisher-1] [INFO] [1641862469.949822013] [robot_state_publisher]: got segment base_footprint
[robot_state_publisher-1] [INFO] [1641862469.950346999] [robot_state_publisher]: got segment base_link
[robot_state_publisher-1] [INFO] [1641862469.950411867] [robot_state_publisher]: got segment base_scan
[robot_state_publisher-1] [INFO] [1641862469.950442940] [robot_state_publisher]: got segment imu_link
[ros2_drive_package_can_ctrol-4] [INFO] [1641862469.994590606] [ros2_drive_package_can_ctrol]: Node inited:' 
[ros2_drive_package_can_ctrol-4] [INFO] [1641862469.996615957] [ros2_drive_package_can_ctrol]: >>open can deivce success!
[rslidar_sdk_node-3] ---here--------------------------------------------------- 
[rslidar_sdk_node-3] Send LaserScan To : ROS
[rslidar_sdk_node-3] LaserScan Topic: /scan
[rslidar_sdk_node-3] ------------------------------------------------------
[rslidar_sdk_node-3] RoboSense-LiDAR-Driver is running..... 
[ahrs_driver_node-2] [ERROR] [1641862519.936483789] [ahrs_bringup]: Serial Port initialized 
[ahrs_driver_node-2] [INFO] [1641862519.938682653] [ahrs_bringup]: ahrsBringup::processLoop: start
```

```
nvidia@nvidia-desktop:~/workspace/alan/AMR$ ros2 topic list 
/bms_fb 
/bms_flag_fb
/clicked_point
/constraint_list 
/ctrl_cmd
/ctrl_fb
/imu
/initialpose
/io_cmd
/io_fb
/joint_states
/l_wheel_fb
/landmark_poses_list
/map
/map_updates
/move_base_simple/goal
/odom
/parameter_events
/r_wheel_fb
/rada1
/rada2
/rear_free_ctrl_cmd
/robot_description
/rosout
/rslidar_points
/scan
/scan_matched_points2
/smoother_cmd_vel
/submap_list
/tf
/tf_static
/trajectory_node_list
nvidia@nvidia-desktop:~/workspace/alan/AMR$  
```
```
nvidia@nvidia-desktop:~/workspace/alan/AMR$ ros2 service list 
/RadaPublisher1/describe_parameters 
/RadaPublisher1/get_parameter_types
/RadaPublisher1/get_parameters
/RadaPublisher1/list_parameters
/RadaPublisher1/set_parameters 
/RadaPublisher1/set_parameters_atomically
/RadaPublisher2/describe_parameters
/RadaPublisher2/get_parameter_types
/RadaPublisher2/get_parameters
/RadaPublisher2/list_parameters
/RadaPublisher2/set_parameters
/RadaPublisher2/set_parameters_atomically
/cartographer_node/describe_parameters
/cartographer_node/get_parameter_types
/cartographer_node/get_parameters
/cartographer_node/list_parameters
/cartographer_node/set_parameters
/cartographer_node/set_parameters_atomically
/finish_trajectory
/occupancy_grid_node/describe_parameters
/occupancy_grid_node/get_parameter_types
/occupancy_grid_node/get_parameters
/occupancy_grid_node/list_parameters
/occupancy_grid_node/set_parameters
/occupancy_grid_node/set_parameters_atomically
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
/rslidar_laserscan_adapter/describe_parameters
/rslidar_laserscan_adapter/get_parameter_types
/rslidar_laserscan_adapter/get_parameters
/rslidar_laserscan_adapter/list_parameters
/rslidar_laserscan_adapter/set_parameters
/rslidar_laserscan_adapter/set_parameters_atomically
/rslidar_points_adapter/describe_parameters 
/rslidar_points_adapter/get_parameter_types
/rslidar_points_adapter/get_parameters
/rslidar_points_adapter/list_parameters
/rslidar_points_adapter/set_parameters
/rslidar_points_adapter/set_parameters_atomically
/rviz2/describe_parameters
/rviz2/get_parameter_types
/rviz2/get_parameters
/rviz2/list_parameters
/rviz2/set_parameters
/rviz2/set_parameters_atomically
/start_trajectory
/submap_query
/write_state
nvidia@nvidia-desktop:~/workspace/alan/AMR$ ros2 node list 
/RadaPublisher1 
/RadaPublisher2
/cartographer_node
/occupancy_grid_node 
/robot_state_publisher
/ros2_drive_package_can_ctrol
/rslidar_laserscan_adapter
/rslidar_points_adapter
/rviz2
/transform_listener_impl_559187a380
/transform_listener_impl_55b8376620
nvidia@nvidia-desktop:~/workspace/alan/AMR$  
```
![61bbfc2ba5d1cf39e173bca50b26c86](https://user-images.githubusercontent.com/27679222/150268909-d8becc0b-905f-4cd6-8573-f915f096804f.png)


# launch the slam
```
nvidia@nvidia-desktop:~/workspace/alan/AMR$ ros2 launch amr_cartographer cartographer.launch.py  
[INFO] [launch]: All log files can be found below /home/nvidia/.ros/log/2022-01-11-08-59-02-933516-nvidia-desktop-18618 
[INFO] [launch]: Default logging verbosity is set to INFO 
[INFO] [cartographer_node-1]: process started with pid [18623] 
[INFO] [occupancy_grid_node-2]: process started with pid [18624] 
[INFO] [rviz2-3]: process started with pid [18625]
[cartographer_node-1] [INFO] [1641862743.153832673] [cartographer_ros]: I0111 08:59:03.000000 18623 configuration_file_resolver.cc:41] Found '/home/nvidia/workspace/alan/AMR/install/turtlebot3_cartographer/share/turtlebot3_cartographer/config/turtlebot3_lds_2d.lua' for 'turtlebot3_lds_2d.lua'.
[cartographer_node-1] [INFO] [1641862743.154662635] [cartographer_ros]: I0111 08:59:03.000000 18623 configuration_file_resolver.cc:41] Found '/home/nvidia/workspace/alan/AMR/install/cartographer/share/cartographer/configuration_files/map_builder.lua' for 'map_builder.lua'.
[cartographer_node-1] [INFO] [1641862743.154792786] [cartographer_ros]: I0111 08:59:03.000000 18623 configuration_file_resolver.cc:41] Found '/home/nvidia/workspace/alan/AMR/install/cartographer/share/cartographer/configuration_files/map_builder.lua' for 'map_builder.lua'.
[cartographer_node-1] [INFO] [1641862743.154965658] [cartographer_ros]: I0111 08:59:03.000000 18623 configuration_file_resolver.cc:41] Found '/home/nvidia/workspace/alan/AMR/install/cartographer/share/cartographer/configuration_files/pose_graph.lua' for 'pose_graph.lua'.
[cartographer_node-1] [INFO] [1641862743.155040222] [cartographer_ros]: I0111 08:59:03.000000 18623 configuration_file_resolver.cc:41] Found '/home/nvidia/workspace/alan/AMR/install/cartographer/share/cartographer/configuration_files/pose_graph.lua' for 'pose_graph.lua'.
[cartographer_node-1] [INFO] [1641862743.155408049] [cartographer_ros]: I0111 08:59:03.000000 18623 configuration_file_resolver.cc:41] Found '/home/nvidia/workspace/alan/AMR/install/cartographer/share/cartographer/configuration_files/trajectory_builder.lua' for 'trajectory_builder.lua'.
[cartographer_node-1] [INFO] [1641862743.155480853] [cartographer_ros]: I0111 08:59:03.000000 18623 configuration_file_resolver.cc:41] Found '/home/nvidia/workspace/alan/AMR/install/cartographer/share/cartographer/configuration_files/trajectory_builder.lua' for 'trajectory_builder.lua'.
[cartographer_node-1] [INFO] [1641862743.155606715] [cartographer_ros]: I0111 08:59:03.000000 18623 configuration_file_resolver.cc:41] Found '/home/nvidia/workspace/alan/AMR/install/cartographer/share/cartographer/configuration_files/trajectory_builder_2d.lua' for 'trajectory_builder_2d.lua'.
[cartographer_node-1] [INFO] [1641862743.155723137] [cartographer_ros]: I0111 08:59:03.000000 18623 configuration_file_resolver.cc:41] Found '/home/nvidia/workspace/alan/AMR/install/cartographer/share/cartographer/configuration_files/trajectory_builder_2d.lua' for 'trajectory_builder_2d.lua'.
[cartographer_node-1] [INFO] [1641862743.156051954] [cartographer_ros]: I0111 08:59:03.000000 18623 configuration_file_resolver.cc:41] Found '/home/nvidia/workspace/alan/AMR/install/cartographer/share/cartographer/configuration_files/trajectory_builder_3d.lua' for 'trajectory_builder_3d.lua'.
[cartographer_node-1] [INFO] [1641862743.156123862] [cartographer_ros]: I0111 08:59:03.000000 18623 configuration_file_resolver.cc:41] Found '/home/nvidia/workspace/alan/AMR/install/cartographer/share/cartographer/configuration_files/trajectory_builder_3d.lua' for 'trajectory_builder_3d.lua'.
[cartographer_node-1] [INFO] [1641862743.232129414] [cartographer_ros]: I0111 08:59:03.000000 18623 submap_2d.cc:187] Added submap 1
[cartographer_node-1] [INFO] [1641862743.232301551] [cartographer_ros]: I0111 08:59:03.000000 18623 map_builder_bridge.cc:132] Added trajectory with ID '0'.
[cartographer_node-1] Warning: Invalid frame ID "imu_link" passed to canTransform argument target_frame - frame does not exist 
[cartographer_node-1]          at line 133 in /home/nvidia/workspace/ros2/src/ros2/geometry2/tf2/src/buffer_core.cpp
[cartographer_node-1] Warning: Invalid frame ID "imu_link" passed to canTransform argument target_frame - frame does not exist
[cartographer_node-1]          at line 133 in /home/nvidia/workspace/ros2/src/ros2/geometry2/tf2/src/buffer_core.cpp 
[cartographer_node-1] Warning: Invalid frame ID "imu_link" passed to canTransform argument target_frame - frame does not exist 
[cartographer_node-1]          at line 133 in /home/nvidia/workspace/ros2/src/ros2/geometry2/tf2/src/buffer_core.cpp
[cartographer_node-1] Warning: Invalid frame ID "imu_link" passed to canTransform argument target_frame - frame does not exist 
[cartographer_node-1]          at line 133 in /home/nvidia/workspace/ros2/src/ros2/geometry2/tf2/src/buffer_core.cpp
[cartographer_node-1] Warning: Invalid frame ID "imu_link" passed to canTransform argument target_frame - frame does not exist 
[cartographer_node-1]          at line 133 in /home/nvidia/workspace/ros2/src/ros2/geometry2/tf2/src/buffer_core.cpp
[rviz2-3] XmbTextListToTextProperty result code -2 
[rviz2-3] XmbTextListToTextProperty result code -2 
[rviz2-3] [INFO] [1641862744.181612898] [rviz2]: Stereo is NOT SUPPORTED 
[rviz2-3] [INFO] [1641862744.182240258] [rviz2]: OpenGl version: 4.6 (GLSL 4.6) 
[rviz2-3] XmbTextListToTextProperty result code -2 
[rviz2-3] XmbTextListToTextProperty result code -2 
[rviz2-3] [INFO] [1641862744.264968234] [rviz2]: Stereo is NOT SUPPORTED 
[occupancy_grid_node-2] [WARN] [1641862744.542627207] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[rviz2-3] Parsing robot urdf xml string. 
[rviz2-3] [WARN] [1641862744.742622110] [rviz2]: The STL file 'package://yhs_chassis_description/meshes/DGT-001M.STL' is malformed. It starts with the word 'solid', 
indicating that it's an ASCII STL file, but it does not contain the word 'endsolid' so it is either a malformed ASCII STL file or it is actually a binary STL file. Trying to interpret it as a binary STL file instead.
[rviz2-3] XmbTextListToTextProperty result code -2 
[rviz2-3] XmbTextListToTextProperty result code -2 
[rviz2-3] XmbTextListToTextProperty result code -2 
[occupancy_grid_node-2] [WARN] [1641862745.542582297] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[rviz2-3] XmbTextListToTextProperty result code -2 
[occupancy_grid_node-2] [WARN] [1641862746.542665362] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862747.542710057] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862748.542765313] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862749.542814168] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862750.542862736] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862751.543127763] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862752.543012002] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862753.543047257] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862754.543093809] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862755.543077221] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862756.543175231] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862757.543227320] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862758.543257935] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862759.543303559] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862760.543376896] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862761.543414264] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862762.543527540] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862763.543834233] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862764.543534176] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862765.543645244] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862766.543739990] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862767.543770222] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862768.543836360] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862769.543924035] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862770.543830612] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862771.543964497] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862772.543991849] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862773.543930973] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862774.544051674] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862775.544138997] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862776.544159565] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862777.544210598] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862778.544283393] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862779.544276567] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862780.544469816] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862781.544514418] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862782.544502216] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862783.544548418] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862784.544716289] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862785.544572977] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862786.544717520] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862787.544802028] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862788.544716383] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862789.544859038] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862790.544937946] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862791.544914768] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862792.545161685] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[cartographer_node-1] [WARN] [1641862793.376474422] [cartographer_ros]: W0111 08:59:53.000000 18623 ordered_multi_queue.cc:155] Queue waiting for data: (0, imu) 
[occupancy_grid_node-2] [WARN] [1641862793.545025542] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862794.545123746] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862795.545223840] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862796.545198070] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862797.545223088] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
[occupancy_grid_node-2] [WARN] [1641862798.545314636] [occupancy_grid_node]: submap_slices and last_frame_id is empty 
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
alan@nvidia-desktop:~/src/turtlebot3$ ros2 launch amr_navigation2 navigation2.launch.py map:=$HOME/map.yaml 
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
alan@nvidia-desktop:~/src/AMR$ ros2 run rslidar_sdk rslidar_sdk_node  
******************************************************** 
**********                                    **********
**********    RSLidar_SDK Version: v1.3.0     **********
**********                                    **********
********************************************************
------------------------------------------------------ 
Receive Packets From : Online LiDAR
Msop Port: 6699
Difop Port: 7788
------------------------------------------------------
------------------------------------------------------ 
Send PointCloud To : ROS
PointCloud Topic: /rslidar_points
------------------------------------------------------
---here--------------------------------------------------- 
Send LaserScan To : ROS
LaserScan Topic: /scan
------------------------------------------------------
set ring: 6 
RoboSense-LiDAR-Driver is running.....
```

```
---
header: 
  stamp:
    sec: 1641795671
    nanosec: 911600828
  frame_id: /rslidar
angle_min: -3.1415927410125732
angle_max: 3.1415927410125732
angle_increment: 0.003490658476948738
time_increment: 0.0
scan_time: 0.0
range_min: 0.0
range_max: 150.0
ranges: [.nan, 2.7795379161834717, 2.7795379161834717, 2.7745444774627686, 2.7695515155792236, 2.7695515155792236, 2.7645583152770996, 2.7345988750457764, .inf, 2.3950586318969727, 2.3900654315948486, 2.3900654315948486, 2.3900654315948486, 2.3900654315948486, 2.3850719928741455, 2.3950586318969727, .inf, 2.804504156112671, 2.799510955810547, 2.799510955810547, 2.7995107173919678, 2.804504156112671, 2.794517755508423, 2.794517755508423, 2.799510955810547, .inf, 2.4050450325012207, 2.3900654315948486, 2.3900654315948486, 2.3850722312927246, 2.3900654315948486, 2.3900654315948486, 2.3950588703155518, 2.4000518321990967, 2.4050450325012207, 2.4050450325012207, 2.435004472732544, 2.3900654315948486, 2.2502546310424805, 2.200322389602661, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.190335750579834, 2.190335750579834, 2.190335750579834, 2.190335750579834, 2.190335750579834, 2.190335750579834, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.190335750579834, 2.200322389602661, 2.205315351486206, 2.2202951908111572, 2.200322389602661, 2.195328950881958, 2.18534255027771, 2.180349349975586, 2.195329189300537, 2.200322389602661, 2.205315351486206, 2.2103090286254883, 2.2103090286254883, 2.210308790206909, 2.210308790206909, 2.210308790206909, 2.2153022289276123, 2.2202951908111572, 2.2252888679504395, 2.2252888679504395, 2.2302818298339844, 2.2252888679504395, 2.2302818298339844, 2.2153022289276123, 2.2352750301361084, 2.210308790206909, 2.2352752685546875, .inf, 2.8843960762023926, 2.8794031143188477, 2.8893892765045166, 2.8993756771087646, 2.8993756771087646, 2.8993756771087646, 2.9043688774108887, 2.9043688774108887, 2.909362554550171, 2.909362554550171, 2.909362316131592, 2.8993756771087646, 2.8594298362731934, .inf, 2.534869432449341, 2.564828634262085, 2.469957113265991, 2.459970712661743, 2.459970712661743, 2.444991111755371, 2.3900654315948486, 2.070497989654541, 1.8907414674758911, 1.8008633852005005, 1.7758969068527222, 1.7559239864349365, 1.7559239864349365, 1.7509307861328125, 1.745937705039978, 1.740944266319275, 1.740944266319275, 1.7359510660171509, 1.7359511852264404, 
1.7309579849243164, 1.7309577465057373, 1.7309579849243164, 1.7309578657150269, 1.7309578657150269, '...']
intensities: [0.0, 6.0, 6.0, 7.0, 7.0, 7.0, 8.0, 8.0, 0.0, 11.0, 12.0, 13.0, 12.0, 13.0, 13.0, 12.0, 0.0, 33.0, 42.0, 52.0, 52.0, 52.0, 57.0, 49.0, 60.0, 0.0, 13.0, 
15.0, 15.0, 15.0, 14.0, 12.0, 17.0, 15.0, 12.0, 30.0, 23.0, 4.0, 3.0, 6.0, 9.0, 8.0, 8.0, 7.0, 6.0, 6.0, 6.0, 5.0, 5.0, 5.0, 4.0, 4.0, 4.0, 3.0, 3.0, 3.0, 3.0, 3.0, 
3.0, 3.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 0.0, 5.0, 
7.0, 7.0, 7.0, 7.0, 7.0, 7.0, 7.0, 7.0, 7.0, 7.0, 7.0, 8.0, 0.0, 30.0, 9.0, 3.0, 2.0, 2.0, 2.0, 3.0, 3.0, 6.0, 3.0, 8.0, 9.0, 9.0, 9.0, 8.0, 9.0, 9.0, 10.0, 11.0, 11.0, 12.0, 11.0, 11.0, 10.0, '...']
---
header: 
  stamp:
    sec: 1641795672
    nanosec: 11592150
  frame_id: /rslidar
angle_min: -3.1415927410125732
angle_max: 3.1415927410125732
angle_increment: 0.003490658476948738
time_increment: 0.0
scan_time: 0.0
range_min: 0.0
range_max: 150.0
ranges: [.nan, 2.7795379161834717, 2.7745447158813477, 2.7745447158813477, 2.7695515155792236, 2.7795379161834717, 2.7645583152770996, 2.719619035720825, .inf, 2.3900654315948486, 2.3900654315948486, 2.3850719928741455, 2.3750855922698975, 2.3850719928741455, 2.3850719928741455, 2.4000518321990967, .inf, 2.799510955810547, 2.794517755508423, 2.794517755508423, 2.7945175170898438, 2.799510955810547, 2.794517755508423, 2.7895243167877197, 2.7745447158813477, .inf, 2.3950586318969727, 2.3900654315948486, 2.3900654315948486, 2.3900654315948486, 2.3900654315948486, 2.3900654315948486, 2.3900654315948486, 2.3950586318969727, 2.4150314331054688, 2.4050450325012207, 2.449984073638916, 2.345126152038574, 2.2202951908111572, 2.190335750579834, 2.180349349975586, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.185342788696289, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.185342788696289, 2.190335750579834, 2.190335750579834, 2.190335750579834, 2.190335750579834, 2.190335750579834, 2.190335750579834, 2.195328950881958, 2.195328950881958, 2.200322389602661, 2.200322389602661, 2.205315351486206, 2.205315113067627, 2.205315351486206, 2.205315351486206, 2.205315351486206, 2.205315351486206, 2.205315351486206, 2.205315351486206, 2.21030855178833, 2.2153022289276123, 2.2153022289276123, 2.2202951908111572, 2.2202951908111572, 2.2202951908111572, 2.2202954292297363, 2.2202951908111572, 2.2153022289276123, 2.2202954292297363, 2.205315113067627, 2.205315113067627, 2.2252886295318604, 2.2802140712738037, .inf, 2.929335117340088, 2.929335355758667, 2.934328317642212, 2.934328079223633, 2.939321756362915, 2.94431471824646, 2.94431471824646, 2.949307918548584, 2.949308156967163, 2.949308156967163, 2.949308156967163, 2.924341917037964, .inf, 2.579808235168457, 2.549849033355713, 2.5099029541015625, 2.449984550476074, 2.420024871826172, 2.435004472732544, 2.439997911453247, .inf, 1.9506604671478271, 1.865775227546692, 1.7908767461776733, 1.7659106254577637, 1.7509307861328125, 1.740944266319275, 1.7359510660171509, 1.7359511852264404, 1.7359510660171509, 1.7309579849243164, 1.7309579849243164, 1.7309578657150269, 1.7259645462036133, 1.7259645462036133, 1.7259646654129028, 1.7259646654129028, 1.7259646654129028, '...']
intensities: [0.0, 6.0, 6.0, 7.0, 7.0, 8.0, 8.0, 8.0, 0.0, 12.0, 12.0, 12.0, 12.0, 13.0, 13.0, 12.0, 0.0, 39.0, 43.0, 54.0, 52.0, 54.0, 50.0, 47.0, 62.0, 0.0, 15.0, 
16.0, 17.0, 17.0, 16.0, 13.0, 12.0, 9.0, 18.0, 29.0, 15.0, 3.0, 3.0, 9.0, 8.0, 8.0, 7.0, 7.0, 6.0, 6.0, 6.0, 5.0, 5.0, 5.0, 4.0, 4.0, 4.0, 4.0, 4.0, 3.0, 3.0, 3.0, 3.0, 3.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 0.0, 8.0, 11.0, 10.0, 10.0, 11.0, 10.0, 11.0, 10.0, 11.0, 11.0, 11.0, 11.0, 0.0, 17.0, 26.0, 5.0, 2.0, 2.0, 3.0, 3.0, 0.0, 4.0, 7.0, 4.0, 8.0, 9.0, 8.0, 8.0, 9.0, 9.0, 9.0, 10.0, 11.0, 11.0, 11.0, 10.0, 11.0, 10.0, '...']
---
header: 
  stamp:
    sec: 1641795672
    nanosec: 111577034
  frame_id: /rslidar
angle_min: -3.1415927410125732
angle_max: 3.1415927410125732
angle_increment: 0.003490658476948738
time_increment: 0.0
scan_time: 0.0
range_min: 0.0
range_max: 150.0
ranges: [.nan, 2.7795379161834717, 2.7795379161834717, 2.7745447158813477, 2.7795379161834717, 2.7695515155792236, 2.7745447158813477, 2.7695517539978027, .inf, 2.435004472732544, 2.3850719928741455, 2.3800790309906006, 2.3850719928741455, 2.3900654315948486, 2.3850719928741455, 2.3900654315948486, 2.410038471221924, 2.794517993927002, 2.799510955810547, 2.804504156112671, 2.794517993927002, 2.799510955810547, 2.799510955810547, 2.794517755508423, 2.7745444774627686, .inf, 2.3900654315948486, 2.3900654315948486, 2.3900654315948486, 2.3900654315948486, 2.3900654315948486, 2.3900654315948486, 2.3900654315948486, .inf, 2.4000518321990967, 2.410038471221924, 2.449984312057495, 2.320159912109375, 2.2153022289276123, 2.180349349975586, 2.180349349975586, 2.18534255027771, 2.180349349975586, 2.180349349975586, 2.180349349975586, 2.180349349975586, 2.180349588394165, 2.180349349975586, 2.180349349975586, 2.180349349975586, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.190335750579834, 2.190335750579834, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.190335750579834, 2.190335750579834, 2.190335988998413, 2.195328950881958, 2.195328950881958, 2.195328950881958, 2.200322389602661, 2.205315351486206, 2.210308790206909, 2.2153022289276123, 2.2153022289276123, 2.2202951908111572, 2.2202951908111572, 2.2202951908111572, 2.2153022289276123, 2.2153022289276123, 2.2202951908111572, 2.2202954292297363, 2.2252888679504395, 2.2302818298339844, 2.2302820682525635, 2.2352750301361084, 2.2402682304382324, 2.2452616691589355, 2.2502546310424805, 2.2602410316467285, 2.290200710296631, .inf, 2.934328079223633, 2.944314956665039, 2.939321994781494, 2.949308395385742, 2.944314479827881, 2.949307918548584, 2.949308156967163, 2.954301118850708, 2.9592947959899902, 2.954301118850708, 2.954301118850708, 2.934328079223633, .inf, 2.569821834564209, 2.564828395843506, 2.5148963928222656, 2.45497727394104, 2.45497727394104, 2.45497727394104, 2.420024871826172, .inf, 1.920701026916504, 1.8408091068267822, 1.7858835458755493, 1.7609171867370605, 1.750930905342102, 1.7459375858306885, 1.740944266319275, 1.740944266319275, 1.7359510660171509, 1.7359510660171509, 1.7309579849243164, 1.7309578657150269, 1.7309578657150269, 1.7309578657150269, 1.7309579849243164, 1.7309579849243164, 1.7309579849243164, '...']
intensities: [0.0, 6.0, 7.0, 7.0, 7.0, 7.0, 8.0, 8.0, 0.0, 7.0, 12.0, 12.0, 13.0, 12.0, 13.0, 12.0, 12.0, 45.0, 45.0, 52.0, 55.0, 49.0, 49.0, 50.0, 48.0, 0.0, 15.0, 
15.0, 15.0, 15.0, 14.0, 12.0, 16.0, 0.0, 11.0, 27.0, 11.0, 3.0, 3.0, 9.0, 8.0, 9.0, 7.0, 6.0, 6.0, 6.0, 6.0, 5.0, 5.0, 5.0, 4.0, 4.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 2.0, 3.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 0.0, 10.0, 
11.0, 11.0, 11.0, 11.0, 11.0, 11.0, 11.0, 11.0, 11.0, 11.0, 12.0, 0.0, 19.0, 21.0, 4.0, 2.0, 2.0, 3.0, 2.0, 0.0, 4.0, 7.0, 4.0, 9.0, 8.0, 8.0, 8.0, 8.0, 9.0, 9.0, 10.0, 10.0, 11.0, 11.0, 11.0, 10.0, 10.0, '...']
```


```
alan@nvidia-desktop:~/src/AMR$ ros2 launch amr_bringup robot.launch.py
[INFO] [launch]: All log files can be found below /home/alan/.ros/log/2022-01-10-14-33-16-843794-nvidia-desktop-27471 
[INFO] [launch]: Default logging verbosity is set to INFO 
urdf_file_name : yhs_dgt001m.urdf 
[INFO] [robot_state_publisher-1]: process started with pid [27475] 
[INFO] [ahrs_driver_node-2]: process started with pid [27476] 
[INFO] [rslidar_sdk_node-3]: process started with pid [27477]
[INFO] [ros2_drive_package_can_ctrol-4]: process started with pid [27479]
[INFO] [rada_pub-5]: process started with pid [27492]
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
[robot_state_publisher-1] Parsing robot urdf xml string. 
[robot_state_publisher-1] [INFO] [1641796397.155332478] [robot_state_publisher]: got segment base_link
[rslidar_sdk_node-3] ---here--------------------------------------------------- 
[rslidar_sdk_node-3] Send LaserScan To : ROS 
[rslidar_sdk_node-3] LaserScan Topic: /scan
[rslidar_sdk_node-3] ------------------------------------------------------
[rslidar_sdk_node-3] RoboSense-LiDAR-Driver is running..... 
[ros2_drive_package_can_ctrol-4] [INFO] [1641796397.359523092] [ros2_drive_package_can_ctrol]: Node inited:' 
[ros2_drive_package_can_ctrol-4] [INFO] [1641796397.359955435] [ros2_drive_package_can_ctrol]: >>open can deivce success! 
[ahrs_driver_node-2] [ERROR] [1641796447.195641547] [ahrs_bringup]: Serial Port initialized 
[ahrs_driver_node-2] [INFO] [1641796447.198469377] [ahrs_bringup]: ahrsBringup::processLoop: start 
[ahrs_driver_node-2] [WARN] [1641796447.198618185] [ahrs_bringup]: head_type error: 5F
[ahrs_driver_node-2] [WARN] [1641796447.200358726] [ahrs_bringup]: head_type error: 69
[ahrs_driver_node-2] [WARN] [1641796447.200443626] [ahrs_bringup]: head_type error: 88
[ahrs_driver_node-2] [WARN] [1641796447.200535919] [ahrs_bringup]: head_type error: FC
```


```
alan@nvidia-desktop:~/src/AMR$ ros2 topic echo /rslidar_points 
header: 
  stamp:
    sec: 1641798153
    nanosec: 110670805
  frame_id: laser
height: 16
width: 1800
fields:
- name: x
  offset: 0
  datatype: 7
  count: 1
- name: y
  offset: 4
  datatype: 7
  count: 1
- name: z
  offset: 8
  datatype: 7
  count: 1
- name: intensity
  offset: 16
  datatype: 7
  count: 1
is_bigendian: false
point_step: 32
row_step: 57600
data: [6, 152, 6, 63, 155, 143, 150, 189, 108, 42, 7, 190, 0, 0, 128, 63, 0, 0, 192, 64, 85, 0, 0, 0, 144, 126, 32, 141, 127, 0, 0, 0, 71, 144, 17, 63, 14, 10, 163, 
189, 145, 98, 253, 189, 0, 0, 128, 63, 0, 0, 224, 64, 85, 0, 0, 0, 144, 126, 32, 141, 127, 0, 0, 0, 221, 83, 17, 63, 90, 251, 162, 189, 57, 249, 212, 189, 0, 0, 128, 63, 0, 0, 128, 64, 85, 0, 0, 0, 144, 126, 32, 141, 127, 0, 0, 0, 249, 250, 61, 63, 90, 84, 213, 189, 20, 172, 230, 189, 0, 0, 128, 63, 0, 0, 48, 65, 85, 0, 0, 0, 144, 126, 32, 141, 127, 0, 0, 0, '...']
is_dense: false
---
header: 
  stamp:
    sec: 1641798153
    nanosec: 810629845
  frame_id: laser
height: 16
width: 1800
fields:
- name: x
  offset: 0
  datatype: 7
  count: 1
- name: y
  offset: 4
  datatype: 7
  count: 1
- name: z
  offset: 8
  datatype: 7
  count: 1
- name: intensity
  offset: 16
  datatype: 7
  count: 1
is_bigendian: false
point_step: 32
row_step: 57600
data: [107, 182, 6, 63, 194, 154, 143, 189, 108, 42, 7, 190, 0, 0, 128, 63, 0, 0, 192, 64, 85, 0, 0, 0, 144, 126, 32, 141, 127, 0, 0, 0, 229, 144, 6, 63, 182, 163, 143, 189, 77, 167, 232, 189, 0, 0, 128, 63, 0, 0, 128, 64, 85, 0, 0, 0, 144, 126, 32, 141, 127, 0, 0, 0, 230, 174, 23, 63, 95, 32, 162, 189, 50, 190, 222, 189, 0, 0, 
128, 63, 0, 0, 128, 64, 85, 0, 0, 0, 144, 126, 32, 141, 127, 0, 0, 0, 65, 229, 60, 63, 84, 43, 202, 189, 255, 17, 229, 189, 0, 0, 128, 63, 0, 0, 48, 65, 85, 0, 0, 0, 144, 126, 32, 141, 127, 0, 0, 0, '...']
is_dense: false
---
header: 
  stamp:
    sec: 1641798154
    nanosec: 210589170
  frame_id: laser
height: 16
width: 1800
fields:
- name: x
  offset: 0
  datatype: 7
  count: 1
- name: y
  offset: 4
  datatype: 7
  count: 1
- name: z
  offset: 8
  datatype: 7
  count: 1
- name: intensity
  offset: 16
  datatype: 7
  count: 1
is_bigendian: false
point_step: 32
row_step: 57600
data: [194, 107, 5, 63, 14, 54, 146, 189, 47, 215, 5, 190, 0, 0, 128, 63, 0, 0, 160, 64, 85, 0, 0, 0, 144, 126, 32, 141, 127, 0, 0, 0, 203, 43, 254, 62, 255, 114, 139, 189, 32, 213, 218, 189, 0, 0, 128, 63, 0, 0, 128, 64, 85, 0, 0, 0, 144, 126, 32, 141, 127, 0, 0, 0, 160, 155, 23, 63, 171, 146, 166, 189, 50, 190, 222, 189, 0, 0, 128, 63, 0, 0, 128, 64, 85, 0, 0, 0, 144, 126, 32, 141, 127, 0, 0, 0, 121, 78, 63, 63, 90, 118, 210, 189, 42, 70, 232, 189, 0, 0, 128, 63, 0, 0, 64, 65, 85, 0, 0, 0, 144, 126, 32, 141, 127, 0, 0, 0, '...']
is_dense: false
---
```

```
alan@nvidia-desktop:~/src/AMR$ ros2 topic echo /scan 
header: 
  stamp:
    sec: 1641798229
    nanosec: 613085985
  frame_id: laser
angle_min: -3.1415927410125732
angle_max: 3.1415927410125732
angle_increment: 0.003490658476948738
time_increment: 0.0
scan_time: 0.0
range_min: 0.0
range_max: 150.0
ranges: [.nan, 1.6410797834396362, 1.6460729837417603, 1.6460728645324707, 1.6410797834396362, 1.6360862255096436, 1.6260998249053955, 1.621106743812561, 1.6211066246032715, 1.6211066246032715, 1.6260998249053955, 1.6260998249053955, 1.6410796642303467, 1.6560593843460083, 1.6710389852523804, 1.6810253858566284, 1.7109850645065308, 1.6910121440887451, 1.7009984254837036, .inf, .inf, 2.789524555206299, 2.7895243167877197, 2.794517755508423, 2.7745444774627686, .inf, 2.3900654315948486, .inf, 2.3850719928741455, 2.3900654315948486, 2.3900654315948486, 2.3900654315948486, 2.3850719928741455, 2.3950586318969727, 2.410038471221924, 2.3950586318969727, 2.449984312057495, 2.325153350830078, 2.2103090286254883, 2.18534255027771, 2.1653695106506348, 2.175355911254883, 2.180349349975586, 2.180349349975586, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.180349349975586, 2.180349349975586, 2.180349349975586, 2.180349349975586, 2.180349349975586, 2.175355911254883, 2.175355911254883, 2.180349349975586, 2.180349349975586, 2.180349349975586, 2.180349349975586, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.190335750579834, 2.190335750579834, 2.195328950881958, 2.195328950881958, 2.200322389602661, 2.195328950881958, 2.195328950881958, 2.195328712463379, 2.200322389602661, 2.2003226280212402, 2.205315351486206, 2.205315351486206, 2.210308790206909, 2.210308790206909, 2.2103090286254883, 2.2202951908111572, 2.2202954292297363, 2.210308790206909, 2.210308790206909, 2.18534255027771, 2.200322389602661, 2.210308790206909, 2.210308790206909, 2.2252888679504395, 2.2502546310424805, 2.330146312713623, 2.420024871826172, 2.430011034011841, 2.410038471221924, 2.4050450325012207, 2.400052070617676, 2.3950588703155518, 2.4000518321990967, 2.3950586318969727, 2.43001127243042, 2.3900654315948486, 2.3850719928741455, 2.3700923919677734, 2.3650991916656494, 2.3650991916656494, 2.3601059913635254, 2.325153350830078, 2.3001868724823, 2.2552480697631836, 2.2202951908111572, 2.18534255027771, 2.1553831100463867, 2.1254236698150635, 2.1004576683044434, 2.060511589050293, 2.0205657482147217, 1.9756267070770264, 1.930687427520752, 1.9007279872894287, 1.8907414674758911, 1.8757617473602295, 1.8507956266403198, 1.8258295059204102, 1.7609171867370605, 1.6910120248794556, 1.681025505065918, 1.6710389852523804, 1.6710389852523804, 1.6710389852523804, 1.67103910446167, 1.6660457849502563, '...']
intensities: [0.0, 16.0, 14.0, 17.0, 14.0, 13.0, 12.0, 12.0, 12.0, 12.0, 12.0, 12.0, 12.0, 11.0, 11.0, 11.0, 14.0, 4.0, 3.0, 0.0, 0.0, 49.0, 49.0, 50.0, 51.0, 0.0, 15.0, 0.0, 15.0, 15.0, 14.0, 12.0, 16.0, 11.0, 27.0, 32.0, 11.0, 3.0, 3.0, 10.0, 7.0, 8.0, 7.0, 6.0, 6.0, 6.0, 5.0, 5.0, 5.0, 4.0, 4.0, 4.0, 3.0, 3.0, 3.0, 3.0, 3.0, 
3.0, 3.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 4.0, 3.0, 
9.0, 14.0, 15.0, 27.0, 34.0, 35.0, 12.0, 3.0, 3.0, 4.0, 3.0, 3.0, 3.0, 3.0, 2.0, 2.0, 2.0, 2.0, 2.0, 3.0, 3.0, 5.0, 9.0, 5.0, 8.0, 12.0, 13.0, 13.0, 13.0, 13.0, 12.0, 12.0, 12.0, 14.0, 13.0, 15.0, 15.0, 16.0, '...']
---
header: 
  stamp:
    sec: 1641798229
    nanosec: 710525990
  frame_id: laser
angle_min: -3.1415927410125732
angle_max: 3.1415927410125732
angle_increment: 0.003490658476948738
time_increment: 0.0
scan_time: 0.0
range_min: 0.0
range_max: 150.0
ranges: [.nan, 1.6410796642303467, 1.6510661840438843, 1.6360862255096436, 1.626099944114685, 1.616113305091858, 1.6111201047897339, 1.6061270236968994, 1.6111201047897339, 1.616113305091858, 1.6211066246032715, 1.6260998249053955, 1.6360862255096436, 1.6410796642303467, 1.6560593843460083, 1.6610525846481323, 1.686018705368042, .inf, 1.681025505065918, .inf, 2.794517755508423, 2.794517755508423, 2.794517755508423, 2.7895243167877197, 2.7795379161834717, .inf, 2.3850719928741455, 2.3800790309906006, 2.3800790309906006, 2.3900654315948486, 2.3850719928741455, 2.3900654315948486, 2.3900656700134277, 2.3950588703155518, 2.410038471221924, 2.410038471221924, 2.45497727394104, 2.3401334285736084, 2.2252886295318604, 2.195328950881958, 2.180349349975586, 2.18534255027771, 2.180349588394165, 2.180349349975586, 2.180349349975586, 2.180349349975586, 2.180349349975586, 2.180349588394165, 2.180349349975586, 2.175355911254883, 2.175356149673462, 2.180349588394165, 2.180349588394165, 2.18534255027771, 2.18534255027771, 2.190335750579834, 2.190335750579834, 2.190335988998413, 2.190335750579834, 2.190335750579834, 2.190335750579834, 2.190335750579834, 
2.190335750579834, 2.190335750579834, 2.190335750579834, 2.190335750579834, 2.190335750579834, 2.190335750579834, 2.190335750579834, 2.190335750579834, 2.195328712463379, 2.195328950881958, 2.200322389602661, 2.200322389602661, 2.205315351486206, 2.205315351486206, 2.205315351486206, 2.210308790206909, 2.210308790206909, 2.2153022289276123, 2.2202951908111572, 2.2202951908111572, 2.2252886295318604, 2.2302818298339844, 2.2402682304382324, 2.2302818298339844, 2.2252888679504395, 2.2602407932281494, 2.3950586318969727, 2.4000515937805176, 2.444990873336792, 2.4150314331054688, 2.410038471221924, 2.4050450325012207, 2.4000518321990967, 2.3900654315948486, 2.3900654315948486, 2.3850722312927246, 2.3750855922698975, 2.3700923919677734, 2.3650991916656494, 2.3601059913635254, 2.3551127910614014, 2.345126152038574, 2.320159912109375, 2.2702276706695557, 2.2302818298339844, 2.190335750579834, 2.1553831100463867, 2.1254236698150635, 2.0954642295837402, 2.060511589050293, 2.0105793476104736, 1.9506603479385376, 1.9157077074050903, 1.8907414674758911, 1.8757617473602295, 1.8557888269424438, 1.8308225870132446, 1.7659106254577637, 1.6910120248794556, 1.681025505065918, 1.681025505065918, 1.67103910446167, 1.6660457849502563, 1.666045904159546, 1.6610527038574219, 1.6610527038574219, '...']
intensities: [0.0, 16.0, 14.0, 11.0, 9.0, 9.0, 9.0, 9.0, 9.0, 9.0, 9.0, 9.0, 9.0, 8.0, 8.0, 8.0, 8.0, 0.0, 3.0, 0.0, 36.0, 49.0, 50.0, 45.0, 53.0, 0.0, 11.0, 12.0, 12.0, 17.0, 16.0, 14.0, 13.0, 9.0, 16.0, 29.0, 16.0, 3.0, 3.0, 9.0, 7.0, 8.0, 7.0, 7.0, 6.0, 6.0, 5.0, 5.0, 5.0, 4.0, 4.0, 4.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 3.0, 4.0, 6.0, 12.0, 15.0, 16.0, 29.0, 33.0, 24.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 2.0, 2.0, 2.0, 2.0, 2.0, 3.0, 3.0, 5.0, 8.0, 5.0, 9.0, 12.0, 12.0, 12.0, 13.0, 12.0, 11.0, 11.0, 13.0, 12.0, 14.0, 14.0, 15.0, 14.0, '...']
---
header: 
  stamp:
    sec: 1641798229
    nanosec: 810527325
  frame_id: laser
angle_min: -3.1415927410125732
angle_max: 3.1415927410125732
angle_increment: 0.003490658476948738
time_increment: 0.0
scan_time: 0.0
range_min: 0.0
range_max: 150.0
ranges: [.nan, 1.6360862255096436, 1.6410796642303467, 1.6410796642303467, 1.636086344718933, 1.631093144416809, 1.621106505393982, 1.616113305091858, 1.6111201047897339, 1.616113305091858, 1.6211066246032715, 1.6260998249053955, 1.6310930252075195, 1.6410796642303467, 1.6560593843460083, 1.6710389852523804, 1.6910120248794556, 
1.7009984254837036, 1.7109849452972412, .inf, 2.80450439453125, 2.799510955810547, 2.794517755508423, 2.7895243167877197, 2.7695515155792236, .inf, 2.3850719928741455, .inf, 2.3900654315948486, 2.3850719928741455, 2.3850722312927246, 2.3850722312927246, 2.3850719928741455, 2.3900654315948486, 2.4050450325012207, 2.3950586318969727, 2.444990873336792, 2.315166711807251, 2.205315351486206, 2.175356149673462, 2.175355911254883, 2.190335750579834, 2.180349349975586, 2.180349349975586, 2.180349349975586, 2.175355911254883, 2.175355911254883, 2.175355911254883, 2.175355911254883, 2.175356149673462, 2.175355911254883, 2.180349349975586, 2.180349349975586, 2.180349349975586, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.190335750579834, 2.190335988998413, 2.190335750579834, 2.18534255027771, 2.18534255027771, 2.18534255027771, 2.190335988998413, 2.195328950881958, 2.200322389602661, 2.200322389602661, 2.200322389602661, 2.200322389602661, 2.205315351486206, 2.205315589904785, 2.205315351486206, 2.2103090286254883, 2.210308790206909, 2.210308790206909, 2.2103090286254883, 2.2153024673461914, 2.2153022289276123, 2.2202954292297363, 2.2252886295318604, 2.2252886295318604, 2.2302818298339844, 2.2352750301361084, 2.2352750301361084, 2.2452614307403564, 2.2552480697631836, 2.2652344703674316, 2.4150314331054688, 2.459970712661743, 2.45497727394104, 2.4150314331054688, 2.4150314331054688, 2.400052070617676, 2.400052070617676, 2.3950586318969727, 2.3950586318969727, 2.3900654315948486, 2.3850719928741455, 2.3800790309906006, 2.3750855922698975, 2.3750858306884766, 2.3601059913635254, 2.3401331901550293, 2.305180549621582, 2.2552480697631836, 2.205315351486206, 2.155383348464966, 2.1503899097442627, 2.1354100704193115, 2.0954642295837402, 2.065505027770996, 1.9606468677520752, 1.925694227218628, 1.8957347869873047, 1.8757617473602295, 1.8607820272445679, 1.8208361864089966, 1.7659107446670532, 1.6960052251815796, 1.676032304763794, 1.676032304763794, 1.6660457849502563, 1.6660457849502563, 1.6610525846481323, 1.6610525846481323, 1.6560595035552979, 1.6560593843460083, '...']
intensities: [0.0, 16.0, 14.0, 16.0, 13.0, 11.0, 11.0, 11.0, 11.0, 11.0, 12.0, 12.0, 11.0, 11.0, 11.0, 11.0, 14.0, 13.0, 4.0, 0.0, 39.0, 52.0, 47.0, 49.0, 46.0, 0.0, 15.0, 0.0, 15.0, 15.0, 14.0, 12.0, 16.0, 11.0, 27.0, 31.0, 11.0, 3.0, 3.0, 10.0, 7.0, 8.0, 7.0, 6.0, 6.0, 6.0, 5.0, 5.0, 5.0, 4.0, 4.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 3.0, 4.0, 6.0, 13.0, 16.0, 16.0, 30.0, 32.0, 20.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 2.0, 2.0, 2.0, 2.0, 3.0, 4.0, 7.0, 4.0, 6.0, 10.0, 11.0, 11.0, 12.0, 12.0, 11.0, 11.0, 11.0, 11.0, 13.0, 13.0, 14.0, 13.0, 13.0, '...']
--- 
```

```
nvidia@nvidia-desktop:~/workspace/alan/AMR$ ros2 launch amr_bringup robot.launch.py  
[INFO] [launch]: All log files can be found below /home/nvidia/.ros/log/2022-01-11-09-18-08-711841-nvidia-desktop-9960 
[INFO] [launch]: Default logging verbosity is set to INFO 
urdf_file_name : yhs_dgt001m.urdf 
[INFO] [robot_state_publisher-1]: process started with pid [9965] 
[INFO] [ahrs_driver_node-2]: process started with pid [9966] 
[INFO] [rslidar_sdk_node-3]: process started with pid [9967]
[INFO] [ros2_drive_package_can_ctrol-4]: process started with pid [9968]
[INFO] [rada_pub-5]: process started with pid [9969]
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
[robot_state_publisher-1] Parsing robot urdf xml string.
[robot_state_publisher-1] Link base_link had 2 children
[robot_state_publisher-1] Link imu_link had 0 children
[robot_state_publisher-1] Link base_scan had 0 children
[robot_state_publisher-1] [INFO] [1641863889.025535333] [robot_state_publisher]: got segment base_footprint
[robot_state_publisher-1] [INFO] [1641863889.025834228] [robot_state_publisher]: got segment base_link
[robot_state_publisher-1] [INFO] [1641863889.025885527] [robot_state_publisher]: got segment base_scan
[robot_state_publisher-1] [INFO] [1641863889.025947674] [robot_state_publisher]: got segment imu_link
[ros2_drive_package_can_ctrol-4] [INFO] [1641863889.045216416] [ros2_drive_package_can_ctrol]: Node inited:' 
[ros2_drive_package_can_ctrol-4] [INFO] [1641863889.045661047] [ros2_drive_package_can_ctrol]: >>open can deivce success!
[rslidar_sdk_node-3] ---here---------------------------------------------------
[rslidar_sdk_node-3] Send LaserScan To : ROS
[rslidar_sdk_node-3] LaserScan Topic: /scan
[rslidar_sdk_node-3] ------------------------------------------------------
[rslidar_sdk_node-3] RoboSense-LiDAR-Driver is running..... 
[ahrs_driver_node-2] [ERROR] [1641863938.998501038] [ahrs_bringup]: Serial Port initialized 
[ahrs_driver_node-2] [INFO] [1641863938.998840448] [ahrs_bringup]: ahrsBringup::processLoop: start
```


```
nvidia@nvidia-desktop:~/workspace/alan/AMR$ ros2 launch amr_navigation2 navigation2.launch.py map:=map.yaml 
[INFO] [launch]: All log files can be found below /home/nvidia/.ros/log/2022-01-11-09-23-39-498280-nvidia-desktop-11167 
[INFO] [launch]: Default logging verbosity is set to INFO 
[INFO] [map_server-1]: process started with pid [11173] 
[INFO] [amcl-2]: process started with pid [11174] 
[INFO] [lifecycle_manager-3]: process started with pid [11175]
[INFO] [controller_server-4]: process started with pid [11176]
[INFO] [planner_server-5]: process started with pid [11177]
[INFO] [recoveries_server-6]: process started with pid [11178]
[INFO] [bt_navigator-7]: process started with pid [11179]
[INFO] [waypoint_follower-8]: process started with pid [11180]
[INFO] [lifecycle_manager-9]: process started with pid [11181]
[INFO] [rviz2-10]: process started with pid [11182]
[lifecycle_manager-3] [INFO] [1641864220.765169668] [lifecycle_manager_localization]: Creating 
[amcl-2] [INFO] [1641864220.821529247] [amcl]:  
[amcl-2]        amcl lifecycle node launched.
[amcl-2]        Waiting on external lifecycle transitions to activate
[amcl-2]        See https://design.ros2.org/articles/node_lifecycle.html for more information.
[amcl-2] [INFO] [1641864220.822303399] [amcl]: Creating
[lifecycle_manager-3] [INFO] [1641864220.863528470] [lifecycle_manager_localization]: Creating and initializing lifecycle service clients 
[lifecycle_manager-3] [INFO] [1641864220.890406849] [lifecycle_manager_localization]: Starting managed nodes bringup... 
[lifecycle_manager-3] [INFO] [1641864220.890604363] [lifecycle_manager_localization]: Configuring map_server
[map_server-1] [INFO] [1641864220.988650221] [map_server]:  
[map_server-1]  map_server lifecycle node launched.
[map_server-1]  Waiting on external lifecycle transitions to activate
[map_server-1]  See https://design.ros2.org/articles/node_lifecycle.html for more information.
[map_server-1] [INFO] [1641864220.994440471] [map_server]: Creating 
[planner_server-5] [INFO] [1641864221.058964760] [planner_server]:  
[waypoint_follower-8] [INFO] [1641864221.060907676] [waypoint_follower]:
[waypoint_follower-8]   waypoint_follower lifecycle node launched.
[waypoint_follower-8]   Waiting on external lifecycle transitions to activate
[waypoint_follower-8]   See https://design.ros2.org/articles/node_lifecycle.html for more information.
[waypoint_follower-8] [INFO] [1641864221.061288368] [waypoint_follower]: Creating
[planner_server-5]      planner_server lifecycle node launched.  
[planner_server-5]      Waiting on external lifecycle transitions to activate
[planner_server-5]      See https://design.ros2.org/articles/node_lifecycle.html for more information. 
[bt_navigator-7] [INFO] [1641864221.097849838] [bt_navigator]:  
[bt_navigator-7]        bt_navigator lifecycle node launched.
[bt_navigator-7]        Waiting on external lifecycle transitions to activate
[bt_navigator-7]        See https://design.ros2.org/articles/node_lifecycle.html for more information.
[bt_navigator-7] [INFO] [1641864221.098311686] [bt_navigator]: Creating
[map_server-1] [INFO] [1641864221.101277151] [map_server]: Configuring
[map_server-1] [ERROR] [map_io]: Failed processing YAML file map.yaml at position (-1:-1) for reason: bad file
[map_server-1] [ERROR] [1641864221.101966178] []: Caught exception in callback for transition 10
[map_server-1] [ERROR] [1641864221.102012452] []: Original error: Failed to load map yaml file: map.yaml
[map_server-1] [WARN] [1641864221.102074888] []: Error occurred while doing error handling.
[map_server-1] [FATAL] [1641864221.102224527] [map_server]: Lifecycle node map_server does not have error state implemented
[map_server-1] [INFO] [map_io]: Loading yaml file: map.yaml
[lifecycle_manager-3] [ERROR] [1641864221.108313001] [lifecycle_manager_localization]: Failed to change state for node: map_server
[lifecycle_manager-3] [ERROR] [1641864221.108447344] [lifecycle_manager_localization]: Failed to bring up all requested nodes. Aborting bringup.
[lifecycle_manager-9] [INFO] [1641864221.114667761] [lifecycle_manager_navigation]: Creating
[controller_server-4] [INFO] [1641864221.122436738] [controller_server]:  
[controller_server-4]   controller_server lifecycle node launched.
[controller_server-4]   Waiting on external lifecycle transitions to activate
[controller_server-4]   See https://design.ros2.org/articles/node_lifecycle.html for more information.
[planner_server-5] [INFO] [1641864221.144816165] [planner_server]: Creating 
[recoveries_server-6] [INFO] [1641864221.167729507] [recoveries_server]:  
[recoveries_server-6]   recoveries_server lifecycle node launched.  
[recoveries_server-6]   Waiting on external lifecycle transitions to activate
[recoveries_server-6]   See https://design.ros2.org/articles/node_lifecycle.html for more information.
[controller_server-4] [INFO] [1641864221.224730559] [controller_server]: Creating controller server 
[lifecycle_manager-9] [INFO] [1641864221.244072517] [lifecycle_manager_navigation]: Creating and initializing lifecycle service clients 
[lifecycle_manager-9] [INFO] [1641864221.344210258] [lifecycle_manager_navigation]: Starting managed nodes bringup... 
[lifecycle_manager-9] [INFO] [1641864221.344337433] [lifecycle_manager_navigation]: Configuring controller_server 
[planner_server-5] [INFO] [1641864221.397997257] [global_costmap.global_costmap]:  
[planner_server-5]      global_costmap lifecycle node launched.  
[planner_server-5]      Waiting on external lifecycle transitions to activate
[planner_server-5]      See https://design.ros2.org/articles/node_lifecycle.html for more information.
[planner_server-5] [INFO] [1641864221.403179988] [global_costmap.global_costmap]: Creating Costmap
[controller_server-4] [INFO] [1641864221.406716395] [local_costmap.local_costmap]:  
[controller_server-4]   local_costmap lifecycle node launched.
[controller_server-4]   Waiting on external lifecycle transitions to activate
[controller_server-4]   See https://design.ros2.org/articles/node_lifecycle.html for more information.
[controller_server-4] [INFO] [1641864221.411109037] [local_costmap.local_costmap]: Creating Costmap
[controller_server-4] [INFO] [1641864221.479906794] [controller_server]: Configuring controller interface 
[controller_server-4] [INFO] [1641864221.481894897] [controller_server]: Controller frequency set to 10.0000Hz 
[controller_server-4] [INFO] [1641864221.482022072] [local_costmap.local_costmap]: Configuring
[rviz2-10] XmbTextListToTextProperty result code -2 
[rviz2-10] XmbTextListToTextProperty result code -2 
[controller_server-4] [INFO] [1641864221.516201051] [local_costmap.local_costmap]: Using plugin "static_layer" 
[controller_server-4] [INFO] [1641864221.529134038] [local_costmap.local_costmap]: Subscribing to the map topic (/map) with transient local durability 
[controller_server-4] [INFO] [1641864221.534941633] [local_costmap.local_costmap]: Initialized plugin "static_layer" 
[controller_server-4] [INFO] [1641864221.535061544] [local_costmap.local_costmap]: Using plugin "obstacle_layer"
[controller_server-4] [INFO] [1641864221.539933443] [local_costmap.local_costmap]: Subscribed to Topics: scan 
[controller_server-4] [INFO] [1641864221.559967180] [local_costmap.local_costmap]: Initialized plugin "obstacle_layer" 
[controller_server-4] [INFO] [1641864221.560202041] [local_costmap.local_costmap]: Using plugin "inflation_layer" 
[controller_server-4] [INFO] [1641864221.564712705] [local_costmap.local_costmap]: Initialized plugin "inflation_layer"
[controller_server-4] [INFO] [1641864221.597494236] [controller_server]: Created progress_checker : progress_checker of type nav2_controller::SimpleProgressChecker 
[controller_server-4] [INFO] [1641864221.602659911] [controller_server]: Created goal_checker : goal_checker of type nav2_controller::SimpleGoalChecker 
[controller_server-4] [INFO] [1641864221.620548386] [controller_server]: Created controller : FollowPath of type dwb_core::DWBLocalPlanner 
[controller_server-4] [INFO] [1641864221.626159523] [controller_server]: Setting transform_tolerance to 0.200000 
[controller_server-4] [INFO] [1641864221.681370595] [controller_server]: Using critic "RotateToGoal" (dwb_critics::RotateToGoalCritic) 
[controller_server-4] [INFO] [1641864221.686087030] [controller_server]: Critic plugin initialized 
[controller_server-4] [INFO] [1641864221.688046300] [controller_server]: Using critic "Oscillation" (dwb_critics::OscillationCritic) 
[controller_server-4] [INFO] [1641864221.689779957] [controller_server]: Critic plugin initialized 
[controller_server-4] [INFO] [1641864221.690789385] [controller_server]: Using critic "BaseObstacle" (dwb_critics::BaseObstacleCritic) 
[controller_server-4] [INFO] [1641864221.693283914] [controller_server]: Critic plugin initialized
[controller_server-4] [INFO] [1641864221.694313215] [controller_server]: Using critic "GoalAlign" (dwb_critics::GoalAlignCritic)
[controller_server-4] [INFO] [1641864221.696574291] [controller_server]: Critic plugin initialized
[controller_server-4] [INFO] [1641864221.697584904] [controller_server]: Using critic "PathAlign" (dwb_critics::PathAlignCritic)
[controller_server-4] [INFO] [1641864221.699705685] [controller_server]: Critic plugin initialized
[controller_server-4] [INFO] [1641864221.700700744] [controller_server]: Using critic "PathDist" (dwb_critics::PathDistCritic)
[controller_server-4] [INFO] [1641864221.702179445] [controller_server]: Critic plugin initialized
[controller_server-4] [INFO] [1641864221.703245004] [controller_server]: Using critic "GoalDist" (dwb_critics::GoalDistCritic)
[controller_server-4] [INFO] [1641864221.704710391] [controller_server]: Critic plugin initialized
[controller_server-4] [INFO] [1641864221.704824797] [controller_server]: Controller Server has FollowPath  controllers available.
[lifecycle_manager-9] [INFO] [1641864221.726173898] [lifecycle_manager_navigation]: Configuring planner_server
[planner_server-5] [INFO] [1641864221.727852545] [planner_server]: Configuring
[planner_server-5] [INFO] [1641864221.727964743] [global_costmap.global_costmap]: Configuring
[planner_server-5] [INFO] [1641864221.751876664] [global_costmap.global_costmap]: Using plugin "static_layer" 
[planner_server-5] [INFO] [1641864221.767753323] [global_costmap.global_costmap]: Subscribing to the map topic (/map) with transient local durability 
[planner_server-5] [INFO] [1641864221.771721464] [global_costmap.global_costmap]: Initialized plugin "static_layer" 
[planner_server-5] [INFO] [1641864221.771835486] [global_costmap.global_costmap]: Using plugin "obstacle_layer"
[planner_server-5] [INFO] [1641864221.776452300] [global_costmap.global_costmap]: Subscribed to Topics: scan
[planner_server-5] [INFO] [1641864221.790139118] [global_costmap.global_costmap]: Initialized plugin "obstacle_layer" 
[planner_server-5] [INFO] [1641864221.790260948] [global_costmap.global_costmap]: Using plugin "voxel_layer" 
[planner_server-5] [INFO] [1641864221.800080751] [global_costmap.global_costmap]: Subscribed to Topics: pointcloud
[planner_server-5] [INFO] [1641864221.835943849] [global_costmap.global_costmap]: Initialized plugin "voxel_layer" 
[planner_server-5] [INFO] [1641864221.836081264] [global_costmap.global_costmap]: Using plugin "inflation_layer" 
[planner_server-5] [INFO] [1641864221.840223590] [global_costmap.global_costmap]: Initialized plugin "inflation_layer"
[planner_server-5] [INFO] [1641864221.868667745] [planner_server]: Created global planner plugin GridBased of type nav2_navfn_planner/NavfnPlanner 
[planner_server-5] [INFO] [1641864221.868841834] [planner_server]: Configuring plugin GridBased of type NavfnPlanner
[planner_server-5] [INFO] [1641864221.892323973] [planner_server]: Planner Server has GridBased  planners available. 
[lifecycle_manager-9] [INFO] [1641864221.916241943] [lifecycle_manager_navigation]: Configuring recoveries_server 
[recoveries_server-6] [INFO] [1641864221.917957488] [recoveries_server]: Configuring 
[recoveries_server-6] [INFO] [1641864221.945947732] [recoveries_server]: Creating recovery plugin spin of type nav2_recoveries/Spin 
[recoveries_server-6] [INFO] [1641864221.951109790] [recoveries_server]: Configuring spin 
[recoveries_server-6] [INFO] [1641864221.982418349] [recoveries_server]: Creating recovery plugin backup of type nav2_recoveries/BackUp 
[recoveries_server-6] [INFO] [1641864221.987598328] [recoveries_server]: Configuring backup 
[recoveries_server-6] [INFO] [1641864222.013544275] [recoveries_server]: Creating recovery plugin wait of type nav2_recoveries/Wait 
[recoveries_server-6] [INFO] [1641864222.018497490] [recoveries_server]: Configuring wait 
[lifecycle_manager-9] [INFO] [1641864222.037960158] [lifecycle_manager_navigation]: Configuring bt_navigator 
[bt_navigator-7] [INFO] [1641864222.040411613] [bt_navigator]: Configuring 
[rviz2-10] [INFO] [1641864222.088248128] [rviz2]: Stereo is NOT SUPPORTED 
[rviz2-10] [INFO] [1641864222.088830526] [rviz2]: OpenGl version: 4.6 (GLSL 4.6) 
[rviz2-10] XmbTextListToTextProperty result code -2 
[rviz2-10] XmbTextListToTextProperty result code -2 
[rviz2-10] [INFO] [1641864222.159384054] [rviz2]: Stereo is NOT SUPPORTED 
[bt_navigator-7] [INFO] [1641864222.181548813] [bt_navigator_rclcpp_node]: Waiting for "compute_path_to_pose" action server 
[bt_navigator-7] [INFO] [1641864222.182360887] [bt_navigator_rclcpp_node]: "ComputePathToPose" BtActionNode initialized 
[bt_navigator-7] [INFO] [1641864222.186002515] [bt_navigator_rclcpp_node]: Waiting for "global_costmap/clear_entirely_global_costmap" service
[bt_navigator-7] [INFO] [1641864222.186411272] [bt_navigator_rclcpp_node]: "ClearGlobalCostmap-Context" BtServiceNode initialized
[bt_navigator-7] [INFO] [1641864222.197044525] [bt_navigator_rclcpp_node]: Waiting for "follow_path" action server 
[bt_navigator-7] [INFO] [1641864222.197683053] [bt_navigator_rclcpp_node]: "FollowPath" BtActionNode initialized
[bt_navigator-7] [INFO] [1641864222.201088797] [bt_navigator_rclcpp_node]: Waiting for "local_costmap/clear_entirely_local_costmap" service 
[bt_navigator-7] [INFO] [1641864222.201625241] [bt_navigator_rclcpp_node]: "ClearLocalCostmap-Context" BtServiceNode initialized
[bt_navigator-7] [INFO] [1641864222.204078231] [bt_navigator_rclcpp_node]: Waiting for "local_costmap/clear_entirely_local_costmap" service
[bt_navigator-7] [INFO] [1641864222.204527087] [bt_navigator_rclcpp_node]: "ClearLocalCostmap-Subtree" BtServiceNode initialized
[bt_navigator-7] [INFO] [1641864222.207059761] [bt_navigator_rclcpp_node]: Waiting for "global_costmap/clear_entirely_global_costmap" service 
[bt_navigator-7] [INFO] [1641864222.207451973] [bt_navigator_rclcpp_node]: "ClearGlobalCostmap-Subtree" BtServiceNode initialized
[bt_navigator-7] [INFO] [1641864222.218262003] [bt_navigator_rclcpp_node]: Waiting for "spin" action server 
[bt_navigator-7] [INFO] [1641864222.218972472] [bt_navigator_rclcpp_node]: "Spin" BtActionNode initialized 
[bt_navigator-7] [INFO] [1641864222.229442132] [bt_navigator_rclcpp_node]: Waiting for "wait" action server
[bt_navigator-7] [INFO] [1641864222.230147960] [bt_navigator_rclcpp_node]: "Wait" BtActionNode initialized
[lifecycle_manager-9] [INFO] [1641864222.241793777] [lifecycle_manager_navigation]: Configuring waypoint_follower 
[waypoint_follower-8] [INFO] [1641864222.243645712] [waypoint_follower]: Configuring 
[lifecycle_manager-9] [INFO] [1641864222.339435422] [lifecycle_manager_navigation]: Activating controller_server 
[controller_server-4] [INFO] [1641864222.340726912] [controller_server]: Activating
[controller_server-4] [INFO] [1641864222.340845767] [local_costmap.local_costmap]: Activating
[controller_server-4] [INFO] [1641864222.340891721] [local_costmap.local_costmap]: Checking transform
[controller_server-4] [INFO] [1641864222.341057137] [local_costmap.local_costmap]: Timed out waiting for transform from base_link to odom to become available, tf error: Invalid frame ID "odom" passed to canTransform argument target_frame - frame does not exist
[rviz2-10] [WARN] [1641864222.833036180] [rcl.logging_rosout]: Publisher already registered for provided node name. If this is due to multiple nodes with the same name then all logs for that logger name will go out over the existing publisher. As soon as any node with that name is destructed it will unregister the publisher, preventing any further logs for that name from being published on the rosout topic.
[controller_server-4] [INFO] [1641864222.841155031] [local_costmap.local_costmap]: Timed out waiting for transform from base_link to odom to become available, tf error: Invalid frame ID "odom" passed to canTransform argument target_frame - frame does not exist
[rviz2-10] [WARN] [1641864222.859530731] [rcl.logging_rosout]: Publisher already registered for provided node name. If this is due to multiple nodes with the same name then all logs for that logger name will go out over the existing publisher. As soon as any node with that name is destructed it will unregister the publisher, preventing any further logs for that name from being published on the rosout topic.
[rviz2-10] [WARN] [1641864222.888730637] [rcl.logging_rosout]: Publisher already registered for provided node name. If this is due to multiple nodes with the same name then all logs for that logger name will go out over the existing publisher. As soon as any node with that name is destructed it will unregister the publisher, preventing any further logs for that name from being published on the rosout topic.
[rviz2-10] [INFO] [1641864222.965428418] [rviz2]: Waiting for the lifecycle_manager_navigation/is_active service... 
[rviz2-10] [INFO] [1641864222.966096292] [rviz2]: Sending lifecycle_manager_navigation/is_active request 
[rviz2-10] XmbTextListToTextProperty result code -2 
[rviz2-10] XmbTextListToTextProperty result code -2 
[rviz2-10] XmbTextListToTextProperty result code -2
[controller_server-4] [INFO] [1641864223.341199706] [local_costmap.local_costmap]: Timed out waiting for transform from base_link to odom to become available, tf error: Invalid frame ID "odom" passed to canTransform argument target_frame - frame does not exist
[rviz2-10] [INFO] [1641864223.792320801] [rviz2]: Message Filter dropping message: frame 'base_scan' at time 1641864222.771 for reason 'Unknown' 
[controller_server-4] [INFO] [1641864223.841195866] [local_costmap.local_costmap]: Timed out waiting for transform from base_link to odom to become available, tf error: Invalid frame ID "odom" passed to canTransform argument target_frame - frame does not exist
[rviz2-10] [INFO] [1641864223.887448716] [rviz2]: Message Filter dropping message: frame 'base_scan' at time 1641864222.871 for reason 'Unknown' 
[rviz2-10] [INFO] [1641864223.966939985] [rviz2]: Waiting for the lifecycle_manager_navigation/is_active service... 
[rviz2-10] [INFO] [1641864223.967442603] [rviz2]: Sending lifecycle_manager_navigation/is_active request 
[rviz2-10] [INFO] [1641864223.983561770] [rviz2]: Message Filter dropping message: frame 'base_scan' at time 1641864222.971 for reason 'Unknown' 
[rviz2-10] [INFO] [1641864224.079361272] [rviz2]: Message Filter dropping message: frame 'base_scan' at time 1641864223.071 for reason 'Unknown' 
[rviz2-10] [INFO] [1641864224.176473290] [rviz2]: Message Filter dropping message: frame 'base_scan' at time 1641864223.171 for reason 'Unknown' 
[rviz2-10] [INFO] [1641864224.303303000] [rviz2]: Message Filter dropping message: frame 'base_scan' at time 1641864223.271 for reason 'Unknown' 
[controller_server-4] [INFO] [1641864224.341183994] [local_costmap.local_costmap]: Timed out waiting for transform from base_link to odom to become available, tf error: Invalid frame ID "odom" passed to canTransform argument target_frame - frame does not exist
[rviz2-10] [INFO] [1641864224.400752635] [rviz2]: Message Filter dropping message: frame 'base_scan' at time 1641864223.371 for reason 'Unknown' 
[rviz2-10] [INFO] [1641864224.496294939] [rviz2]: Message Filter dropping message: frame 'base_scan' at time 1641864223.471 for reason 'Unknown' 
[rviz2-10] [INFO] [1641864224.591984324] [rviz2]: Message Filter dropping message: frame 'base_scan' at time 1641864223.571 for reason 'Unknown' 
[rviz2-10] [INFO] [1641864224.687960602] [rviz2]: Message Filter dropping message: frame 'base_scan' at time 1641864223.671 for reason 'Unknown' 
[rviz2-10] [INFO] [1641864224.784538160] [rviz2]: Message Filter dropping message: frame 'base_scan' at time 1641864223.771 for reason 'Unknown' 
[controller_server-4] [INFO] [1641864224.841191067] [local_costmap.local_costmap]: Timed out waiting for transform from base_link to odom to become available, tf error: Invalid frame ID "odom" passed to canTransform argument target_frame - frame does not exist
[rviz2-10] [INFO] [1641864224.879455665] [rviz2]: Message Filter dropping message: frame 'base_scan' at time 1641864223.871 for reason 'Unknown' 
[rviz2-10] [INFO] [1641864224.969228615] [rviz2]: Waiting for the lifecycle_manager_navigation/is_active service... 
[rviz2-10] [INFO] [1641864224.969701536] [rviz2]: Sending lifecycle_manager_navigation/is_active request 
[rviz2-10] [INFO] [1641864224.975514380] [rviz2]: Message Filter dropping message: frame 'base_scan' at time 1641864223.971 for reason 'Unknown' 
[rviz2-10] [INFO] [1641864225.103350926] [rviz2]: Message Filter dropping message: frame 'base_scan' at time 1641864224.071 for reason 'Unknown' 
[rviz2-10] [INFO] [1641864225.199858848] [rviz2]: Message Filter dropping message: frame 'base_scan' at time 1641864224.171 for reason 'Unknown' 
[rviz2-10] [INFO] [1641864225.295619660] [rviz2]: Message Filter dropping message: frame 'base_scan' at time 1641864224.271 for reason 'Unknown' 
[controller_server-4] [INFO] [1641864225.341215708] [local_costmap.local_costmap]: Timed out waiting for transform from base_link to odom to become available, tf error: Invalid frame ID "odom" passed to canTransform argument target_frame - frame does not exist
[rviz2-10] [INFO] [1641864225.392410605] [rviz2]: Message Filter dropping message: frame 'base_scan' at time 1641864224.371 for reason 'Unknown'
```

```
nvidia@nvidia-desktop:~/workspace/alan/AMR$ ros2 topic list 
/amcl/transition_event 
/bms_fb
/bms_flag_fb
/bt_navigator/transition_event
/clicked_point 
/cmd_vel
/controller_server/transition_event
/cost_cloud
/ctrl_cmd
/ctrl_fb
/downsampled_costmap
/downsampled_costmap_updates
/evaluation
/global_costmap/clearing_endpoints
/global_costmap/costmap
/global_costmap/costmap_raw
/global_costmap/costmap_updates
/global_costmap/footprint
/global_costmap/global_costmap/transition_event
/global_costmap/published_footprint
/global_costmap/voxel_grid
/global_costmap/voxel_marked_cloud
/goal_pose
/initialpose
/io_cmd
/io_fb
/joint_states
/l_wheel_fb
/local_costmap/costmap
/local_costmap/costmap_raw
/local_costmap/costmap_updates
/local_costmap/footprint
/local_costmap/local_costmap/transition_event
/local_costmap/published_footprint
/local_costmap/voxel_marked_cloud
/local_plan
/map
/map_server/transition_event
/map_updates
/marker
/mobile_base/sensors/bumper_pointcloud
/odom
/parameter_events
/particlecloud
/plan
/planner_server/transition_event
/r_wheel_fb
/rada1
/rada2
/rear_free_ctrl_cmd
/received_global_plan
/recoveries_server/transition_event
/robot_description
/rosout
/rslidar_points
/scan
/smoother_cmd_vel
/tf
/tf_static
/transformed_global_plan
/waypoint_follower/transition_event 
/waypoints
nvidia@nvidia-desktop:~/workspace/alan/AMR$
```



3261 but the earliest data is at time 1642666608.210613, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.231679235] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.210613, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.236587335] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.210613, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.241880794] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.210613, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.246800030] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.210613, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.251735171] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.210613, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.256670856] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.210613, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] Error:   TF SELF_TRANSFORM: Ignoring transform from authority "Authority undetectable" with frame_id and child_frame_id  "odom" because they are the same
[cartographer_node-1]          at line 259 in /home/nvidia/workspace/ros2/src/ros2/geometry2/tf2/src/buffer_core.cpp
[rviz2-3] Error:   TF SELF_TRANSFORM: Ignoring transform from authority "Authority undetectable" with frame_id and child_frame_id  "odom" because they are the same
[rviz2-3]          at line 259 in /home/nvidia/workspace/ros2/src/ros2/geometry2/tf2/src/buffer_core.cpp
[cartographer_node-1] [WARN] [1642666608.266865503] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation at time 1642666560.833261, but only time 1642666608.260594 is in the buffer, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.271568538] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation at time 1642666560.833261, but only time 1642666608.260594 is in the buffer, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.276641861] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.260594, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.281736976] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.260594, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.286494190] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.260594, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.291524599] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.260594, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.296965744] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.260594, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.301706061] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.260594, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.307502996] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.260594, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] Error:   TF SELF_TRANSFORM: Ignoring transform from authority "Authority undetectable" with frame_id and child_frame_id  "odom" because they are the same
[cartographer_node-1]          at line 259 in /home/nvidia/workspace/ros2/src/ros2/geometry2/tf2/src/buffer_core.cpp 
[rviz2-3] Error:   TF SELF_TRANSFORM: Ignoring transform from authority "Authority undetectable" with frame_id and child_frame_id  "odom" because they are the same
[rviz2-3]          at line 259 in /home/nvidia/workspace/ros2/src/ros2/geometry2/tf2/src/buffer_core.cpp
[cartographer_node-1] [WARN] [1642666608.316552797] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation at time 1642666560.833261, but only time 1642666608.310695 is in the buffer, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.322142461] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.310695, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.326538316] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.310695, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.331743292] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.310695, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.336589085] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.310695, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.341661639] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.310695, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.346815861] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.310695, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.351488656] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.310695, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.356511320] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.310695, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] Error:   TF SELF_TRANSFORM: Ignoring transform from authority "Authority undetectable" with frame_id and child_frame_id  "odom" because they are the same 
[cartographer_node-1]          at line 259 in /home/nvidia/workspace/ros2/src/ros2/geometry2/tf2/src/buffer_core.cpp
[rviz2-3] Error:   TF SELF_TRANSFORM: Ignoring transform from authority "Authority undetectable" with frame_id and child_frame_id  "odom" because they are the same
[rviz2-3]          at line 259 in /home/nvidia/workspace/ros2/src/ros2/geometry2/tf2/src/buffer_core.cpp
[cartographer_node-1] [WARN] [1642666608.366592618] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation at time 1642666560.833261, but only time 1642666608.360567 is in the buffer, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.371641140] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation at time 1642666560.833261, but only time 1642666608.360567 is in the buffer, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.376678333] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.360567, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.381618818] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.360567, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.386499365] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.360567, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.391603440] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.360567, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.396848514] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.360567, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.402098835] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.360567, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.406692010] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.360567, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] Error:   TF SELF_TRANSFORM: Ignoring transform from authority "Authority undetectable" with frame_id and child_frame_id  "odom" because they are the same 
[cartographer_node-1]          at line 259 in /home/nvidia/workspace/ros2/src/ros2/geometry2/tf2/src/buffer_core.cpp
[rviz2-3] Error:   TF SELF_TRANSFORM: Ignoring transform from authority "Authority undetectable" with frame_id and child_frame_id  "odom" because they are the same
[rviz2-3]          at line 259 in /home/nvidia/workspace/ros2/src/ros2/geometry2/tf2/src/buffer_core.cpp
[cartographer_node-1] [WARN] [1642666608.416428687] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation at time 1642666560.833261, but only time 1642666608.410735 is in the buffer, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.422089681] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.410735, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.427189468] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.410735, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.431948762] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.410735, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.436632917] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.410735, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.441546617] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.410735, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.446539745] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.410735, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.451514215] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.410735, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.456475533] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.410735, when looking up transform from frame [odom] to frame [imu_link]
[rviz2-3] Error:   TF SELF_TRANSFORM: Ignoring transform from authority "Authority undetectable" with frame_id and child_frame_id  "odom" because they are the same
[rviz2-3]          at line 259 in /home/nvidia/workspace/ros2/src/ros2/geometry2/tf2/src/buffer_core.cpp
[cartographer_node-1] Error:   TF SELF_TRANSFORM: Ignoring transform from authority "Authority undetectable" with frame_id and child_frame_id  "odom" because they are the same
[cartographer_node-1]          at line 259 in /home/nvidia/workspace/ros2/src/ros2/geometry2/tf2/src/buffer_core.cpp
[cartographer_node-1] [WARN] [1642666608.466512190] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation at time 1642666560.833261, but only time 1642666608.460588 is in the buffer, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.471354815] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation at time 1642666560.833261, but only time 1642666608.460588 is in the buffer, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.476527949] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.460588, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.481558550] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.460588, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.486554621] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.460588, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.491653833] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.460588, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.496621519] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.460588, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.501486001] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.460588, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.506488025] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.460588, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] Error:   TF SELF_TRANSFORM: Ignoring transform from authority "Authority undetectable" with frame_id and child_frame_id  "odom" because they are the same
[cartographer_node-1]          at line 259 in /home/nvidia/workspace/ros2/src/ros2/geometry2/tf2/src/buffer_core.cpp
[rviz2-3] Error:   TF SELF_TRANSFORM: Ignoring transform from authority "Authority undetectable" with frame_id and child_frame_id  "odom" because they are the same
[rviz2-3]          at line 259 in /home/nvidia/workspace/ros2/src/ros2/geometry2/tf2/src/buffer_core.cpp
[cartographer_node-1] [WARN] [1642666608.516528617] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation at time 1642666560.833261, but only time 1642666608.510617 is in the buffer, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.521916320] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.510617, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.527342361] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.510617, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.531655717] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.510617, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.536707823] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.510617, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.541641492] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.510617, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.546667772] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.510617, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.552034610] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.510617, when looking up transform from frame [odom] to frame [imu_link]
[cartographer_node-1] [WARN] [1642666608.556544550] [cartographer_ros]: W0120 16:16:48.000000 22700 tf_bridge.cc:67] Lookup would require extrapolation into the past.  Requested time 1642666560.833261 but the earliest data is at time 1642666608.510617, when looking up transform from frame [odom] to frame [imu_link]
