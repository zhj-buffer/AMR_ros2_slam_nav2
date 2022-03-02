set(_AMENT_PACKAGE_NAME "self_test")
set(self_test_VERSION "2.0.8")
set(self_test_MAINTAINER "Brice Rebsamen <brice.rebsamen@gmail.com>, Austin Hendrix <namniart@gmail.com>, Karsten Knese <karsten.knese@us.bosch.com>")
set(self_test_BUILD_DEPENDS "diagnostic_msgs" "diagnostic_updater" "rclcpp")
set(self_test_BUILDTOOL_DEPENDS "ament_cmake")
set(self_test_BUILD_EXPORT_DEPENDS "diagnostic_msgs" "diagnostic_updater" "rclcpp")
set(self_test_BUILDTOOL_EXPORT_DEPENDS )
set(self_test_EXEC_DEPENDS "diagnostic_msgs" "diagnostic_updater" "rclcpp")
set(self_test_TEST_DEPENDS "ament_lint_auto" "ament_lint_common" "ament_cmake_gtest")
set(self_test_GROUP_DEPENDS )
set(self_test_MEMBER_OF_GROUPS )
set(self_test_DEPRECATED "")
set(self_test_EXPORT_TAGS)
list(APPEND self_test_EXPORT_TAGS "<build_type>ament_cmake</build_type>")