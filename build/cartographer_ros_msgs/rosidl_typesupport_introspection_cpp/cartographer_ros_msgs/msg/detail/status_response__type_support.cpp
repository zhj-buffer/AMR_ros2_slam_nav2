// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cartographer_ros_msgs:msg/StatusResponse.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cartographer_ros_msgs/msg/detail/status_response__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cartographer_ros_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void StatusResponse_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cartographer_ros_msgs::msg::StatusResponse(_init);
}

void StatusResponse_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cartographer_ros_msgs::msg::StatusResponse *>(message_memory);
  typed_message->~StatusResponse();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StatusResponse_message_member_array[2] = {
  {
    "code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs::msg::StatusResponse, code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs::msg::StatusResponse, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StatusResponse_message_members = {
  "cartographer_ros_msgs::msg",  // message namespace
  "StatusResponse",  // message name
  2,  // number of fields
  sizeof(cartographer_ros_msgs::msg::StatusResponse),
  StatusResponse_message_member_array,  // message members
  StatusResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  StatusResponse_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StatusResponse_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StatusResponse_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cartographer_ros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cartographer_ros_msgs::msg::StatusResponse>()
{
  return &::cartographer_ros_msgs::msg::rosidl_typesupport_introspection_cpp::StatusResponse_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartographer_ros_msgs, msg, StatusResponse)() {
  return &::cartographer_ros_msgs::msg::rosidl_typesupport_introspection_cpp::StatusResponse_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
