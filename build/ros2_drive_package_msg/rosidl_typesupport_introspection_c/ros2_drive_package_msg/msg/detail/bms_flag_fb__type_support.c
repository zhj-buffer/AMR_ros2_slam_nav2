// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_drive_package_msg:msg/BmsFlagFb.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_drive_package_msg/msg/detail/bms_flag_fb__rosidl_typesupport_introspection_c.h"
#include "ros2_drive_package_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_drive_package_msg/msg/detail/bms_flag_fb__functions.h"
#include "ros2_drive_package_msg/msg/detail/bms_flag_fb__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void BmsFlagFb__rosidl_typesupport_introspection_c__BmsFlagFb_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_drive_package_msg__msg__BmsFlagFb__init(message_memory);
}

void BmsFlagFb__rosidl_typesupport_introspection_c__BmsFlagFb_fini_function(void * message_memory)
{
  ros2_drive_package_msg__msg__BmsFlagFb__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BmsFlagFb__rosidl_typesupport_introspection_c__BmsFlagFb_message_member_array[17] = {
  {
    "bms_flag_fb_soc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_drive_package_msg__msg__BmsFlagFb, bms_flag_fb_soc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bms_flag_fb_single_ov",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_drive_package_msg__msg__BmsFlagFb, bms_flag_fb_single_ov),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bms_flag_fb_single_uv",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_drive_package_msg__msg__BmsFlagFb, bms_flag_fb_single_uv),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bms_flag_fb_ov",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_drive_package_msg__msg__BmsFlagFb, bms_flag_fb_ov),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bms_flag_fb_uv",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_drive_package_msg__msg__BmsFlagFb, bms_flag_fb_uv),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bms_flag_fb_charge_ot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_drive_package_msg__msg__BmsFlagFb, bms_flag_fb_charge_ot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bms_flag_fb_charge_ut",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_drive_package_msg__msg__BmsFlagFb, bms_flag_fb_charge_ut),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bms_flag_fb_discharge_ot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_drive_package_msg__msg__BmsFlagFb, bms_flag_fb_discharge_ot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bms_flag_fb_discharge_ut",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_drive_package_msg__msg__BmsFlagFb, bms_flag_fb_discharge_ut),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bms_flag_fb_charge_oc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_drive_package_msg__msg__BmsFlagFb, bms_flag_fb_charge_oc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bms_flag_fb_discharge_oc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_drive_package_msg__msg__BmsFlagFb, bms_flag_fb_discharge_oc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bms_flag_fb_short",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_drive_package_msg__msg__BmsFlagFb, bms_flag_fb_short),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bms_flag_fb_ic_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_drive_package_msg__msg__BmsFlagFb, bms_flag_fb_ic_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bms_flag_fb_lock_mos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_drive_package_msg__msg__BmsFlagFb, bms_flag_fb_lock_mos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bms_flag_fb_charge_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_drive_package_msg__msg__BmsFlagFb, bms_flag_fb_charge_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bms_flag_fb_hight_temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_drive_package_msg__msg__BmsFlagFb, bms_flag_fb_hight_temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bms_flag_fb_low_temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_drive_package_msg__msg__BmsFlagFb, bms_flag_fb_low_temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BmsFlagFb__rosidl_typesupport_introspection_c__BmsFlagFb_message_members = {
  "ros2_drive_package_msg__msg",  // message namespace
  "BmsFlagFb",  // message name
  17,  // number of fields
  sizeof(ros2_drive_package_msg__msg__BmsFlagFb),
  BmsFlagFb__rosidl_typesupport_introspection_c__BmsFlagFb_message_member_array,  // message members
  BmsFlagFb__rosidl_typesupport_introspection_c__BmsFlagFb_init_function,  // function to initialize message memory (memory has to be allocated)
  BmsFlagFb__rosidl_typesupport_introspection_c__BmsFlagFb_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BmsFlagFb__rosidl_typesupport_introspection_c__BmsFlagFb_message_type_support_handle = {
  0,
  &BmsFlagFb__rosidl_typesupport_introspection_c__BmsFlagFb_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_drive_package_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_drive_package_msg, msg, BmsFlagFb)() {
  if (!BmsFlagFb__rosidl_typesupport_introspection_c__BmsFlagFb_message_type_support_handle.typesupport_identifier) {
    BmsFlagFb__rosidl_typesupport_introspection_c__BmsFlagFb_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BmsFlagFb__rosidl_typesupport_introspection_c__BmsFlagFb_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
