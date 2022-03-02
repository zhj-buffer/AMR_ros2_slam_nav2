set(_AMENT_PACKAGE_NAME "diagnostic_aggregator")
set(diagnostic_aggregator_VERSION "2.0.8")
set(diagnostic_aggregator_MAINTAINER "Austin Hendrix <namniart@gmail.com>, Brice Rebsamen <brice.rebsamen@gmail.com>, Karsten Knese <karsten.knese@us.bosch.com>")
set(diagnostic_aggregator_BUILD_DEPENDS "diagnostic_msgs" "pluginlib" "rclcpp" "std_msgs" "rclpy")
set(diagnostic_aggregator_BUILDTOOL_DEPENDS "ament_cmake" "ament_cmake_python")
set(diagnostic_aggregator_BUILD_EXPORT_DEPENDS "rclpy")
set(diagnostic_aggregator_BUILDTOOL_EXPORT_DEPENDS )
set(diagnostic_aggregator_EXEC_DEPENDS "rclpy")
set(diagnostic_aggregator_TEST_DEPENDS "ament_cmake_gtest" "ament_cmake_pytest" "ament_lint_auto" "ament_lint_common" "launch_testing_ament_cmake" "launch_testing_ros")
set(diagnostic_aggregator_GROUP_DEPENDS )
set(diagnostic_aggregator_MEMBER_OF_GROUPS )
set(diagnostic_aggregator_DEPRECATED "")
set(diagnostic_aggregator_EXPORT_TAGS)
list(APPEND diagnostic_aggregator_EXPORT_TAGS "<diagnostic_aggregator plugin=\"plugin_description.xml\"/>")
list(APPEND diagnostic_aggregator_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
