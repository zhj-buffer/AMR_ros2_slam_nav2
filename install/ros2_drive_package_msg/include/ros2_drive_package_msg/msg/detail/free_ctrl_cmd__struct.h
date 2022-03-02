// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_drive_package_msg:msg/FreeCtrlCmd.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__FREE_CTRL_CMD__STRUCT_H_
#define ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__FREE_CTRL_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/FreeCtrlCmd in the package ros2_drive_package_msg.
typedef struct ros2_drive_package_msg__msg__FreeCtrlCmd
{
  uint8_t ctrl_cmd_gear;
  float free_ctrl_cmd_velocity_l;
  float free_ctrl_cmd_velocity_r;
} ros2_drive_package_msg__msg__FreeCtrlCmd;

// Struct for a sequence of ros2_drive_package_msg__msg__FreeCtrlCmd.
typedef struct ros2_drive_package_msg__msg__FreeCtrlCmd__Sequence
{
  ros2_drive_package_msg__msg__FreeCtrlCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_drive_package_msg__msg__FreeCtrlCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__FREE_CTRL_CMD__STRUCT_H_
