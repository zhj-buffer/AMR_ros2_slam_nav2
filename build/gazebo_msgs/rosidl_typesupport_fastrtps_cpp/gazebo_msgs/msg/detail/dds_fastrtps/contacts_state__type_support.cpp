// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from gazebo_msgs:msg/ContactsState.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/msg/detail/contacts_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "gazebo_msgs/msg/detail/contacts_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace gazebo_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const gazebo_msgs::msg::ContactState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  gazebo_msgs::msg::ContactState &);
size_t get_serialized_size(
  const gazebo_msgs::msg::ContactState &,
  size_t current_alignment);
size_t
max_serialized_size_ContactState(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace gazebo_msgs


namespace gazebo_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gazebo_msgs
cdr_serialize(
  const gazebo_msgs::msg::ContactsState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: states
  {
    size_t size = ros_message.states.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      gazebo_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.states[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gazebo_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  gazebo_msgs::msg::ContactsState & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: states
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.states.resize(size);
    for (size_t i = 0; i < size; i++) {
      gazebo_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.states[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gazebo_msgs
get_serialized_size(
  const gazebo_msgs::msg::ContactsState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: states
  {
    size_t array_size = ros_message.states.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        gazebo_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.states[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gazebo_msgs
max_serialized_size_ContactsState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: states
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        gazebo_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ContactState(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ContactsState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const gazebo_msgs::msg::ContactsState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ContactsState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<gazebo_msgs::msg::ContactsState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ContactsState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const gazebo_msgs::msg::ContactsState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ContactsState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ContactsState(full_bounded, 0);
}

static message_type_support_callbacks_t _ContactsState__callbacks = {
  "gazebo_msgs::msg",
  "ContactsState",
  _ContactsState__cdr_serialize,
  _ContactsState__cdr_deserialize,
  _ContactsState__get_serialized_size,
  _ContactsState__max_serialized_size
};

static rosidl_message_type_support_t _ContactsState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ContactsState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace gazebo_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<gazebo_msgs::msg::ContactsState>()
{
  return &gazebo_msgs::msg::typesupport_fastrtps_cpp::_ContactsState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gazebo_msgs, msg, ContactsState)() {
  return &gazebo_msgs::msg::typesupport_fastrtps_cpp::_ContactsState__handle;
}

#ifdef __cplusplus
}
#endif
