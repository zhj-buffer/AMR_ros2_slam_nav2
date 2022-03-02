// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_drive_package_msg:msg/BmsFlagFb.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__BMS_FLAG_FB__STRUCT_H_
#define ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__BMS_FLAG_FB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/BmsFlagFb in the package ros2_drive_package_msg.
typedef struct ros2_drive_package_msg__msg__BmsFlagFb
{
  uint8_t bms_flag_fb_soc;
  bool bms_flag_fb_single_ov;
  bool bms_flag_fb_single_uv;
  bool bms_flag_fb_ov;
  bool bms_flag_fb_uv;
  bool bms_flag_fb_charge_ot;
  bool bms_flag_fb_charge_ut;
  bool bms_flag_fb_discharge_ot;
  bool bms_flag_fb_discharge_ut;
  bool bms_flag_fb_charge_oc;
  bool bms_flag_fb_discharge_oc;
  bool bms_flag_fb_short;
  bool bms_flag_fb_ic_error;
  bool bms_flag_fb_lock_mos;
  bool bms_flag_fb_charge_flag;
  float bms_flag_fb_hight_temperature;
  float bms_flag_fb_low_temperature;
} ros2_drive_package_msg__msg__BmsFlagFb;

// Struct for a sequence of ros2_drive_package_msg__msg__BmsFlagFb.
typedef struct ros2_drive_package_msg__msg__BmsFlagFb__Sequence
{
  ros2_drive_package_msg__msg__BmsFlagFb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_drive_package_msg__msg__BmsFlagFb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__BMS_FLAG_FB__STRUCT_H_
