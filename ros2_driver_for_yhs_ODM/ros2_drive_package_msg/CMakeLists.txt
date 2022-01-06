cmake_minimum_required(VERSION 3.5)
project(ros2_drive_package_msg)

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
#find_package(message_generation REQUIRED)
find_package(move_base_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(pcl_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(tf2 REQUIRED)

find_package(rosidl_default_generators REQUIRED)

set(msg_files
   "msg/BmsFb.msg"
   "msg/BmsFlagFb.msg"
   "msg/CtrlCmd.msg"
   "msg/CtrlFb.msg"
   "msg/FreeCtrlCmd.msg"
   "msg/IoCmd.msg"
   "msg/IoFb.msg"
   "msg/LWheelFb.msg"
   "msg/RWheelFb.msg"
 )

set(srv_files

)

find_package(builtin_interfaces REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
  DEPENDENCIES builtin_interfaces std_msgs
  ${srv_files}
)
#generate_messages(
#   DEPENDENCIES
#   geometry_msgs   sensor_msgs   std_msgs
# )

ament_export_dependencies(rosidl_default_runtime)

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
