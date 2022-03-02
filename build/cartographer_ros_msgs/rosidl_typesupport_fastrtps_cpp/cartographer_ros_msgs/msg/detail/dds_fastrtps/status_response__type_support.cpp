// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cartographer_ros_msgs:msg/StatusResponse.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/msg/detail/status_response__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cartographer_ros_msgs/msg/detail/status_response__struct.hpp"

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

namespace cartographer_ros_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartographer_ros_msgs
cdr_serialize(
  const cartographer_ros_msgs::msg::StatusResponse & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: code
  cdr << ros_message.code;
  // Member: message
  cdr << ros_message.message;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartographer_ros_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cartographer_ros_msgs::msg::StatusResponse & ros_message)
{
  // Member: code
  cdr >> ros_message.code;

  // Member: message
  cdr >> ros_message.message;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartographer_ros_msgs
get_serialized_size(
  const cartographer_ros_msgs::msg::StatusResponse & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: code
  {
    size_t item_size = sizeof(ros_message.code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartographer_ros_msgs
max_serialized_size_StatusResponse(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _StatusResponse__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cartographer_ros_msgs::msg::StatusResponse *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StatusResponse__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cartographer_ros_msgs::msg::StatusResponse *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StatusResponse__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cartographer_ros_msgs::msg::StatusResponse *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StatusResponse__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_StatusResponse(full_bounded, 0);
}

static message_type_support_callbacks_t _StatusResponse__callbacks = {
  "cartographer_ros_msgs::msg",
  "StatusResponse",
  _StatusResponse__cdr_serialize,
  _StatusResponse__cdr_deserialize,
  _StatusResponse__get_serialized_size,
  _StatusResponse__max_serialized_size
};

static rosidl_message_type_support_t _StatusResponse__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StatusResponse__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace cartographer_ros_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cartographer_ros_msgs::msg::StatusResponse>()
{
  return &cartographer_ros_msgs::msg::typesupport_fastrtps_cpp::_StatusResponse__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartographer_ros_msgs, msg, StatusResponse)() {
  return &cartographer_ros_msgs::msg::typesupport_fastrtps_cpp::_StatusResponse__handle;
}

#ifdef __cplusplus
}
#endif
