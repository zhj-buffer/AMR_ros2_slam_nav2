// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_drive_package_msg:msg/CtrlFb.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__CTRL_FB__STRUCT_H_
#define ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__CTRL_FB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/CtrlFb in the package ros2_drive_package_msg.
typedef struct ros2_drive_package_msg__msg__CtrlFb
{
  uint8_t ctrl_fb_target_gear;
  float ctrl_fb_linear;
  float ctrl_fb_angular;
} ros2_drive_package_msg__msg__CtrlFb;

// Struct for a sequence of ros2_drive_package_msg__msg__CtrlFb.
typedef struct ros2_drive_package_msg__msg__CtrlFb__Sequence
{
  ros2_drive_package_msg__msg__CtrlFb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_drive_package_msg__msg__CtrlFb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__CTRL_FB__STRUCT_H_
