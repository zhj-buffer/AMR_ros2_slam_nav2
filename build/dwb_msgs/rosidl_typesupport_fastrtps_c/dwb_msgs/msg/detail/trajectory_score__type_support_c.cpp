// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dwb_msgs:msg/TrajectoryScore.idl
// generated code does not contain a copyright notice
#include "dwb_msgs/msg/detail/trajectory_score__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dwb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dwb_msgs/msg/detail/trajectory_score__struct.h"
#include "dwb_msgs/msg/detail/trajectory_score__functions.h"
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

#include "dwb_msgs/msg/detail/critic_score__functions.h"  // scores
#include "dwb_msgs/msg/detail/trajectory2_d__functions.h"  // traj

// forward declare type support functions
size_t get_serialized_size_dwb_msgs__msg__CriticScore(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dwb_msgs__msg__CriticScore(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, msg, CriticScore)();
size_t get_serialized_size_dwb_msgs__msg__Trajectory2D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dwb_msgs__msg__Trajectory2D(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, msg, Trajectory2D)();


using _TrajectoryScore__ros_msg_type = dwb_msgs__msg__TrajectoryScore;

static bool _TrajectoryScore__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrajectoryScore__ros_msg_type * ros_message = static_cast<const _TrajectoryScore__ros_msg_type *>(untyped_ros_message);
  // Field name: traj
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dwb_msgs, msg, Trajectory2D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->traj, cdr))
    {
      return false;
    }
  }

  // Field name: scores
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dwb_msgs, msg, CriticScore
      )()->data);
    size_t size = ros_message->scores.size;
    auto array_ptr = ros_message->scores.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: total
  {
    cdr << ros_message->total;
  }

  return true;
}

static bool _TrajectoryScore__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrajectoryScore__ros_msg_type * ros_message = static_cast<_TrajectoryScore__ros_msg_type *>(untyped_ros_message);
  // Field name: traj
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dwb_msgs, msg, Trajectory2D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->traj))
    {
      return false;
    }
  }

  // Field name: scores
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dwb_msgs, msg, CriticScore
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->scores.data) {
      dwb_msgs__msg__CriticScore__Sequence__fini(&ros_message->scores);
    }
    if (!dwb_msgs__msg__CriticScore__Sequence__init(&ros_message->scores, size)) {
      return "failed to create array for field 'scores'";
    }
    auto array_ptr = ros_message->scores.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: total
  {
    cdr >> ros_message->total;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t get_serialized_size_dwb_msgs__msg__TrajectoryScore(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrajectoryScore__ros_msg_type * ros_message = static_cast<const _TrajectoryScore__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name traj

  current_alignment += get_serialized_size_dwb_msgs__msg__Trajectory2D(
    &(ros_message->traj), current_alignment);
  // field.name scores
  {
    size_t array_size = ros_message->scores.size;
    auto array_ptr = ros_message->scores.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_dwb_msgs__msg__CriticScore(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name total
  {
    size_t item_size = sizeof(ros_message->total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TrajectoryScore__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dwb_msgs__msg__TrajectoryScore(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t max_serialized_size_dwb_msgs__msg__TrajectoryScore(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: traj
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_dwb_msgs__msg__Trajectory2D(
        full_bounded, current_alignment);
    }
  }
  // member: scores
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_dwb_msgs__msg__CriticScore(
        full_bounded, current_alignment);
    }
  }
  // member: total
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TrajectoryScore__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_dwb_msgs__msg__TrajectoryScore(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrajectoryScore = {
  "dwb_msgs::msg",
  "TrajectoryScore",
  _TrajectoryScore__cdr_serialize,
  _TrajectoryScore__cdr_deserialize,
  _TrajectoryScore__get_serialized_size,
  _TrajectoryScore__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryScore__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrajectoryScore,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, msg, TrajectoryScore)() {
  return &_TrajectoryScore__type_support;
}

#if defined(__cplusplus)
}
#endif
