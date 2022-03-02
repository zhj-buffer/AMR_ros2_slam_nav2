# Install script for directory: /home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/navigation2/nav2_system_tests/src/updown

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/install/nav2_system_tests")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/nav2_system_tests/test_updown" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/nav2_system_tests/test_updown")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/nav2_system_tests/test_updown"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/nav2_system_tests" TYPE EXECUTABLE FILES "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/nav2_system_tests/src/updown/test_updown")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/nav2_system_tests/test_updown" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/nav2_system_tests/test_updown")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/nav2_system_tests/test_updown"
         OLD_RPATH "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/install/nav2_msgs/lib:/home/workspace/ros2/install/lib:/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/install/nav2_map_server/lib:/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/install/nav2_amcl/lib:/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/install/nav2_lifecycle_manager/lib:/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/install/nav2_planner/lib:/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/install/nav2_navfn_planner/lib:/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/install/nav2_costmap_2d/lib:/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/install/nav2_util/lib:/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/install/nav2_voxel_grid/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/nav2_system_tests/test_updown")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nav2_system_tests" TYPE FILE FILES "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/navigation2/nav2_system_tests/src/updown/test_updown_launch.py")
endif()

