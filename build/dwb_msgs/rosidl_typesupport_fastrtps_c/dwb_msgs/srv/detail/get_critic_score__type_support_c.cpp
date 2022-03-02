// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dwb_msgs:srv/GetCriticScore.idl
// generated code does not contain a copyright notice
#include "dwb_msgs/srv/detail/get_critic_score__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dwb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dwb_msgs/srv/detail/get_critic_score__struct.h"
#include "dwb_msgs/srv/detail/get_critic_score__functions.h"
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

#include "dwb_msgs/msg/detail/trajectory2_d__functions.h"  // traj
#include "nav_2d_msgs/msg/detail/path2_d__functions.h"  // global_plan
#include "nav_2d_msgs/msg/detail/pose2_d_stamped__functions.h"  // pose
#include "nav_2d_msgs/msg/detail/twist2_d__functions.h"  // velocity
#include "rosidl_runtime_c/string.h"  // critic_name
#include "rosidl_runtime_c/string_functions.h"  // critic_name

// forward declare type support functions
size_t get_serialized_size_dwb_msgs__msg__Trajectory2D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dwb_msgs__msg__Trajectory2D(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, msg, Trajectory2D)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t get_serialized_size_nav_2d_msgs__msg__Path2D(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t max_serialized_size_nav_2d_msgs__msg__Path2D(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_2d_msgs, msg, Path2D)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t get_serialized_size_nav_2d_msgs__msg__Pose2DStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t max_serialized_size_nav_2d_msgs__msg__Pose2DStamped(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_2d_msgs, msg, Pose2DStamped)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t get_serialized_size_nav_2d_msgs__msg__Twist2D(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t max_serialized_size_nav_2d_msgs__msg__Twist2D(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_2d_msgs, msg, Twist2D)();


using _GetCriticScore_Request__ros_msg_type = dwb_msgs__srv__GetCriticScore_Request;

static bool _GetCriticScore_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetCriticScore_Request__ros_msg_type * ros_message = static_cast<const _GetCriticScore_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_2d_msgs, msg, Pose2DStamped
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pose, cdr))
    {
      return false;
    }
  }

  // Field name: velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_2d_msgs, msg, Twist2D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->velocity, cdr))
    {
      return false;
    }
  }

  // Field name: global_plan
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_2d_msgs, msg, Path2D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->global_plan, cdr))
    {
      return false;
    }
  }

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

  // Field name: critic_name
  {
    const rosidl_runtime_c__String * str = &ros_message->critic_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GetCriticScore_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetCriticScore_Request__ros_msg_type * ros_message = static_cast<_GetCriticScore_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_2d_msgs, msg, Pose2DStamped
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pose))
    {
      return false;
    }
  }

  // Field name: velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_2d_msgs, msg, Twist2D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->velocity))
    {
      return false;
    }
  }

  // Field name: global_plan
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_2d_msgs, msg, Path2D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->global_plan))
    {
      return false;
    }
  }

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

  // Field name: critic_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->critic_name.data) {
      rosidl_runtime_c__String__init(&ros_message->critic_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->critic_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'critic_name'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t get_serialized_size_dwb_msgs__srv__GetCriticScore_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetCriticScore_Request__ros_msg_type * ros_message = static_cast<const _GetCriticScore_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pose

  current_alignment += get_serialized_size_nav_2d_msgs__msg__Pose2DStamped(
    &(ros_message->pose), current_alignment);
  // field.name velocity

  current_alignment += get_serialized_size_nav_2d_msgs__msg__Twist2D(
    &(ros_message->velocity), current_alignment);
  // field.name global_plan

  current_alignment += get_serialized_size_nav_2d_msgs__msg__Path2D(
    &(ros_message->global_plan), current_alignment);
  // field.name traj

  current_alignment += get_serialized_size_dwb_msgs__msg__Trajectory2D(
    &(ros_message->traj), current_alignment);
  // field.name critic_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->critic_name.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetCriticScore_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dwb_msgs__srv__GetCriticScore_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t max_serialized_size_dwb_msgs__srv__GetCriticScore_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nav_2d_msgs__msg__Pose2DStamped(
        full_bounded, current_alignment);
    }
  }
  // member: velocity
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nav_2d_msgs__msg__Twist2D(
        full_bounded, current_alignment);
    }
  }
  // member: global_plan
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nav_2d_msgs__msg__Path2D(
        full_bounded, current_alignment);
    }
  }
  // member: traj
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_dwb_msgs__msg__Trajectory2D(
        full_bounded, current_alignment);
    }
  }
  // member: critic_name
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

static size_t _GetCriticScore_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_dwb_msgs__srv__GetCriticScore_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetCriticScore_Request = {
  "dwb_msgs::srv",
  "GetCriticScore_Request",
  _GetCriticScore_Request__cdr_serialize,
  _GetCriticScore_Request__cdr_deserialize,
  _GetCriticScore_Request__get_serialized_size,
  _GetCriticScore_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetCriticScore_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetCriticScore_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, srv, GetCriticScore_Request)() {
  return &_GetCriticScore_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "dwb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "dwb_msgs/srv/detail/get_critic_score__struct.h"
// already included above
// #include "dwb_msgs/srv/detail/get_critic_score__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "dwb_msgs/msg/detail/critic_score__functions.h"  // score

// forward declare type support functions
size_t get_serialized_size_dwb_msgs__msg__CriticScore(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dwb_msgs__msg__CriticScore(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, msg, CriticScore)();


using _GetCriticScore_Response__ros_msg_type = dwb_msgs__srv__GetCriticScore_Response;

static bool _GetCriticScore_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetCriticScore_Response__ros_msg_type * ros_message = static_cast<const _GetCriticScore_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: score
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dwb_msgs, msg, CriticScore
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->score, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetCriticScore_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetCriticScore_Response__ros_msg_type * ros_message = static_cast<_GetCriticScore_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: score
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dwb_msgs, msg, CriticScore
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->score))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t get_serialized_size_dwb_msgs__srv__GetCriticScore_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetCriticScore_Response__ros_msg_type * ros_message = static_cast<const _GetCriticScore_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name score

  current_alignment += get_serialized_size_dwb_msgs__msg__CriticScore(
    &(ros_message->score), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetCriticScore_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dwb_msgs__srv__GetCriticScore_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t max_serialized_size_dwb_msgs__srv__GetCriticScore_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: score
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_dwb_msgs__msg__CriticScore(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetCriticScore_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_dwb_msgs__srv__GetCriticScore_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetCriticScore_Response = {
  "dwb_msgs::srv",
  "GetCriticScore_Response",
  _GetCriticScore_Response__cdr_serialize,
  _GetCriticScore_Response__cdr_deserialize,
  _GetCriticScore_Response__get_serialized_size,
  _GetCriticScore_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetCriticScore_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetCriticScore_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, srv, GetCriticScore_Response)() {
  return &_GetCriticScore_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "dwb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dwb_msgs/srv/get_critic_score.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetCriticScore__callbacks = {
  "dwb_msgs::srv",
  "GetCriticScore",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, srv, GetCriticScore_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, srv, GetCriticScore_Response)(),
};

static rosidl_service_type_support_t GetCriticScore__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetCriticScore__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, srv, GetCriticScore)() {
  return &GetCriticScore__handle;
}

#if defined(__cplusplus)
}
#endif
