// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartographer_ros_msgs:msg/SubmapTexture.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartographer_ros_msgs/msg/detail/submap_texture__rosidl_typesupport_introspection_c.h"
#include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartographer_ros_msgs/msg/detail/submap_texture__functions.h"
#include "cartographer_ros_msgs/msg/detail/submap_texture__struct.h"


// Include directives for member types
// Member `cells`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `slice_pose`
#include "geometry_msgs/msg/pose.h"
// Member `slice_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SubmapTexture__rosidl_typesupport_introspection_c__SubmapTexture_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartographer_ros_msgs__msg__SubmapTexture__init(message_memory);
}

void SubmapTexture__rosidl_typesupport_introspection_c__SubmapTexture_fini_function(void * message_memory)
{
  cartographer_ros_msgs__msg__SubmapTexture__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SubmapTexture__rosidl_typesupport_introspection_c__SubmapTexture_message_member_array[5] = {
  {
    "cells",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__SubmapTexture, cells),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__SubmapTexture, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__SubmapTexture, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "resolution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__SubmapTexture, resolution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "slice_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__SubmapTexture, slice_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SubmapTexture__rosidl_typesupport_introspection_c__SubmapTexture_message_members = {
  "cartographer_ros_msgs__msg",  // message namespace
  "SubmapTexture",  // message name
  5,  // number of fields
  sizeof(cartographer_ros_msgs__msg__SubmapTexture),
  SubmapTexture__rosidl_typesupport_introspection_c__SubmapTexture_message_member_array,  // message members
  SubmapTexture__rosidl_typesupport_introspection_c__SubmapTexture_init_function,  // function to initialize message memory (memory has to be allocated)
  SubmapTexture__rosidl_typesupport_introspection_c__SubmapTexture_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SubmapTexture__rosidl_typesupport_introspection_c__SubmapTexture_message_type_support_handle = {
  0,
  &SubmapTexture__rosidl_typesupport_introspection_c__SubmapTexture_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, msg, SubmapTexture)() {
  SubmapTexture__rosidl_typesupport_introspection_c__SubmapTexture_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!SubmapTexture__rosidl_typesupport_introspection_c__SubmapTexture_message_type_support_handle.typesupport_identifier) {
    SubmapTexture__rosidl_typesupport_introspection_c__SubmapTexture_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SubmapTexture__rosidl_typesupport_introspection_c__SubmapTexture_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
