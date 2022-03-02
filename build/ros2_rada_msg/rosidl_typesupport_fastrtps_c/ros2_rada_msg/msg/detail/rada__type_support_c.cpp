// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2_rada_msg:msg/Rada.idl
// generated code does not contain a copyright notice
#include "ros2_rada_msg/msg/detail/rada__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2_rada_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_rada_msg/msg/detail/rada__struct.h"
#include "ros2_rada_msg/msg/detail/rada__functions.h"
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


using _Rada__ros_msg_type = ros2_rada_msg__msg__Rada;

static bool _Rada__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Rada__ros_msg_type * ros_message = static_cast<const _Rada__ros_msg_type *>(untyped_ros_message);
  // Field name: r1
  {
    cdr << ros_message->r1;
  }

  // Field name: r2
  {
    cdr << ros_message->r2;
  }

  // Field name: r3
  {
    cdr << ros_message->r3;
  }

  // Field name: r4
  {
    cdr << ros_message->r4;
  }

  // Field name: crc
  {
    cdr << ros_message->crc;
  }

  return true;
}

static bool _Rada__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Rada__ros_msg_type * ros_message = static_cast<_Rada__ros_msg_type *>(untyped_ros_message);
  // Field name: r1
  {
    cdr >> ros_message->r1;
  }

  // Field name: r2
  {
    cdr >> ros_message->r2;
  }

  // Field name: r3
  {
    cdr >> ros_message->r3;
  }

  // Field name: r4
  {
    cdr >> ros_message->r4;
  }

  // Field name: crc
  {
    cdr >> ros_message->crc;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_rada_msg
size_t get_serialized_size_ros2_rada_msg__msg__Rada(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Rada__ros_msg_type * ros_message = static_cast<const _Rada__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name r1
  {
    size_t item_size = sizeof(ros_message->r1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name r2
  {
    size_t item_size = sizeof(ros_message->r2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name r3
  {
    size_t item_size = sizeof(ros_message->r3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name r4
  {
    size_t item_size = sizeof(ros_message->r4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name crc
  {
    size_t item_size = sizeof(ros_message->crc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Rada__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_rada_msg__msg__Rada(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_rada_msg
size_t max_serialized_size_ros2_rada_msg__msg__Rada(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: r1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: r2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: r3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: r4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: crc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Rada__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ros2_rada_msg__msg__Rada(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Rada = {
  "ros2_rada_msg::msg",
  "Rada",
  _Rada__cdr_serialize,
  _Rada__cdr_deserialize,
  _Rada__get_serialized_size,
  _Rada__max_serialized_size
};

static rosidl_message_type_support_t _Rada__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Rada,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_rada_msg, msg, Rada)() {
  return &_Rada__type_support;
}

#if defined(__cplusplus)
}
#endif
