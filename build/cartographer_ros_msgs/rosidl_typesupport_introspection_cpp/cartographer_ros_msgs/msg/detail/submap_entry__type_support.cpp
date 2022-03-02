// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cartographer_ros_msgs:msg/SubmapEntry.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cartographer_ros_msgs/msg/detail/submap_entry__struct.hpp"
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

void SubmapEntry_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cartographer_ros_msgs::msg::SubmapEntry(_init);
}

void SubmapEntry_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cartographer_ros_msgs::msg::SubmapEntry *>(message_memory);
  typed_message->~SubmapEntry();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SubmapEntry_message_member_array[4] = {
  {
    "trajectory_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs::msg::SubmapEntry, trajectory_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "submap_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs::msg::SubmapEntry, submap_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "submap_version",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs::msg::SubmapEntry, submap_version),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs::msg::SubmapEntry, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SubmapEntry_message_members = {
  "cartographer_ros_msgs::msg",  // message namespace
  "SubmapEntry",  // message name
  4,  // number of fields
  sizeof(cartographer_ros_msgs::msg::SubmapEntry),
  SubmapEntry_message_member_array,  // message members
  SubmapEntry_init_function,  // function to initialize message memory (memory has to be allocated)
  SubmapEntry_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SubmapEntry_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SubmapEntry_message_members,
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
get_message_type_support_handle<cartographer_ros_msgs::msg::SubmapEntry>()
{
  return &::cartographer_ros_msgs::msg::rosidl_typesupport_introspection_cpp::SubmapEntry_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartographer_ros_msgs, msg, SubmapEntry)() {
  return &::cartographer_ros_msgs::msg::rosidl_typesupport_introspection_cpp::SubmapEntry_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
