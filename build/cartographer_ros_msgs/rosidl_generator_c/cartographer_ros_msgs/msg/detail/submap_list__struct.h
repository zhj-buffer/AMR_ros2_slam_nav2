// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartographer_ros_msgs:msg/SubmapList.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_LIST__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'submap'
#include "cartographer_ros_msgs/msg/detail/submap_entry__struct.h"

// Struct defined in msg/SubmapList in the package cartographer_ros_msgs.
typedef struct cartographer_ros_msgs__msg__SubmapList
{
  std_msgs__msg__Header header;
  cartographer_ros_msgs__msg__SubmapEntry__Sequence submap;
} cartographer_ros_msgs__msg__SubmapList;

// Struct for a sequence of cartographer_ros_msgs__msg__SubmapList.
typedef struct cartographer_ros_msgs__msg__SubmapList__Sequence
{
  cartographer_ros_msgs__msg__SubmapList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__msg__SubmapList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_LIST__STRUCT_H_
