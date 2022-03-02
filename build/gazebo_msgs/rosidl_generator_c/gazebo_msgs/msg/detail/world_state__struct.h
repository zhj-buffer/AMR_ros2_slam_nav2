// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:msg/WorldState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__WORLD_STATE__STRUCT_H_
#define GAZEBO_MSGS__MSG__DETAIL__WORLD_STATE__STRUCT_H_

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
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'wrench'
#include "geometry_msgs/msg/detail/wrench__struct.h"

// Struct defined in msg/WorldState in the package gazebo_msgs.
typedef struct gazebo_msgs__msg__WorldState
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence name;
  geometry_msgs__msg__Pose__Sequence pose;
  geometry_msgs__msg__Twist__Sequence twist;
  geometry_msgs__msg__Wrench__Sequence wrench;
} gazebo_msgs__msg__WorldState;

// Struct for a sequence of gazebo_msgs__msg__WorldState.
typedef struct gazebo_msgs__msg__WorldState__Sequence
{
  gazebo_msgs__msg__WorldState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__msg__WorldState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__MSG__DETAIL__WORLD_STATE__STRUCT_H_
