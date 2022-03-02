// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartographer_ros_msgs:msg/StatusResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartographer_ros_msgs/msg/detail/status_response__rosidl_typesupport_introspection_c.h"
#include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartographer_ros_msgs/msg/detail/status_response__functions.h"
#include "cartographer_ros_msgs/msg/detail/status_response__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void StatusResponse__rosidl_typesupport_introspection_c__StatusResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartographer_ros_msgs__msg__StatusResponse__init(message_memory);
}

void StatusResponse__rosidl_typesupport_introspection_c__StatusResponse_fini_function(void * message_memory)
{
  cartographer_ros_msgs__msg__StatusResponse__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StatusResponse__rosidl_typesupport_introspection_c__StatusResponse_message_member_array[2] = {
  {
    "code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__StatusResponse, code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__StatusResponse, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StatusResponse__rosidl_typesupport_introspection_c__StatusResponse_message_members = {
  "cartographer_ros_msgs__msg",  // message namespace
  "StatusResponse",  // message name
  2,  // number of fields
  sizeof(cartographer_ros_msgs__msg__StatusResponse),
  StatusResponse__rosidl_typesupport_introspection_c__StatusResponse_message_member_array,  // message members
  StatusResponse__rosidl_typesupport_introspection_c__StatusResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  StatusResponse__rosidl_typesupport_introspection_c__StatusResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StatusResponse__rosidl_typesupport_introspection_c__StatusResponse_message_type_support_handle = {
  0,
  &StatusResponse__rosidl_typesupport_introspection_c__StatusResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, msg, StatusResponse)() {
  if (!StatusResponse__rosidl_typesupport_introspection_c__StatusResponse_message_type_support_handle.typesupport_identifier) {
    StatusResponse__rosidl_typesupport_introspection_c__StatusResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StatusResponse__rosidl_typesupport_introspection_c__StatusResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
