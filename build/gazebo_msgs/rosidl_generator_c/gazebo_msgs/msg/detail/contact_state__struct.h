// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:msg/ContactState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__CONTACT_STATE__STRUCT_H_
#define GAZEBO_MSGS__MSG__DETAIL__CONTACT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'info'
// Member 'collision1_name'
// Member 'collision2_name'
#include "rosidl_runtime_c/string.h"
// Member 'wrenches'
// Member 'total_wrench'
#include "geometry_msgs/msg/detail/wrench__struct.h"
// Member 'contact_positions'
// Member 'contact_normals'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'depths'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/ContactState in the package gazebo_msgs.
typedef struct gazebo_msgs__msg__ContactState
{
  rosidl_runtime_c__String info;
  rosidl_runtime_c__String collision1_name;
  rosidl_runtime_c__String collision2_name;
  geometry_msgs__msg__Wrench__Sequence wrenches;
  geometry_msgs__msg__Wrench total_wrench;
  geometry_msgs__msg__Vector3__Sequence contact_positions;
  geometry_msgs__msg__Vector3__Sequence contact_normals;
  rosidl_runtime_c__double__Sequence depths;
} gazebo_msgs__msg__ContactState;

// Struct for a sequence of gazebo_msgs__msg__ContactState.
typedef struct gazebo_msgs__msg__ContactState__Sequence
{
  gazebo_msgs__msg__ContactState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__msg__ContactState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__MSG__DETAIL__CONTACT_STATE__STRUCT_H_
