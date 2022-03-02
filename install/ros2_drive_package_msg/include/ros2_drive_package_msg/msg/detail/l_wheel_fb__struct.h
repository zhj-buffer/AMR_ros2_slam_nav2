// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_drive_package_msg:msg/LWheelFb.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__L_WHEEL_FB__STRUCT_H_
#define ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__L_WHEEL_FB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/LWheelFb in the package ros2_drive_package_msg.
typedef struct ros2_drive_package_msg__msg__LWheelFb
{
  float l_wheel_fb_velocity;
  int32_t l_wheel_fb_pulse;
} ros2_drive_package_msg__msg__LWheelFb;

// Struct for a sequence of ros2_drive_package_msg__msg__LWheelFb.
typedef struct ros2_drive_package_msg__msg__LWheelFb__Sequence
{
  ros2_drive_package_msg__msg__LWheelFb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_drive_package_msg__msg__LWheelFb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__L_WHEEL_FB__STRUCT_H_
