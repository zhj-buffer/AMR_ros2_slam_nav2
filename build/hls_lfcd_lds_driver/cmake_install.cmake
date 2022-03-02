# Install script for directory: /home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/hls_lfcd_lds_driver

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/install/hls_lfcd_lds_driver")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hls_lfcd_lds_driver" TYPE DIRECTORY FILES
    "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/hls_lfcd_lds_driver/launch"
    "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/hls_lfcd_lds_driver/rviz"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hls_lfcd_lds_driver/hlds_laser_publisher" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hls_lfcd_lds_driver/hlds_laser_publisher")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hls_lfcd_lds_driver/hlds_laser_publisher"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/hls_lfcd_lds_driver" TYPE EXECUTABLE FILES "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/hls_lfcd_lds_driver/hlds_laser_publisher")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hls_lfcd_lds_driver/hlds_laser_publisher" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hls_lfcd_lds_driver/hlds_laser_publisher")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hls_lfcd_lds_driver/hlds_laser_publisher"
         OLD_RPATH "/home/workspace/ros2/install/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hls_lfcd_lds_driver/hlds_laser_publisher")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/hls_lfcd_lds_driver/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/hls_lfcd_lds_driver")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/hls_lfcd_lds_driver/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/hls_lfcd_lds_driver")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hls_lfcd_lds_driver/environment" TYPE FILE FILES "/home/workspace/ros2/install/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hls_lfcd_lds_driver/environment" TYPE FILE FILES "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/hls_lfcd_lds_driver/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hls_lfcd_lds_driver/environment" TYPE FILE FILES "/home/workspace/ros2/install/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hls_lfcd_lds_driver/environment" TYPE FILE FILES "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/hls_lfcd_lds_driver/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hls_lfcd_lds_driver" TYPE FILE FILES "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/hls_lfcd_lds_driver/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hls_lfcd_lds_driver" TYPE FILE FILES "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/hls_lfcd_lds_driver/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hls_lfcd_lds_driver" TYPE FILE FILES "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/hls_lfcd_lds_driver/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hls_lfcd_lds_driver" TYPE FILE FILES "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/hls_lfcd_lds_driver/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hls_lfcd_lds_driver" TYPE FILE FILES "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/hls_lfcd_lds_driver/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/hls_lfcd_lds_driver/ament_cmake_index/share/ament_index/resource_index/packages/hls_lfcd_lds_driver")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hls_lfcd_lds_driver/cmake" TYPE FILE FILES "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/hls_lfcd_lds_driver/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hls_lfcd_lds_driver/cmake" TYPE FILE FILES "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/hls_lfcd_lds_driver/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hls_lfcd_lds_driver/cmake" TYPE FILE FILES
    "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/hls_lfcd_lds_driver/ament_cmake_core/hls_lfcd_lds_driverConfig.cmake"
    "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/hls_lfcd_lds_driver/ament_cmake_core/hls_lfcd_lds_driverConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hls_lfcd_lds_driver" TYPE FILE FILES "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/hls_lfcd_lds_driver/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/hls_lfcd_lds_driver/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
