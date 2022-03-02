// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cartographer_ros_msgs:srv/StartTrajectory.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/srv/detail/start_trajectory__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cartographer_ros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cartographer_ros_msgs/srv/detail/start_trajectory__struct.h"
#include "cartographer_ros_msgs/srv/detail/start_trajectory__functions.h"
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

#include "cartographer_ros_msgs/msg/detail/sensor_topics__functions.h"  // topics
#include "cartographer_ros_msgs/msg/detail/trajectory_options__functions.h"  // options

// forward declare type support functions
size_t get_serialized_size_cartographer_ros_msgs__msg__SensorTopics(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cartographer_ros_msgs__msg__SensorTopics(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, msg, SensorTopics)();
size_t get_serialized_size_cartographer_ros_msgs__msg__TrajectoryOptions(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cartographer_ros_msgs__msg__TrajectoryOptions(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, msg, TrajectoryOptions)();


using _StartTrajectory_Request__ros_msg_type = cartographer_ros_msgs__srv__StartTrajectory_Request;

static bool _StartTrajectory_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StartTrajectory_Request__ros_msg_type * ros_message = static_cast<const _StartTrajectory_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: options
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, msg, TrajectoryOptions
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->options, cdr))
    {
      return false;
    }
  }

  // Field name: topics
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, msg, SensorTopics
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->topics, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _StartTrajectory_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StartTrajectory_Request__ros_msg_type * ros_message = static_cast<_StartTrajectory_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: options
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, msg, TrajectoryOptions
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->options))
    {
      return false;
    }
  }

  // Field name: topics
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, msg, SensorTopics
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->topics))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartographer_ros_msgs
size_t get_serialized_size_cartographer_ros_msgs__srv__StartTrajectory_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StartTrajectory_Request__ros_msg_type * ros_message = static_cast<const _StartTrajectory_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name options

  current_alignment += get_serialized_size_cartographer_ros_msgs__msg__TrajectoryOptions(
    &(ros_message->options), current_alignment);
  // field.name topics

  current_alignment += get_serialized_size_cartographer_ros_msgs__msg__SensorTopics(
    &(ros_message->topics), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _StartTrajectory_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cartographer_ros_msgs__srv__StartTrajectory_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartographer_ros_msgs
size_t max_serialized_size_cartographer_ros_msgs__srv__StartTrajectory_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: options
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cartographer_ros_msgs__msg__TrajectoryOptions(
        full_bounded, current_alignment);
    }
  }
  // member: topics
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cartographer_ros_msgs__msg__SensorTopics(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _StartTrajectory_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cartographer_ros_msgs__srv__StartTrajectory_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_StartTrajectory_Request = {
  "cartographer_ros_msgs::srv",
  "StartTrajectory_Request",
  _StartTrajectory_Request__cdr_serialize,
  _StartTrajectory_Request__cdr_deserialize,
  _StartTrajectory_Request__get_serialized_size,
  _StartTrajectory_Request__max_serialized_size
};

static rosidl_message_type_support_t _StartTrajectory_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StartTrajectory_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, srv, StartTrajectory_Request)() {
  return &_StartTrajectory_Request__type_support;
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
// #include "cartographer_ros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "cartographer_ros_msgs/srv/detail/start_trajectory__struct.h"
// already included above
// #include "cartographer_ros_msgs/srv/detail/start_trajectory__functions.h"
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

#include "cartographer_ros_msgs/msg/detail/status_response__functions.h"  // status

// forward declare type support functions
size_t get_serialized_size_cartographer_ros_msgs__msg__StatusResponse(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cartographer_ros_msgs__msg__StatusResponse(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, msg, StatusResponse)();


using _StartTrajectory_Response__ros_msg_type = cartographer_ros_msgs__srv__StartTrajectory_Response;

static bool _StartTrajectory_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StartTrajectory_Response__ros_msg_type * ros_message = static_cast<const _StartTrajectory_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, msg, StatusResponse
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->status, cdr))
    {
      return false;
    }
  }

  // Field name: trajectory_id
  {
    cdr << ros_message->trajectory_id;
  }

  return true;
}

static bool _StartTrajectory_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StartTrajectory_Response__ros_msg_type * ros_message = static_cast<_StartTrajectory_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, msg, StatusResponse
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->status))
    {
      return false;
    }
  }

  // Field name: trajectory_id
  {
    cdr >> ros_message->trajectory_id;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartographer_ros_msgs
size_t get_serialized_size_cartographer_ros_msgs__srv__StartTrajectory_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StartTrajectory_Response__ros_msg_type * ros_message = static_cast<const _StartTrajectory_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status

  current_alignment += get_serialized_size_cartographer_ros_msgs__msg__StatusResponse(
    &(ros_message->status), current_alignment);
  // field.name trajectory_id
  {
    size_t item_size = sizeof(ros_message->trajectory_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _StartTrajectory_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cartographer_ros_msgs__srv__StartTrajectory_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartographer_ros_msgs
size_t max_serialized_size_cartographer_ros_msgs__srv__StartTrajectory_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cartographer_ros_msgs__msg__StatusResponse(
        full_bounded, current_alignment);
    }
  }
  // member: trajectory_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _StartTrajectory_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cartographer_ros_msgs__srv__StartTrajectory_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_StartTrajectory_Response = {
  "cartographer_ros_msgs::srv",
  "StartTrajectory_Response",
  _StartTrajectory_Response__cdr_serialize,
  _StartTrajectory_Response__cdr_deserialize,
  _StartTrajectory_Response__get_serialized_size,
  _StartTrajectory_Response__max_serialized_size
};

static rosidl_message_type_support_t _StartTrajectory_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StartTrajectory_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, srv, StartTrajectory_Response)() {
  return &_StartTrajectory_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "cartographer_ros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cartographer_ros_msgs/srv/start_trajectory.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t StartTrajectory__callbacks = {
  "cartographer_ros_msgs::srv",
  "StartTrajectory",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, srv, StartTrajectory_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, srv, StartTrajectory_Response)(),
};

static rosidl_service_type_support_t StartTrajectory__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &StartTrajectory__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, srv, StartTrajectory)() {
  return &StartTrajectory__handle;
}

#if defined(__cplusplus)
}
#endif
