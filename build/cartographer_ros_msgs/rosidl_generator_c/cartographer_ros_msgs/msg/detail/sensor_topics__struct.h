// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartographer_ros_msgs:msg/SensorTopics.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SENSOR_TOPICS__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SENSOR_TOPICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'laser_scan_topic'
// Member 'multi_echo_laser_scan_topic'
// Member 'point_cloud2_topic'
// Member 'imu_topic'
// Member 'odometry_topic'
// Member 'nav_sat_fix_topic'
// Member 'landmark_topic'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/SensorTopics in the package cartographer_ros_msgs.
typedef struct cartographer_ros_msgs__msg__SensorTopics
{
  rosidl_runtime_c__String laser_scan_topic;
  rosidl_runtime_c__String multi_echo_laser_scan_topic;
  rosidl_runtime_c__String point_cloud2_topic;
  rosidl_runtime_c__String imu_topic;
  rosidl_runtime_c__String odometry_topic;
  rosidl_runtime_c__String nav_sat_fix_topic;
  rosidl_runtime_c__String landmark_topic;
} cartographer_ros_msgs__msg__SensorTopics;

// Struct for a sequence of cartographer_ros_msgs__msg__SensorTopics.
typedef struct cartographer_ros_msgs__msg__SensorTopics__Sequence
{
  cartographer_ros_msgs__msg__SensorTopics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__msg__SensorTopics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SENSOR_TOPICS__STRUCT_H_
