// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartographer_ros_msgs:msg/StatusResponse.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__STATUS_RESPONSE__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__STATUS_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/StatusResponse in the package cartographer_ros_msgs.
typedef struct cartographer_ros_msgs__msg__StatusResponse
{
  uint8_t code;
  rosidl_runtime_c__String message;
} cartographer_ros_msgs__msg__StatusResponse;

// Struct for a sequence of cartographer_ros_msgs__msg__StatusResponse.
typedef struct cartographer_ros_msgs__msg__StatusResponse__Sequence
{
  cartographer_ros_msgs__msg__StatusResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__msg__StatusResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__STATUS_RESPONSE__STRUCT_H_
