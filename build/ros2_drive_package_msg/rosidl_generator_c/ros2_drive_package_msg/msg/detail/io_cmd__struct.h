// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_drive_package_msg:msg/IoCmd.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__IO_CMD__STRUCT_H_
#define ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__IO_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/IoCmd in the package ros2_drive_package_msg.
typedef struct ros2_drive_package_msg__msg__IoCmd
{
  bool io_cmd_lamp_ctrl;
  bool io_cmd_unlock;
  bool io_cmd_lower_beam_headlamp;
  bool io_cmd_upper_beam_headlamp;
  uint8_t io_cmd_turn_lamp;
  bool io_cmd_braking_lamp;
  bool io_cmd_clearance_lamp;
  bool io_cmd_fog_lamp;
  bool io_cmd_speaker;
} ros2_drive_package_msg__msg__IoCmd;

// Struct for a sequence of ros2_drive_package_msg__msg__IoCmd.
typedef struct ros2_drive_package_msg__msg__IoCmd__Sequence
{
  ros2_drive_package_msg__msg__IoCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_drive_package_msg__msg__IoCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__IO_CMD__STRUCT_H_
