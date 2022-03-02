# CMake generated Testfile for 
# Source directory: /home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/navigation2/nav2_behavior_tree/test
# Build directory: /home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/nav2_behavior_tree/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_bt_conversions "/usr/bin/python3" "-u" "/home/workspace/ros2/install/share/ament_cmake_test/cmake/run_test.py" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/nav2_behavior_tree/test_results/nav2_behavior_tree/test_bt_conversions.gtest.xml" "--package-name" "nav2_behavior_tree" "--output-file" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/nav2_behavior_tree/ament_cmake_gtest/test_bt_conversions.txt" "--command" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/nav2_behavior_tree/test/test_bt_conversions" "--gtest_output=xml:/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/nav2_behavior_tree/test_results/nav2_behavior_tree/test_bt_conversions.gtest.xml")
set_tests_properties(test_bt_conversions PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/nav2_behavior_tree/test/test_bt_conversions" TIMEOUT "60" WORKING_DIRECTORY "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/nav2_behavior_tree/test" _BACKTRACE_TRIPLES "/home/workspace/ros2/install/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/home/workspace/ros2/install/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/home/workspace/ros2/install/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/navigation2/nav2_behavior_tree/test/CMakeLists.txt;1;ament_add_gtest;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/navigation2/nav2_behavior_tree/test/CMakeLists.txt;0;")
subdirs("../gtest")
subdirs("plugins/condition")
subdirs("plugins/decorator")
subdirs("plugins/control")
subdirs("plugins/action")
