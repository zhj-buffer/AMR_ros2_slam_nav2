// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_rada_msg:msg/Rada.idl
// generated code does not contain a copyright notice

#ifndef ROS2_RADA_MSG__MSG__DETAIL__RADA__STRUCT_H_
#define ROS2_RADA_MSG__MSG__DETAIL__RADA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Rada in the package ros2_rada_msg.
typedef struct ros2_rada_msg__msg__Rada
{
  uint32_t r1;
  uint32_t r2;
  uint32_t r3;
  uint32_t r4;
  uint32_t crc;
} ros2_rada_msg__msg__Rada;

// Struct for a sequence of ros2_rada_msg__msg__Rada.
typedef struct ros2_rada_msg__msg__Rada__Sequence
{
  ros2_rada_msg__msg__Rada * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_rada_msg__msg__Rada__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_RADA_MSG__MSG__DETAIL__RADA__STRUCT_H_
