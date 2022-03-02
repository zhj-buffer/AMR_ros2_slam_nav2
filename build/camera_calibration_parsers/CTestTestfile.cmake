# CMake generated Testfile for 
# Source directory: /home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/image_common/camera_calibration_parsers
# Build directory: /home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/camera_calibration_parsers
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cpplint "/usr/bin/python3" "-u" "/home/workspace/ros2/install/share/ament_cmake_test/cmake/run_test.py" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/camera_calibration_parsers/test_results/camera_calibration_parsers/cpplint.xunit.xml" "--package-name" "camera_calibration_parsers" "--output-file" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/camera_calibration_parsers/ament_cpplint/cpplint.txt" "--command" "/home/workspace/ros2/install/bin/ament_cpplint" "--xunit-file" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/camera_calibration_parsers/test_results/camera_calibration_parsers/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/image_common/camera_calibration_parsers" _BACKTRACE_TRIPLES "/home/workspace/ros2/install/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/home/workspace/ros2/install/share/ament_cmake_cpplint/cmake/ament_cpplint.cmake;68;ament_add_test;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/image_common/camera_calibration_parsers/CMakeLists.txt;97;ament_cpplint;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/image_common/camera_calibration_parsers/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3" "-u" "/home/workspace/ros2/install/share/ament_cmake_test/cmake/run_test.py" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/camera_calibration_parsers/test_results/camera_calibration_parsers/lint_cmake.xunit.xml" "--package-name" "camera_calibration_parsers" "--output-file" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/camera_calibration_parsers/ament_lint_cmake/lint_cmake.txt" "--command" "/home/workspace/ros2/install/bin/ament_lint_cmake" "--xunit-file" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/camera_calibration_parsers/test_results/camera_calibration_parsers/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/image_common/camera_calibration_parsers" _BACKTRACE_TRIPLES "/home/workspace/ros2/install/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/home/workspace/ros2/install/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;41;ament_add_test;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/image_common/camera_calibration_parsers/CMakeLists.txt;98;ament_lint_cmake;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/image_common/camera_calibration_parsers/CMakeLists.txt;0;")
add_test(uncrustify "/usr/bin/python3" "-u" "/home/workspace/ros2/install/share/ament_cmake_test/cmake/run_test.py" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/camera_calibration_parsers/test_results/camera_calibration_parsers/uncrustify.xunit.xml" "--package-name" "camera_calibration_parsers" "--output-file" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/camera_calibration_parsers/ament_uncrustify/uncrustify.txt" "--command" "/home/workspace/ros2/install/bin/ament_uncrustify" "--xunit-file" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/camera_calibration_parsers/test_results/camera_calibration_parsers/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/image_common/camera_calibration_parsers" _BACKTRACE_TRIPLES "/home/workspace/ros2/install/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/home/workspace/ros2/install/share/ament_cmake_uncrustify/cmake/ament_uncrustify.cmake;65;ament_add_test;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/image_common/camera_calibration_parsers/CMakeLists.txt;99;ament_uncrustify;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/image_common/camera_calibration_parsers/CMakeLists.txt;0;")
add_test(camera_calibration_parsers-parse_ini "/usr/bin/python3" "-u" "/home/workspace/ros2/install/share/ament_cmake_test/cmake/run_test.py" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/camera_calibration_parsers/test_results/camera_calibration_parsers/camera_calibration_parsers-parse_ini.gtest.xml" "--package-name" "camera_calibration_parsers" "--output-file" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/camera_calibration_parsers/ament_cmake_gtest/camera_calibration_parsers-parse_ini.txt" "--command" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/camera_calibration_parsers/camera_calibration_parsers-parse_ini" "--gtest_output=xml:/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/camera_calibration_parsers/test_results/camera_calibration_parsers/camera_calibration_parsers-parse_ini.gtest.xml")
set_tests_properties(camera_calibration_parsers-parse_ini PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/camera_calibration_parsers/camera_calibration_parsers-parse_ini" TIMEOUT "60" WORKING_DIRECTORY "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/camera_calibration_parsers" _BACKTRACE_TRIPLES "/home/workspace/ros2/install/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/home/workspace/ros2/install/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/home/workspace/ros2/install/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/image_common/camera_calibration_parsers/CMakeLists.txt;102;ament_add_gtest;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/image_common/camera_calibration_parsers/CMakeLists.txt;0;")
add_test(camera_calibration_parsers-parse_yml "/usr/bin/python3" "-u" "/home/workspace/ros2/install/share/ament_cmake_test/cmake/run_test.py" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/camera_calibration_parsers/test_results/camera_calibration_parsers/camera_calibration_parsers-parse_yml.gtest.xml" "--package-name" "camera_calibration_parsers" "--output-file" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/camera_calibration_parsers/ament_cmake_gtest/camera_calibration_parsers-parse_yml.txt" "--command" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/camera_calibration_parsers/camera_calibration_parsers-parse_yml" "--gtest_output=xml:/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/camera_calibration_parsers/test_results/camera_calibration_parsers/camera_calibration_parsers-parse_yml.gtest.xml")
set_tests_properties(camera_calibration_parsers-parse_yml PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/camera_calibration_parsers/camera_calibration_parsers-parse_yml" TIMEOUT "60" WORKING_DIRECTORY "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/camera_calibration_parsers" _BACKTRACE_TRIPLES "/home/workspace/ros2/install/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/home/workspace/ros2/install/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/home/workspace/ros2/install/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/image_common/camera_calibration_parsers/CMakeLists.txt;107;ament_add_gtest;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/image_common/camera_calibration_parsers/CMakeLists.txt;0;")
subdirs("gtest")
