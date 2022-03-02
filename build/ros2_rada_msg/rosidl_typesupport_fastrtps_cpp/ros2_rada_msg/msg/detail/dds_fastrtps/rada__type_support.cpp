// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2_rada_msg:msg/Rada.idl
// generated code does not contain a copyright notice
#include "ros2_rada_msg/msg/detail/rada__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2_rada_msg/msg/detail/rada__struct.hpp"

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

namespace ros2_rada_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_rada_msg
cdr_serialize(
  const ros2_rada_msg::msg::Rada & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: r1
  cdr << ros_message.r1;
  // Member: r2
  cdr << ros_message.r2;
  // Member: r3
  cdr << ros_message.r3;
  // Member: r4
  cdr << ros_message.r4;
  // Member: crc
  cdr << ros_message.crc;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_rada_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_rada_msg::msg::Rada & ros_message)
{
  // Member: r1
  cdr >> ros_message.r1;

  // Member: r2
  cdr >> ros_message.r2;

  // Member: r3
  cdr >> ros_message.r3;

  // Member: r4
  cdr >> ros_message.r4;

  // Member: crc
  cdr >> ros_message.crc;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_rada_msg
get_serialized_size(
  const ros2_rada_msg::msg::Rada & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: r1
  {
    size_t item_size = sizeof(ros_message.r1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: r2
  {
    size_t item_size = sizeof(ros_message.r2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: r3
  {
    size_t item_size = sizeof(ros_message.r3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: r4
  {
    size_t item_size = sizeof(ros_message.r4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: crc
  {
    size_t item_size = sizeof(ros_message.crc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_rada_msg
max_serialized_size_Rada(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: r1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: r2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: r3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: r4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: crc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Rada__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2_rada_msg::msg::Rada *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Rada__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2_rada_msg::msg::Rada *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Rada__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2_rada_msg::msg::Rada *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Rada__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Rada(full_bounded, 0);
}

static message_type_support_callbacks_t _Rada__callbacks = {
  "ros2_rada_msg::msg",
  "Rada",
  _Rada__cdr_serialize,
  _Rada__cdr_deserialize,
  _Rada__get_serialized_size,
  _Rada__max_serialized_size
};

static rosidl_message_type_support_t _Rada__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Rada__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ros2_rada_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros2_rada_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_rada_msg::msg::Rada>()
{
  return &ros2_rada_msg::msg::typesupport_fastrtps_cpp::_Rada__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_rada_msg, msg, Rada)() {
  return &ros2_rada_msg::msg::typesupport_fastrtps_cpp::_Rada__handle;
}

#ifdef __cplusplus
}
#endif
