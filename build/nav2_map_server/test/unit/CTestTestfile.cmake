# CMake generated Testfile for 
# Source directory: /home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/navigation2/nav2_map_server/test/unit
# Build directory: /home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/nav2_map_server/test/unit
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_map_io "/usr/bin/python3" "-u" "/home/workspace/ros2/install/share/ament_cmake_test/cmake/run_test.py" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/nav2_map_server/test_results/nav2_map_server/test_map_io.gtest.xml" "--package-name" "nav2_map_server" "--output-file" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/nav2_map_server/ament_cmake_gtest/test_map_io.txt" "--command" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/nav2_map_server/test/unit/test_map_io" "--gtest_output=xml:/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/nav2_map_server/test_results/nav2_map_server/test_map_io.gtest.xml")
set_tests_properties(test_map_io PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/nav2_map_server/test/unit/test_map_io" TIMEOUT "60" WORKING_DIRECTORY "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/nav2_map_server/test/unit" _BACKTRACE_TRIPLES "/home/workspace/ros2/install/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/home/workspace/ros2/install/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/home/workspace/ros2/install/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/navigation2/nav2_map_server/test/unit/CMakeLists.txt;4;ament_add_gtest;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/navigation2/nav2_map_server/test/unit/CMakeLists.txt;0;")
subdirs("../../gtest")
