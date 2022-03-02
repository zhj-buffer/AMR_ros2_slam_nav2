// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartographer_ros_msgs:msg/LandmarkEntry.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__LANDMARK_ENTRY__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__LANDMARK_ENTRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'tracking_from_landmark_transform'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in msg/LandmarkEntry in the package cartographer_ros_msgs.
typedef struct cartographer_ros_msgs__msg__LandmarkEntry
{
  rosidl_runtime_c__String id;
  geometry_msgs__msg__Pose tracking_from_landmark_transform;
  double translation_weight;
  double rotation_weight;
} cartographer_ros_msgs__msg__LandmarkEntry;

// Struct for a sequence of cartographer_ros_msgs__msg__LandmarkEntry.
typedef struct cartographer_ros_msgs__msg__LandmarkEntry__Sequence
{
  cartographer_ros_msgs__msg__LandmarkEntry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__msg__LandmarkEntry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__LANDMARK_ENTRY__STRUCT_H_
