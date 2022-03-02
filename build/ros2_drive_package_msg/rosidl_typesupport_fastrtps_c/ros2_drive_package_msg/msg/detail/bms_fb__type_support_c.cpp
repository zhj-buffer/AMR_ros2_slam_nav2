// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2_drive_package_msg:msg/BmsFb.idl
// generated code does not contain a copyright notice
#include "ros2_drive_package_msg/msg/detail/bms_fb__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2_drive_package_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_drive_package_msg/msg/detail/bms_fb__struct.h"
#include "ros2_drive_package_msg/msg/detail/bms_fb__functions.h"
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


using _BmsFb__ros_msg_type = ros2_drive_package_msg__msg__BmsFb;

static bool _BmsFb__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BmsFb__ros_msg_type * ros_message = static_cast<const _BmsFb__ros_msg_type *>(untyped_ros_message);
  // Field name: bms_fb_voltage
  {
    cdr << ros_message->bms_fb_voltage;
  }

  // Field name: bms_fb_current
  {
    cdr << ros_message->bms_fb_current;
  }

  // Field name: bms_fb_remaining_capacity
  {
    cdr << ros_message->bms_fb_remaining_capacity;
  }

  return true;
}

static bool _BmsFb__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BmsFb__ros_msg_type * ros_message = static_cast<_BmsFb__ros_msg_type *>(untyped_ros_message);
  // Field name: bms_fb_voltage
  {
    cdr >> ros_message->bms_fb_voltage;
  }

  // Field name: bms_fb_current
  {
    cdr >> ros_message->bms_fb_current;
  }

  // Field name: bms_fb_remaining_capacity
  {
    cdr >> ros_message->bms_fb_remaining_capacity;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_drive_package_msg
size_t get_serialized_size_ros2_drive_package_msg__msg__BmsFb(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BmsFb__ros_msg_type * ros_message = static_cast<const _BmsFb__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bms_fb_voltage
  {
    size_t item_size = sizeof(ros_message->bms_fb_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bms_fb_current
  {
    size_t item_size = sizeof(ros_message->bms_fb_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bms_fb_remaining_capacity
  {
    size_t item_size = sizeof(ros_message->bms_fb_remaining_capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BmsFb__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_drive_package_msg__msg__BmsFb(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_drive_package_msg
size_t max_serialized_size_ros2_drive_package_msg__msg__BmsFb(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: bms_fb_voltage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bms_fb_current
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bms_fb_remaining_capacity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _BmsFb__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ros2_drive_package_msg__msg__BmsFb(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BmsFb = {
  "ros2_drive_package_msg::msg",
  "BmsFb",
  _BmsFb__cdr_serialize,
  _BmsFb__cdr_deserialize,
  _BmsFb__get_serialized_size,
  _BmsFb__max_serialized_size
};

static rosidl_message_type_support_t _BmsFb__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BmsFb,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_drive_package_msg, msg, BmsFb)() {
  return &_BmsFb__type_support;
}

#if defined(__cplusplus)
}
#endif
