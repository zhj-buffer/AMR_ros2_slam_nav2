// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2_drive_package_msg:msg/FreeCtrlCmd.idl
// generated code does not contain a copyright notice
#include "ros2_drive_package_msg/msg/detail/free_ctrl_cmd__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2_drive_package_msg/msg/detail/free_ctrl_cmd__struct.hpp"

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

namespace ros2_drive_package_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_drive_package_msg
cdr_serialize(
  const ros2_drive_package_msg::msg::FreeCtrlCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ctrl_cmd_gear
  cdr << ros_message.ctrl_cmd_gear;
  // Member: free_ctrl_cmd_velocity_l
  cdr << ros_message.free_ctrl_cmd_velocity_l;
  // Member: free_ctrl_cmd_velocity_r
  cdr << ros_message.free_ctrl_cmd_velocity_r;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_drive_package_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_drive_package_msg::msg::FreeCtrlCmd & ros_message)
{
  // Member: ctrl_cmd_gear
  cdr >> ros_message.ctrl_cmd_gear;

  // Member: free_ctrl_cmd_velocity_l
  cdr >> ros_message.free_ctrl_cmd_velocity_l;

  // Member: free_ctrl_cmd_velocity_r
  cdr >> ros_message.free_ctrl_cmd_velocity_r;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_drive_package_msg
get_serialized_size(
  const ros2_drive_package_msg::msg::FreeCtrlCmd & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: ctrl_cmd_gear
  {
    size_t item_size = sizeof(ros_message.ctrl_cmd_gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: free_ctrl_cmd_velocity_l
  {
    size_t item_size = sizeof(ros_message.free_ctrl_cmd_velocity_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: free_ctrl_cmd_velocity_r
  {
    size_t item_size = sizeof(ros_message.free_ctrl_cmd_velocity_r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_drive_package_msg
max_serialized_size_FreeCtrlCmd(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: ctrl_cmd_gear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: free_ctrl_cmd_velocity_l
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: free_ctrl_cmd_velocity_r
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _FreeCtrlCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2_drive_package_msg::msg::FreeCtrlCmd *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FreeCtrlCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2_drive_package_msg::msg::FreeCtrlCmd *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FreeCtrlCmd__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2_drive_package_msg::msg::FreeCtrlCmd *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FreeCtrlCmd__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_FreeCtrlCmd(full_bounded, 0);
}

static message_type_support_callbacks_t _FreeCtrlCmd__callbacks = {
  "ros2_drive_package_msg::msg",
  "FreeCtrlCmd",
  _FreeCtrlCmd__cdr_serialize,
  _FreeCtrlCmd__cdr_deserialize,
  _FreeCtrlCmd__get_serialized_size,
  _FreeCtrlCmd__max_serialized_size
};

static rosidl_message_type_support_t _FreeCtrlCmd__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FreeCtrlCmd__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ros2_drive_package_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros2_drive_package_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_drive_package_msg::msg::FreeCtrlCmd>()
{
  return &ros2_drive_package_msg::msg::typesupport_fastrtps_cpp::_FreeCtrlCmd__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_drive_package_msg, msg, FreeCtrlCmd)() {
  return &ros2_drive_package_msg::msg::typesupport_fastrtps_cpp::_FreeCtrlCmd__handle;
}

#ifdef __cplusplus
}
#endif
