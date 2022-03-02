// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartographer_ros_msgs:msg/TrajectoryOptions.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__TRAJECTORY_OPTIONS__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__TRAJECTORY_OPTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tracking_frame'
// Member 'published_frame'
// Member 'odom_frame'
// Member 'trajectory_builder_options_proto'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/TrajectoryOptions in the package cartographer_ros_msgs.
typedef struct cartographer_ros_msgs__msg__TrajectoryOptions
{
  rosidl_runtime_c__String tracking_frame;
  rosidl_runtime_c__String published_frame;
  rosidl_runtime_c__String odom_frame;
  bool provide_odom_frame;
  bool use_odometry;
  bool use_nav_sat;
  bool use_landmarks;
  bool publish_frame_projected_to_2d;
  int32_t num_laser_scans;
  int32_t num_multi_echo_laser_scans;
  int32_t num_subdivisions_per_laser_scan;
  int32_t num_point_clouds;
  double rangefinder_sampling_ratio;
  double odometry_sampling_ratio;
  double fixed_frame_pose_sampling_ratio;
  double imu_sampling_ratio;
  double landmarks_sampling_ratio;
  rosidl_runtime_c__String trajectory_builder_options_proto;
} cartographer_ros_msgs__msg__TrajectoryOptions;

// Struct for a sequence of cartographer_ros_msgs__msg__TrajectoryOptions.
typedef struct cartographer_ros_msgs__msg__TrajectoryOptions__Sequence
{
  cartographer_ros_msgs__msg__TrajectoryOptions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__msg__TrajectoryOptions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__TRAJECTORY_OPTIONS__STRUCT_H_
