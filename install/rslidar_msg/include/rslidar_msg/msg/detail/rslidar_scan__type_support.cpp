// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rslidar_msg:msg/RslidarScan.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rslidar_msg/msg/detail/rslidar_scan__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rslidar_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RslidarScan_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rslidar_msg::msg::RslidarScan(_init);
}

void RslidarScan_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rslidar_msg::msg::RslidarScan *>(message_memory);
  typed_message->~RslidarScan();
}

size_t size_function__RslidarScan__packets(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rslidar_msg::msg::RslidarPacket> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RslidarScan__packets(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rslidar_msg::msg::RslidarPacket> *>(untyped_member);
  return &member[index];
}

void * get_function__RslidarScan__packets(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rslidar_msg::msg::RslidarPacket> *>(untyped_member);
  return &member[index];
}

void resize_function__RslidarScan__packets(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rslidar_msg::msg::RslidarPacket> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RslidarScan_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rslidar_msg::msg::RslidarScan, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "packets",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rslidar_msg::msg::RslidarPacket>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rslidar_msg::msg::RslidarScan, packets),  // bytes offset in struct
    nullptr,  // default value
    size_function__RslidarScan__packets,  // size() function pointer
    get_const_function__RslidarScan__packets,  // get_const(index) function pointer
    get_function__RslidarScan__packets,  // get(index) function pointer
    resize_function__RslidarScan__packets  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RslidarScan_message_members = {
  "rslidar_msg::msg",  // message namespace
  "RslidarScan",  // message name
  2,  // number of fields
  sizeof(rslidar_msg::msg::RslidarScan),
  RslidarScan_message_member_array,  // message members
  RslidarScan_init_function,  // function to initialize message memory (memory has to be allocated)
  RslidarScan_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RslidarScan_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RslidarScan_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rslidar_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rslidar_msg::msg::RslidarScan>()
{
  return &::rslidar_msg::msg::rosidl_typesupport_introspection_cpp::RslidarScan_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rslidar_msg, msg, RslidarScan)() {
  return &::rslidar_msg::msg::rosidl_typesupport_introspection_cpp::RslidarScan_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
