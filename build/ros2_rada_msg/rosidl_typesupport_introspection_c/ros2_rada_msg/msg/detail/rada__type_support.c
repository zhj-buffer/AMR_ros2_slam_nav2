// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_rada_msg:msg/Rada.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_rada_msg/msg/detail/rada__rosidl_typesupport_introspection_c.h"
#include "ros2_rada_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_rada_msg/msg/detail/rada__functions.h"
#include "ros2_rada_msg/msg/detail/rada__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Rada__rosidl_typesupport_introspection_c__Rada_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_rada_msg__msg__Rada__init(message_memory);
}

void Rada__rosidl_typesupport_introspection_c__Rada_fini_function(void * message_memory)
{
  ros2_rada_msg__msg__Rada__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Rada__rosidl_typesupport_introspection_c__Rada_message_member_array[5] = {
  {
    "r1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_rada_msg__msg__Rada, r1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "r2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_rada_msg__msg__Rada, r2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "r3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_rada_msg__msg__Rada, r3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "r4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_rada_msg__msg__Rada, r4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "crc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_rada_msg__msg__Rada, crc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Rada__rosidl_typesupport_introspection_c__Rada_message_members = {
  "ros2_rada_msg__msg",  // message namespace
  "Rada",  // message name
  5,  // number of fields
  sizeof(ros2_rada_msg__msg__Rada),
  Rada__rosidl_typesupport_introspection_c__Rada_message_member_array,  // message members
  Rada__rosidl_typesupport_introspection_c__Rada_init_function,  // function to initialize message memory (memory has to be allocated)
  Rada__rosidl_typesupport_introspection_c__Rada_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Rada__rosidl_typesupport_introspection_c__Rada_message_type_support_handle = {
  0,
  &Rada__rosidl_typesupport_introspection_c__Rada_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_rada_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_rada_msg, msg, Rada)() {
  if (!Rada__rosidl_typesupport_introspection_c__Rada_message_type_support_handle.typesupport_identifier) {
    Rada__rosidl_typesupport_introspection_c__Rada_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Rada__rosidl_typesupport_introspection_c__Rada_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
