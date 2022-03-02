// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from dwb_msgs:msg/TrajectoryScore.idl
// generated code does not contain a copyright notice
#include "dwb_msgs/msg/detail/trajectory_score__rosidl_typesupport_fastrtps_cpp.hpp"
#include "dwb_msgs/msg/detail/trajectory_score__struct.hpp"

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
namespace dwb_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const dwb_msgs::msg::Trajectory2D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  dwb_msgs::msg::Trajectory2D &);
size_t get_serialized_size(
  const dwb_msgs::msg::Trajectory2D &,
  size_t current_alignment);
size_t
max_serialized_size_Trajectory2D(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace dwb_msgs

namespace dwb_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const dwb_msgs::msg::CriticScore &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  dwb_msgs::msg::CriticScore &);
size_t get_serialized_size(
  const dwb_msgs::msg::CriticScore &,
  size_t current_alignment);
size_t
max_serialized_size_CriticScore(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace dwb_msgs


namespace dwb_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dwb_msgs
cdr_serialize(
  const dwb_msgs::msg::TrajectoryScore & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: traj
  dwb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.traj,
    cdr);
  // Member: scores
  {
    size_t size = ros_message.scores.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      dwb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.scores[i],
        cdr);
    }
  }
  // Member: total
  cdr << ros_message.total;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dwb_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dwb_msgs::msg::TrajectoryScore & ros_message)
{
  // Member: traj
  dwb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.traj);

  // Member: scores
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.scores.resize(size);
    for (size_t i = 0; i < size; i++) {
      dwb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.scores[i]);
    }
  }

  // Member: total
  cdr >> ros_message.total;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dwb_msgs
get_serialized_size(
  const dwb_msgs::msg::TrajectoryScore & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: traj

  current_alignment +=
    dwb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.traj, current_alignment);
  // Member: scores
  {
    size_t array_size = ros_message.scores.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        dwb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.scores[index], current_alignment);
    }
  }
  // Member: total
  {
    size_t item_size = sizeof(ros_message.total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dwb_msgs
max_serialized_size_TrajectoryScore(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: traj
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        dwb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Trajectory2D(
        full_bounded, current_alignment);
    }
  }

  // Member: scores
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        dwb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CriticScore(
        full_bounded, current_alignment);
    }
  }

  // Member: total
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _TrajectoryScore__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dwb_msgs::msg::TrajectoryScore *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrajectoryScore__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dwb_msgs::msg::TrajectoryScore *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrajectoryScore__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dwb_msgs::msg::TrajectoryScore *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrajectoryScore__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TrajectoryScore(full_bounded, 0);
}

static message_type_support_callbacks_t _TrajectoryScore__callbacks = {
  "dwb_msgs::msg",
  "TrajectoryScore",
  _TrajectoryScore__cdr_serialize,
  _TrajectoryScore__cdr_deserialize,
  _TrajectoryScore__get_serialized_size,
  _TrajectoryScore__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryScore__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrajectoryScore__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace dwb_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dwb_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<dwb_msgs::msg::TrajectoryScore>()
{
  return &dwb_msgs::msg::typesupport_fastrtps_cpp::_TrajectoryScore__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dwb_msgs, msg, TrajectoryScore)() {
  return &dwb_msgs::msg::typesupport_fastrtps_cpp::_TrajectoryScore__handle;
}

#ifdef __cplusplus
}
#endif
