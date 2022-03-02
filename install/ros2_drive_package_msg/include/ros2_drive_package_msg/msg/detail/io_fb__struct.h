// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_drive_package_msg:msg/IoFb.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__IO_FB__STRUCT_H_
#define ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__IO_FB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/IoFb in the package ros2_drive_package_msg.
typedef struct ros2_drive_package_msg__msg__IoFb
{
  bool io_fb_lamp_ctrl;
  bool io_fb_unlock;
  bool io_fb_lower_beam_headlamp;
  bool io_fb_upper_beam_headlamp;
  int8_t io_fb_turn_lamp;
  bool io_fb_braking_lamp;
  bool io_fb_clearance_lamp;
  bool io_fb_fog_lamp;
  bool io_fb_speaker;
  bool io_fb_fl_impact_sensor;
  bool io_fb_fm_impact_sensor;
  bool io_fb_fr_impact_sensor;
  bool io_fb_rl_impact_sensor;
  bool io_fb_rm_impact_sensor;
  bool io_fb_rr_impact_sensor;
  bool io_fb_fl_drop_sensor;
  bool io_fb_fm_drop_sensor;
  bool io_fb_fr_drop_sensor;
  bool io_fb_rl_drop_sensor;
  bool io_fb_rm_drop_sensor;
  bool io_fb_rr_drop_sensor;
  bool io_fb_estop;
  bool io_fb_joypad_ctrl;
  bool io_fb_charge_state;
} ros2_drive_package_msg__msg__IoFb;

// Struct for a sequence of ros2_drive_package_msg__msg__IoFb.
typedef struct ros2_drive_package_msg__msg__IoFb__Sequence
{
  ros2_drive_package_msg__msg__IoFb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_drive_package_msg__msg__IoFb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__IO_FB__STRUCT_H_
