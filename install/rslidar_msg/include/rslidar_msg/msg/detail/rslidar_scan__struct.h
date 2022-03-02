// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rslidar_msg:msg/RslidarScan.idl
// generated code does not contain a copyright notice

#ifndef RSLIDAR_MSG__MSG__DETAIL__RSLIDAR_SCAN__STRUCT_H_
#define RSLIDAR_MSG__MSG__DETAIL__RSLIDAR_SCAN__STRUCT_H_

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
// Member 'packets'
#include "rslidar_msg/msg/detail/rslidar_packet__struct.h"

// Struct defined in msg/RslidarScan in the package rslidar_msg.
typedef struct rslidar_msg__msg__RslidarScan
{
  std_msgs__msg__Header header;
  rslidar_msg__msg__RslidarPacket__Sequence packets;
} rslidar_msg__msg__RslidarScan;

// Struct for a sequence of rslidar_msg__msg__RslidarScan.
typedef struct rslidar_msg__msg__RslidarScan__Sequence
{
  rslidar_msg__msg__RslidarScan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rslidar_msg__msg__RslidarScan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RSLIDAR_MSG__MSG__DETAIL__RSLIDAR_SCAN__STRUCT_H_
