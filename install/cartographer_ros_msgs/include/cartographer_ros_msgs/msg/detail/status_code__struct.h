// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartographer_ros_msgs:msg/StatusCode.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__STATUS_CODE__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__STATUS_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OK'.
enum
{
  cartographer_ros_msgs__msg__StatusCode__OK = 0
};

/// Constant 'CANCELLED'.
enum
{
  cartographer_ros_msgs__msg__StatusCode__CANCELLED = 1
};

/// Constant 'UNKNOWN'.
enum
{
  cartographer_ros_msgs__msg__StatusCode__UNKNOWN = 2
};

/// Constant 'INVALID_ARGUMENT'.
enum
{
  cartographer_ros_msgs__msg__StatusCode__INVALID_ARGUMENT = 3
};

/// Constant 'DEADLINE_EXCEEDED'.
enum
{
  cartographer_ros_msgs__msg__StatusCode__DEADLINE_EXCEEDED = 4
};

/// Constant 'NOT_FOUND'.
enum
{
  cartographer_ros_msgs__msg__StatusCode__NOT_FOUND = 5
};

/// Constant 'ALREADY_EXISTS'.
enum
{
  cartographer_ros_msgs__msg__StatusCode__ALREADY_EXISTS = 6
};

/// Constant 'PERMISSION_DENIED'.
enum
{
  cartographer_ros_msgs__msg__StatusCode__PERMISSION_DENIED = 7
};

/// Constant 'RESOURCE_EXHAUSTED'.
enum
{
  cartographer_ros_msgs__msg__StatusCode__RESOURCE_EXHAUSTED = 8
};

/// Constant 'FAILED_PRECONDITION'.
enum
{
  cartographer_ros_msgs__msg__StatusCode__FAILED_PRECONDITION = 9
};

/// Constant 'ABORTED'.
enum
{
  cartographer_ros_msgs__msg__StatusCode__ABORTED = 10
};

/// Constant 'OUT_OF_RANGE'.
enum
{
  cartographer_ros_msgs__msg__StatusCode__OUT_OF_RANGE = 11
};

/// Constant 'UNIMPLEMENTED'.
enum
{
  cartographer_ros_msgs__msg__StatusCode__UNIMPLEMENTED = 12
};

/// Constant 'INTERNAL'.
enum
{
  cartographer_ros_msgs__msg__StatusCode__INTERNAL = 13
};

/// Constant 'UNAVAILABLE'.
enum
{
  cartographer_ros_msgs__msg__StatusCode__UNAVAILABLE = 14
};

/// Constant 'DATA_LOSS'.
enum
{
  cartographer_ros_msgs__msg__StatusCode__DATA_LOSS = 15
};

// Struct defined in msg/StatusCode in the package cartographer_ros_msgs.
typedef struct cartographer_ros_msgs__msg__StatusCode
{
  uint8_t structure_needs_at_least_one_member;
} cartographer_ros_msgs__msg__StatusCode;

// Struct for a sequence of cartographer_ros_msgs__msg__StatusCode.
typedef struct cartographer_ros_msgs__msg__StatusCode__Sequence
{
  cartographer_ros_msgs__msg__StatusCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__msg__StatusCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__STATUS_CODE__STRUCT_H_
