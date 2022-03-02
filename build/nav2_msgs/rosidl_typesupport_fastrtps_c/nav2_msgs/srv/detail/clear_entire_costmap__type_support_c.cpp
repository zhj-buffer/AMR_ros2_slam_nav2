// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from nav2_msgs:srv/ClearEntireCostmap.idl
// generated code does not contain a copyright notice
#include "nav2_msgs/srv/detail/clear_entire_costmap__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "nav2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nav2_msgs/srv/detail/clear_entire_costmap__struct.h"
#include "nav2_msgs/srv/detail/clear_entire_costmap__functions.h"
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

#include "std_msgs/msg/detail/empty__functions.h"  // request

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav2_msgs
size_t get_serialized_size_std_msgs__msg__Empty(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav2_msgs
size_t max_serialized_size_std_msgs__msg__Empty(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Empty)();


using _ClearEntireCostmap_Request__ros_msg_type = nav2_msgs__srv__ClearEntireCostmap_Request;

static bool _ClearEntireCostmap_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ClearEntireCostmap_Request__ros_msg_type * ros_message = static_cast<const _ClearEntireCostmap_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Empty
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->request, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ClearEntireCostmap_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ClearEntireCostmap_Request__ros_msg_type * ros_message = static_cast<_ClearEntireCostmap_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Empty
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->request))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t get_serialized_size_nav2_msgs__srv__ClearEntireCostmap_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ClearEntireCostmap_Request__ros_msg_type * ros_message = static_cast<const _ClearEntireCostmap_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name request

  current_alignment += get_serialized_size_std_msgs__msg__Empty(
    &(ros_message->request), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ClearEntireCostmap_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nav2_msgs__srv__ClearEntireCostmap_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t max_serialized_size_nav2_msgs__srv__ClearEntireCostmap_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: request
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Empty(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ClearEntireCostmap_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nav2_msgs__srv__ClearEntireCostmap_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ClearEntireCostmap_Request = {
  "nav2_msgs::srv",
  "ClearEntireCostmap_Request",
  _ClearEntireCostmap_Request__cdr_serialize,
  _ClearEntireCostmap_Request__cdr_deserialize,
  _ClearEntireCostmap_Request__get_serialized_size,
  _ClearEntireCostmap_Request__max_serialized_size
};

static rosidl_message_type_support_t _ClearEntireCostmap_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ClearEntireCostmap_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, srv, ClearEntireCostmap_Request)() {
  return &_ClearEntireCostmap_Request__type_support;
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
// #include "nav2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "nav2_msgs/srv/detail/clear_entire_costmap__struct.h"
// already included above
// #include "nav2_msgs/srv/detail/clear_entire_costmap__functions.h"
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

// already included above
// #include "std_msgs/msg/detail/empty__functions.h"  // response

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav2_msgs
size_t get_serialized_size_std_msgs__msg__Empty(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav2_msgs
size_t max_serialized_size_std_msgs__msg__Empty(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Empty)();


using _ClearEntireCostmap_Response__ros_msg_type = nav2_msgs__srv__ClearEntireCostmap_Response;

static bool _ClearEntireCostmap_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ClearEntireCostmap_Response__ros_msg_type * ros_message = static_cast<const _ClearEntireCostmap_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Empty
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->response, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ClearEntireCostmap_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ClearEntireCostmap_Response__ros_msg_type * ros_message = static_cast<_ClearEntireCostmap_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Empty
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->response))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t get_serialized_size_nav2_msgs__srv__ClearEntireCostmap_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ClearEntireCostmap_Response__ros_msg_type * ros_message = static_cast<const _ClearEntireCostmap_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name response

  current_alignment += get_serialized_size_std_msgs__msg__Empty(
    &(ros_message->response), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ClearEntireCostmap_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nav2_msgs__srv__ClearEntireCostmap_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t max_serialized_size_nav2_msgs__srv__ClearEntireCostmap_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: response
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Empty(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ClearEntireCostmap_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nav2_msgs__srv__ClearEntireCostmap_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ClearEntireCostmap_Response = {
  "nav2_msgs::srv",
  "ClearEntireCostmap_Response",
  _ClearEntireCostmap_Response__cdr_serialize,
  _ClearEntireCostmap_Response__cdr_deserialize,
  _ClearEntireCostmap_Response__get_serialized_size,
  _ClearEntireCostmap_Response__max_serialized_size
};

static rosidl_message_type_support_t _ClearEntireCostmap_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ClearEntireCostmap_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, srv, ClearEntireCostmap_Response)() {
  return &_ClearEntireCostmap_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nav2_msgs/srv/clear_entire_costmap.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ClearEntireCostmap__callbacks = {
  "nav2_msgs::srv",
  "ClearEntireCostmap",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, srv, ClearEntireCostmap_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, srv, ClearEntireCostmap_Response)(),
};

static rosidl_service_type_support_t ClearEntireCostmap__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ClearEntireCostmap__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, srv, ClearEntireCostmap)() {
  return &ClearEntireCostmap__handle;
}

#if defined(__cplusplus)
}
#endif
