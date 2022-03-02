// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:msg/ODEPhysics.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__ODE_PHYSICS__STRUCT_H_
#define GAZEBO_MSGS__MSG__DETAIL__ODE_PHYSICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ODEPhysics in the package gazebo_msgs.
typedef struct gazebo_msgs__msg__ODEPhysics
{
  bool auto_disable_bodies;
  uint32_t sor_pgs_precon_iters;
  uint32_t sor_pgs_iters;
  double sor_pgs_w;
  double sor_pgs_rms_error_tol;
  double contact_surface_layer;
  double contact_max_correcting_vel;
  double cfm;
  double erp;
  uint32_t max_contacts;
} gazebo_msgs__msg__ODEPhysics;

// Struct for a sequence of gazebo_msgs__msg__ODEPhysics.
typedef struct gazebo_msgs__msg__ODEPhysics__Sequence
{
  gazebo_msgs__msg__ODEPhysics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__msg__ODEPhysics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__MSG__DETAIL__ODE_PHYSICS__STRUCT_H_
