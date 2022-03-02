// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartographer_ros_msgs:msg/SubmapEntry.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_ENTRY__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_ENTRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in msg/SubmapEntry in the package cartographer_ros_msgs.
typedef struct cartographer_ros_msgs__msg__SubmapEntry
{
  int32_t trajectory_id;
  int32_t submap_index;
  int32_t submap_version;
  geometry_msgs__msg__Pose pose;
} cartographer_ros_msgs__msg__SubmapEntry;

// Struct for a sequence of cartographer_ros_msgs__msg__SubmapEntry.
typedef struct cartographer_ros_msgs__msg__SubmapEntry__Sequence
{
  cartographer_ros_msgs__msg__SubmapEntry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__msg__SubmapEntry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_ENTRY__STRUCT_H_
