// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2_drive_package_msg:msg/IoCmd.idl
// generated code does not contain a copyright notice
#include "ros2_drive_package_msg/msg/detail/io_cmd__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2_drive_package_msg/msg/detail/io_cmd__struct.hpp"

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
  const ros2_drive_package_msg::msg::IoCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: io_cmd_lamp_ctrl
  cdr << (ros_message.io_cmd_lamp_ctrl ? true : false);
  // Member: io_cmd_unlock
  cdr << (ros_message.io_cmd_unlock ? true : false);
  // Member: io_cmd_lower_beam_headlamp
  cdr << (ros_message.io_cmd_lower_beam_headlamp ? true : false);
  // Member: io_cmd_upper_beam_headlamp
  cdr << (ros_message.io_cmd_upper_beam_headlamp ? true : false);
  // Member: io_cmd_turn_lamp
  cdr << ros_message.io_cmd_turn_lamp;
  // Member: io_cmd_braking_lamp
  cdr << (ros_message.io_cmd_braking_lamp ? true : false);
  // Member: io_cmd_clearance_lamp
  cdr << (ros_message.io_cmd_clearance_lamp ? true : false);
  // Member: io_cmd_fog_lamp
  cdr << (ros_message.io_cmd_fog_lamp ? true : false);
  // Member: io_cmd_speaker
  cdr << (ros_message.io_cmd_speaker ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_drive_package_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_drive_package_msg::msg::IoCmd & ros_message)
{
  // Member: io_cmd_lamp_ctrl
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_cmd_lamp_ctrl = tmp ? true : false;
  }

  // Member: io_cmd_unlock
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_cmd_unlock = tmp ? true : false;
  }

  // Member: io_cmd_lower_beam_headlamp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_cmd_lower_beam_headlamp = tmp ? true : false;
  }

  // Member: io_cmd_upper_beam_headlamp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_cmd_upper_beam_headlamp = tmp ? true : false;
  }

  // Member: io_cmd_turn_lamp
  cdr >> ros_message.io_cmd_turn_lamp;

  // Member: io_cmd_braking_lamp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_cmd_braking_lamp = tmp ? true : false;
  }

  // Member: io_cmd_clearance_lamp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_cmd_clearance_lamp = tmp ? true : false;
  }

  // Member: io_cmd_fog_lamp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_cmd_fog_lamp = tmp ? true : false;
  }

  // Member: io_cmd_speaker
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.io_cmd_speaker = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_drive_package_msg
get_serialized_size(
  const ros2_drive_package_msg::msg::IoCmd & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: io_cmd_lamp_ctrl
  {
    size_t item_size = sizeof(ros_message.io_cmd_lamp_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_cmd_unlock
  {
    size_t item_size = sizeof(ros_message.io_cmd_unlock);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_cmd_lower_beam_headlamp
  {
    size_t item_size = sizeof(ros_message.io_cmd_lower_beam_headlamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_cmd_upper_beam_headlamp
  {
    size_t item_size = sizeof(ros_message.io_cmd_upper_beam_headlamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_cmd_turn_lamp
  {
    size_t item_size = sizeof(ros_message.io_cmd_turn_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_cmd_braking_lamp
  {
    size_t item_size = sizeof(ros_message.io_cmd_braking_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_cmd_clearance_lamp
  {
    size_t item_size = sizeof(ros_message.io_cmd_clearance_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_cmd_fog_lamp
  {
    size_t item_size = sizeof(ros_message.io_cmd_fog_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: io_cmd_speaker
  {
    size_t item_size = sizeof(ros_message.io_cmd_speaker);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_drive_package_msg
max_serialized_size_IoCmd(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: io_cmd_lamp_ctrl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_cmd_unlock
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_cmd_lower_beam_headlamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_cmd_upper_beam_headlamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_cmd_turn_lamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_cmd_braking_lamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_cmd_clearance_lamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_cmd_fog_lamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: io_cmd_speaker
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _IoCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2_drive_package_msg::msg::IoCmd *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IoCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2_drive_package_msg::msg::IoCmd *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IoCmd__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2_drive_package_msg::msg::IoCmd *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IoCmd__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_IoCmd(full_bounded, 0);
}

static message_type_support_callbacks_t _IoCmd__callbacks = {
  "ros2_drive_package_msg::msg",
  "IoCmd",
  _IoCmd__cdr_serialize,
  _IoCmd__cdr_deserialize,
  _IoCmd__get_serialized_size,
  _IoCmd__max_serialized_size
};

static rosidl_message_type_support_t _IoCmd__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IoCmd__callbacks,
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
get_message_type_support_handle<ros2_drive_package_msg::msg::IoCmd>()
{
  return &ros2_drive_package_msg::msg::typesupport_fastrtps_cpp::_IoCmd__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_drive_package_msg, msg, IoCmd)() {
  return &ros2_drive_package_msg::msg::typesupport_fastrtps_cpp::_IoCmd__handle;
}

#ifdef __cplusplus
}
#endif
