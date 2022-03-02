// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartographer_ros_msgs:msg/SubmapTexture.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_TEXTURE__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_TEXTURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cells'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'slice_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in msg/SubmapTexture in the package cartographer_ros_msgs.
typedef struct cartographer_ros_msgs__msg__SubmapTexture
{
  rosidl_runtime_c__uint8__Sequence cells;
  int32_t width;
  int32_t height;
  double resolution;
  geometry_msgs__msg__Pose slice_pose;
} cartographer_ros_msgs__msg__SubmapTexture;

// Struct for a sequence of cartographer_ros_msgs__msg__SubmapTexture.
typedef struct cartographer_ros_msgs__msg__SubmapTexture__Sequence
{
  cartographer_ros_msgs__msg__SubmapTexture * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__msg__SubmapTexture__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_TEXTURE__STRUCT_H_
