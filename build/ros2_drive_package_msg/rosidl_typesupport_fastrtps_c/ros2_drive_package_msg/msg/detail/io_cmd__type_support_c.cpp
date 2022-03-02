// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2_drive_package_msg:msg/IoCmd.idl
// generated code does not contain a copyright notice
#include "ros2_drive_package_msg/msg/detail/io_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2_drive_package_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_drive_package_msg/msg/detail/io_cmd__struct.h"
#include "ros2_drive_package_msg/msg/detail/io_cmd__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _IoCmd__ros_msg_type = ros2_drive_package_msg__msg__IoCmd;

static bool _IoCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _IoCmd__ros_msg_type * ros_message = static_cast<const _IoCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: io_cmd_lamp_ctrl
  {
    cdr << (ros_message->io_cmd_lamp_ctrl ? true : false);
  }

  // Field name: io_cmd_unlock
  {
    cdr << (ros_message->io_cmd_unlock ? true : false);
  }

  // Field name: io_cmd_lower_beam_headlamp
  {
    cdr << (ros_message->io_cmd_lower_beam_headlamp ? true : false);
  }

  // Field name: io_cmd_upper_beam_headlamp
  {
    cdr << (ros_message->io_cmd_upper_beam_headlamp ? true : false);
  }

  // Field name: io_cmd_turn_lamp
  {
    cdr << ros_message->io_cmd_turn_lamp;
  }

  // Field name: io_cmd_braking_lamp
  {
    cdr << (ros_message->io_cmd_braking_lamp ? true : false);
  }

  // Field name: io_cmd_clearance_lamp
  {
    cdr << (ros_message->io_cmd_clearance_lamp ? true : false);
  }

  // Field name: io_cmd_fog_lamp
  {
    cdr << (ros_message->io_cmd_fog_lamp ? true : false);
  }

  // Field name: io_cmd_speaker
  {
    cdr << (ros_message->io_cmd_speaker ? true : false);
  }

  return true;
}

static bool _IoCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _IoCmd__ros_msg_type * ros_message = static_cast<_IoCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: io_cmd_lamp_ctrl
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->io_cmd_lamp_ctrl = tmp ? true : false;
  }

  // Field name: io_cmd_unlock
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->io_cmd_unlock = tmp ? true : false;
  }

  // Field name: io_cmd_lower_beam_headlamp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->io_cmd_lower_beam_headlamp = tmp ? true : false;
  }

  // Field name: io_cmd_upper_beam_headlamp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->io_cmd_upper_beam_headlamp = tmp ? true : false;
  }

  // Field name: io_cmd_turn_lamp
  {
    cdr >> ros_message->io_cmd_turn_lamp;
  }

  // Field name: io_cmd_braking_lamp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->io_cmd_braking_lamp = tmp ? true : false;
  }

  // Field name: io_cmd_clearance_lamp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->io_cmd_clearance_lamp = tmp ? true : false;
  }

  // Field name: io_cmd_fog_lamp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->io_cmd_fog_lamp = tmp ? true : false;
  }

  // Field name: io_cmd_speaker
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->io_cmd_speaker = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_drive_package_msg
size_t get_serialized_size_ros2_drive_package_msg__msg__IoCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IoCmd__ros_msg_type * ros_message = static_cast<const _IoCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name io_cmd_lamp_ctrl
  {
    size_t item_size = sizeof(ros_message->io_cmd_lamp_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name io_cmd_unlock
  {
    size_t item_size = sizeof(ros_message->io_cmd_unlock);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name io_cmd_lower_beam_headlamp
  {
    size_t item_size = sizeof(ros_message->io_cmd_lower_beam_headlamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name io_cmd_upper_beam_headlamp
  {
    size_t item_size = sizeof(ros_message->io_cmd_upper_beam_headlamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name io_cmd_turn_lamp
  {
    size_t item_size = sizeof(ros_message->io_cmd_turn_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name io_cmd_braking_lamp
  {
    size_t item_size = sizeof(ros_message->io_cmd_braking_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name io_cmd_clearance_lamp
  {
    size_t item_size = sizeof(ros_message->io_cmd_clearance_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name io_cmd_fog_lamp
  {
    size_t item_size = sizeof(ros_message->io_cmd_fog_lamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name io_cmd_speaker
  {
    size_t item_size = sizeof(ros_message->io_cmd_speaker);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _IoCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_drive_package_msg__msg__IoCmd(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_drive_package_msg
size_t max_serialized_size_ros2_drive_package_msg__msg__IoCmd(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: io_cmd_lamp_ctrl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: io_cmd_unlock
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: io_cmd_lower_beam_headlamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: io_cmd_upper_beam_headlamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: io_cmd_turn_lamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: io_cmd_braking_lamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: io_cmd_clearance_lamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: io_cmd_fog_lamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: io_cmd_speaker
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _IoCmd__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ros2_drive_package_msg__msg__IoCmd(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_IoCmd = {
  "ros2_drive_package_msg::msg",
  "IoCmd",
  _IoCmd__cdr_serialize,
  _IoCmd__cdr_deserialize,
  _IoCmd__get_serialized_size,
  _IoCmd__max_serialized_size
};

static rosidl_message_type_support_t _IoCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IoCmd,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_drive_package_msg, msg, IoCmd)() {
  return &_IoCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
