// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_drive_package_msg:msg/FreeCtrlCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_drive_package_msg/msg/detail/free_ctrl_cmd__rosidl_typesupport_introspection_c.h"
#include "ros2_drive_package_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_drive_package_msg/msg/detail/free_ctrl_cmd__functions.h"
#include "ros2_drive_package_msg/msg/detail/free_ctrl_cmd__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void FreeCtrlCmd__rosidl_typesupport_introspection_c__FreeCtrlCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_drive_package_msg__msg__FreeCtrlCmd__init(message_memory);
}

void FreeCtrlCmd__rosidl_typesupport_introspection_c__FreeCtrlCmd_fini_function(void * message_memory)
{
  ros2_drive_package_msg__msg__FreeCtrlCmd__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FreeCtrlCmd__rosidl_typesupport_introspection_c__FreeCtrlCmd_message_member_array[3] = {
  {
    "ctrl_cmd_gear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_drive_package_msg__msg__FreeCtrlCmd, ctrl_cmd_gear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "free_ctrl_cmd_velocity_l",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_drive_package_msg__msg__FreeCtrlCmd, free_ctrl_cmd_velocity_l),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "free_ctrl_cmd_velocity_r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_drive_package_msg__msg__FreeCtrlCmd, free_ctrl_cmd_velocity_r),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FreeCtrlCmd__rosidl_typesupport_introspection_c__FreeCtrlCmd_message_members = {
  "ros2_drive_package_msg__msg",  // message namespace
  "FreeCtrlCmd",  // message name
  3,  // number of fields
  sizeof(ros2_drive_package_msg__msg__FreeCtrlCmd),
  FreeCtrlCmd__rosidl_typesupport_introspection_c__FreeCtrlCmd_message_member_array,  // message members
  FreeCtrlCmd__rosidl_typesupport_introspection_c__FreeCtrlCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  FreeCtrlCmd__rosidl_typesupport_introspection_c__FreeCtrlCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FreeCtrlCmd__rosidl_typesupport_introspection_c__FreeCtrlCmd_message_type_support_handle = {
  0,
  &FreeCtrlCmd__rosidl_typesupport_introspection_c__FreeCtrlCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_drive_package_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_drive_package_msg, msg, FreeCtrlCmd)() {
  if (!FreeCtrlCmd__rosidl_typesupport_introspection_c__FreeCtrlCmd_message_type_support_handle.typesupport_identifier) {
    FreeCtrlCmd__rosidl_typesupport_introspection_c__FreeCtrlCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FreeCtrlCmd__rosidl_typesupport_introspection_c__FreeCtrlCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
