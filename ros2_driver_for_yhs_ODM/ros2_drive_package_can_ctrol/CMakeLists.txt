cmake_minimum_required(VERSION 3.5)
project(ros2_drive_package_can_ctrol)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(ros2_drive_package_msg REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(move_base_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(pcl_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)

include_directories(     
 include
# include/ros2_drive_package_msg
# include/ros2_drive_package_can_ctrol
# ${colcon_INCLUDE_DIRS} ros2_drive_package_can_ctrol
)

add_executable(ros2_drive_package_can_ctrol
  src/yhs_can_control.cpp
)

ament_target_dependencies(ros2_drive_package_can_ctrol
	rclcpp
	geometry_msgs
	ros2_drive_package_msg
	rosidl_default_generators
	move_base_msgs	
	nav_msgs
	pcl_msgs
	sensor_msgs
	std_msgs
	tf2
	tf2_ros
)

link_directories(
	/home/xavier/ros2_ws/src/ros2_drive_package_can_ctrol/include/ros2_drive_package_can_ctrol
	/usr/lib
)


target_link_libraries(${PROJECT_NAME}
  	controlcan
)

install(TARGETS ros2_drive_package_can_ctrol
 DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY param
	DESTINATION share/${PROJECT_NAME}
	)

#rosidl_target_interfaces(ros2_drive_package_can_ctrol
#  ${PROJECT_NAME} "rosidl_typesupport_cpp")

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
