# CMake generated Testfile for 
# Source directory: /home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/perception_pcl/pcl_ros
# Build directory: /home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/pcl_ros
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cppcheck "/usr/bin/python3" "-u" "/home/workspace/ros2/install/share/ament_cmake_test/cmake/run_test.py" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/pcl_ros/test_results/pcl_ros/cppcheck.xunit.xml" "--package-name" "pcl_ros" "--output-file" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/pcl_ros/ament_cppcheck/cppcheck.txt" "--command" "/home/workspace/ros2/install/bin/ament_cppcheck" "--xunit-file" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/pcl_ros/test_results/pcl_ros/cppcheck.xunit.xml" "--include_dirs" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/perception_pcl/pcl_ros/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/perception_pcl/pcl_ros" _BACKTRACE_TRIPLES "/home/workspace/ros2/install/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/home/workspace/ros2/install/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;61;ament_add_test;/home/workspace/ros2/install/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;83;ament_cppcheck;/home/workspace/ros2/install/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/home/workspace/ros2/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/workspace/ros2/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/home/workspace/ros2/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/home/workspace/ros2/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/workspace/ros2/install/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/perception_pcl/pcl_ros/CMakeLists.txt;199;ament_package;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/perception_pcl/pcl_ros/CMakeLists.txt;0;")
add_test(cpplint "/usr/bin/python3" "-u" "/home/workspace/ros2/install/share/ament_cmake_test/cmake/run_test.py" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/pcl_ros/test_results/pcl_ros/cpplint.xunit.xml" "--package-name" "pcl_ros" "--output-file" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/pcl_ros/ament_cpplint/cpplint.txt" "--command" "/home/workspace/ros2/install/bin/ament_cpplint" "--xunit-file" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/pcl_ros/test_results/pcl_ros/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/perception_pcl/pcl_ros" _BACKTRACE_TRIPLES "/home/workspace/ros2/install/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/home/workspace/ros2/install/share/ament_cmake_cpplint/cmake/ament_cpplint.cmake;68;ament_add_test;/home/workspace/ros2/install/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;35;ament_cpplint;/home/workspace/ros2/install/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;0;;/home/workspace/ros2/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/workspace/ros2/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/home/workspace/ros2/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/home/workspace/ros2/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/workspace/ros2/install/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/perception_pcl/pcl_ros/CMakeLists.txt;199;ament_package;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/perception_pcl/pcl_ros/CMakeLists.txt;0;")
add_test(flake8 "/usr/bin/python3" "-u" "/home/workspace/ros2/install/share/ament_cmake_test/cmake/run_test.py" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/pcl_ros/test_results/pcl_ros/flake8.xunit.xml" "--package-name" "pcl_ros" "--output-file" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/pcl_ros/ament_flake8/flake8.txt" "--command" "/home/workspace/ros2/install/bin/ament_flake8" "--xunit-file" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/pcl_ros/test_results/pcl_ros/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/perception_pcl/pcl_ros" _BACKTRACE_TRIPLES "/home/workspace/ros2/install/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/home/workspace/ros2/install/share/ament_cmake_flake8/cmake/ament_flake8.cmake;48;ament_add_test;/home/workspace/ros2/install/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;18;ament_flake8;/home/workspace/ros2/install/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;0;;/home/workspace/ros2/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/workspace/ros2/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/home/workspace/ros2/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/home/workspace/ros2/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/workspace/ros2/install/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/perception_pcl/pcl_ros/CMakeLists.txt;199;ament_package;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/perception_pcl/pcl_ros/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3" "-u" "/home/workspace/ros2/install/share/ament_cmake_test/cmake/run_test.py" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/pcl_ros/test_results/pcl_ros/lint_cmake.xunit.xml" "--package-name" "pcl_ros" "--output-file" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/pcl_ros/ament_lint_cmake/lint_cmake.txt" "--command" "/home/workspace/ros2/install/bin/ament_lint_cmake" "--xunit-file" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/pcl_ros/test_results/pcl_ros/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/perception_pcl/pcl_ros" _BACKTRACE_TRIPLES "/home/workspace/ros2/install/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/home/workspace/ros2/install/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;41;ament_add_test;/home/workspace/ros2/install/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/home/workspace/ros2/install/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/home/workspace/ros2/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/workspace/ros2/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/home/workspace/ros2/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/home/workspace/ros2/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/workspace/ros2/install/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/perception_pcl/pcl_ros/CMakeLists.txt;199;ament_package;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/perception_pcl/pcl_ros/CMakeLists.txt;0;")
add_test(pep257 "/usr/bin/python3" "-u" "/home/workspace/ros2/install/share/ament_cmake_test/cmake/run_test.py" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/pcl_ros/test_results/pcl_ros/pep257.xunit.xml" "--package-name" "pcl_ros" "--output-file" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/pcl_ros/ament_pep257/pep257.txt" "--command" "/home/workspace/ros2/install/bin/ament_pep257" "--xunit-file" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/pcl_ros/test_results/pcl_ros/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/perception_pcl/pcl_ros" _BACKTRACE_TRIPLES "/home/workspace/ros2/install/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/home/workspace/ros2/install/share/ament_cmake_pep257/cmake/ament_pep257.cmake;41;ament_add_test;/home/workspace/ros2/install/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;18;ament_pep257;/home/workspace/ros2/install/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;0;;/home/workspace/ros2/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/workspace/ros2/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/home/workspace/ros2/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/home/workspace/ros2/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/workspace/ros2/install/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/perception_pcl/pcl_ros/CMakeLists.txt;199;ament_package;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/perception_pcl/pcl_ros/CMakeLists.txt;0;")
add_test(uncrustify "/usr/bin/python3" "-u" "/home/workspace/ros2/install/share/ament_cmake_test/cmake/run_test.py" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/pcl_ros/test_results/pcl_ros/uncrustify.xunit.xml" "--package-name" "pcl_ros" "--output-file" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/pcl_ros/ament_uncrustify/uncrustify.txt" "--command" "/home/workspace/ros2/install/bin/ament_uncrustify" "--xunit-file" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/pcl_ros/test_results/pcl_ros/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/perception_pcl/pcl_ros" _BACKTRACE_TRIPLES "/home/workspace/ros2/install/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/home/workspace/ros2/install/share/ament_cmake_uncrustify/cmake/ament_uncrustify.cmake;65;ament_add_test;/home/workspace/ros2/install/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;34;ament_uncrustify;/home/workspace/ros2/install/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;0;;/home/workspace/ros2/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/workspace/ros2/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/home/workspace/ros2/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/home/workspace/ros2/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/workspace/ros2/install/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/perception_pcl/pcl_ros/CMakeLists.txt;199;ament_package;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/perception_pcl/pcl_ros/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3" "-u" "/home/workspace/ros2/install/share/ament_cmake_test/cmake/run_test.py" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/pcl_ros/test_results/pcl_ros/xmllint.xunit.xml" "--package-name" "pcl_ros" "--output-file" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/pcl_ros/ament_xmllint/xmllint.txt" "--command" "/home/workspace/ros2/install/bin/ament_xmllint" "--xunit-file" "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/build/pcl_ros/test_results/pcl_ros/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/perception_pcl/pcl_ros" _BACKTRACE_TRIPLES "/home/workspace/ros2/install/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/home/workspace/ros2/install/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/home/workspace/ros2/install/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/home/workspace/ros2/install/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/home/workspace/ros2/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/workspace/ros2/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/home/workspace/ros2/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/home/workspace/ros2/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/workspace/ros2/install/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/perception_pcl/pcl_ros/CMakeLists.txt;199;ament_package;/home/nvidia/workspace/alan/src/AMR_ros2_slam_nav2/perception_pcl/pcl_ros/CMakeLists.txt;0;")
