// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_drive_package_msg:msg/IoFb.idl
// generated code does not contain a copyright notice
#include "ros2_drive_package_msg/msg/detail/io_fb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ros2_drive_package_msg__msg__IoFb__init(ros2_drive_package_msg__msg__IoFb * msg)
{
  if (!msg) {
    return false;
  }
  // io_fb_lamp_ctrl
  // io_fb_unlock
  // io_fb_lower_beam_headlamp
  // io_fb_upper_beam_headlamp
  // io_fb_turn_lamp
  // io_fb_braking_lamp
  // io_fb_clearance_lamp
  // io_fb_fog_lamp
  // io_fb_speaker
  // io_fb_fl_impact_sensor
  // io_fb_fm_impact_sensor
  // io_fb_fr_impact_sensor
  // io_fb_rl_impact_sensor
  // io_fb_rm_impact_sensor
  // io_fb_rr_impact_sensor
  // io_fb_fl_drop_sensor
  // io_fb_fm_drop_sensor
  // io_fb_fr_drop_sensor
  // io_fb_rl_drop_sensor
  // io_fb_rm_drop_sensor
  // io_fb_rr_drop_sensor
  // io_fb_estop
  // io_fb_joypad_ctrl
  // io_fb_charge_state
  return true;
}

void
ros2_drive_package_msg__msg__IoFb__fini(ros2_drive_package_msg__msg__IoFb * msg)
{
  if (!msg) {
    return;
  }
  // io_fb_lamp_ctrl
  // io_fb_unlock
  // io_fb_lower_beam_headlamp
  // io_fb_upper_beam_headlamp
  // io_fb_turn_lamp
  // io_fb_braking_lamp
  // io_fb_clearance_lamp
  // io_fb_fog_lamp
  // io_fb_speaker
  // io_fb_fl_impact_sensor
  // io_fb_fm_impact_sensor
  // io_fb_fr_impact_sensor
  // io_fb_rl_impact_sensor
  // io_fb_rm_impact_sensor
  // io_fb_rr_impact_sensor
  // io_fb_fl_drop_sensor
  // io_fb_fm_drop_sensor
  // io_fb_fr_drop_sensor
  // io_fb_rl_drop_sensor
  // io_fb_rm_drop_sensor
  // io_fb_rr_drop_sensor
  // io_fb_estop
  // io_fb_joypad_ctrl
  // io_fb_charge_state
}

ros2_drive_package_msg__msg__IoFb *
ros2_drive_package_msg__msg__IoFb__create()
{
  ros2_drive_package_msg__msg__IoFb * msg = (ros2_drive_package_msg__msg__IoFb *)malloc(sizeof(ros2_drive_package_msg__msg__IoFb));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_drive_package_msg__msg__IoFb));
  bool success = ros2_drive_package_msg__msg__IoFb__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_drive_package_msg__msg__IoFb__destroy(ros2_drive_package_msg__msg__IoFb * msg)
{
  if (msg) {
    ros2_drive_package_msg__msg__IoFb__fini(msg);
  }
  free(msg);
}


bool
ros2_drive_package_msg__msg__IoFb__Sequence__init(ros2_drive_package_msg__msg__IoFb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_drive_package_msg__msg__IoFb * data = NULL;
  if (size) {
    data = (ros2_drive_package_msg__msg__IoFb *)calloc(size, sizeof(ros2_drive_package_msg__msg__IoFb));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_drive_package_msg__msg__IoFb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_drive_package_msg__msg__IoFb__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros2_drive_package_msg__msg__IoFb__Sequence__fini(ros2_drive_package_msg__msg__IoFb__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_drive_package_msg__msg__IoFb__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros2_drive_package_msg__msg__IoFb__Sequence *
ros2_drive_package_msg__msg__IoFb__Sequence__create(size_t size)
{
  ros2_drive_package_msg__msg__IoFb__Sequence * array = (ros2_drive_package_msg__msg__IoFb__Sequence *)malloc(sizeof(ros2_drive_package_msg__msg__IoFb__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_drive_package_msg__msg__IoFb__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_drive_package_msg__msg__IoFb__Sequence__destroy(ros2_drive_package_msg__msg__IoFb__Sequence * array)
{
  if (array) {
    ros2_drive_package_msg__msg__IoFb__Sequence__fini(array);
  }
  free(array);
}
