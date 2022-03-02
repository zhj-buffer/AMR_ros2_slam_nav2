// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from nav2_msgs:srv/ClearCostmapExceptRegion.idl
// generated code does not contain a copyright notice
#include "nav2_msgs/srv/detail/clear_costmap_except_region__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "nav2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nav2_msgs/srv/detail/clear_costmap_except_region__struct.h"
#include "nav2_msgs/srv/detail/clear_costmap_except_region__functions.h"
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


using _ClearCostmapExceptRegion_Request__ros_msg_type = nav2_msgs__srv__ClearCostmapExceptRegion_Request;

static bool _ClearCostmapExceptRegion_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ClearCostmapExceptRegion_Request__ros_msg_type * ros_message = static_cast<const _ClearCostmapExceptRegion_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: reset_distance
  {
    cdr << ros_message->reset_distance;
  }

  return true;
}

static bool _ClearCostmapExceptRegion_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ClearCostmapExceptRegion_Request__ros_msg_type * ros_message = static_cast<_ClearCostmapExceptRegion_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: reset_distance
  {
    cdr >> ros_message->reset_distance;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t get_serialized_size_nav2_msgs__srv__ClearCostmapExceptRegion_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ClearCostmapExceptRegion_Request__ros_msg_type * ros_message = static_cast<const _ClearCostmapExceptRegion_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name reset_distance
  {
    size_t item_size = sizeof(ros_message->reset_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ClearCostmapExceptRegion_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nav2_msgs__srv__ClearCostmapExceptRegion_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t max_serialized_size_nav2_msgs__srv__ClearCostmapExceptRegion_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: reset_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ClearCostmapExceptRegion_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nav2_msgs__srv__ClearCostmapExceptRegion_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ClearCostmapExceptRegion_Request = {
  "nav2_msgs::srv",
  "ClearCostmapExceptRegion_Request",
  _ClearCostmapExceptRegion_Request__cdr_serialize,
  _ClearCostmapExceptRegion_Request__cdr_deserialize,
  _ClearCostmapExceptRegion_Request__get_serialized_size,
  _ClearCostmapExceptRegion_Request__max_serialized_size
};

static rosidl_message_type_support_t _ClearCostmapExceptRegion_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ClearCostmapExceptRegion_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, srv, ClearCostmapExceptRegion_Request)() {
  return &_ClearCostmapExceptRegion_Request__type_support;
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
// #include "nav2_msgs/srv/detail/clear_costmap_except_region__struct.h"
// already included above
// #include "nav2_msgs/srv/detail/clear_costmap_except_region__functions.h"
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

#include "std_msgs/msg/detail/empty__functions.h"  // response

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


using _ClearCostmapExceptRegion_Response__ros_msg_type = nav2_msgs__srv__ClearCostmapExceptRegion_Response;

static bool _ClearCostmapExceptRegion_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ClearCostmapExceptRegion_Response__ros_msg_type * ros_message = static_cast<const _ClearCostmapExceptRegion_Response__ros_msg_type *>(untyped_ros_message);
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

static bool _ClearCostmapExceptRegion_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ClearCostmapExceptRegion_Response__ros_msg_type * ros_message = static_cast<_ClearCostmapExceptRegion_Response__ros_msg_type *>(untyped_ros_message);
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
size_t get_serialized_size_nav2_msgs__srv__ClearCostmapExceptRegion_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ClearCostmapExceptRegion_Response__ros_msg_type * ros_message = static_cast<const _ClearCostmapExceptRegion_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _ClearCostmapExceptRegion_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nav2_msgs__srv__ClearCostmapExceptRegion_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t max_serialized_size_nav2_msgs__srv__ClearCostmapExceptRegion_Response(
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

static size_t _ClearCostmapExceptRegion_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nav2_msgs__srv__ClearCostmapExceptRegion_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ClearCostmapExceptRegion_Response = {
  "nav2_msgs::srv",
  "ClearCostmapExceptRegion_Response",
  _ClearCostmapExceptRegion_Response__cdr_serialize,
  _ClearCostmapExceptRegion_Response__cdr_deserialize,
  _ClearCostmapExceptRegion_Response__get_serialized_size,
  _ClearCostmapExceptRegion_Response__max_serialized_size
};

static rosidl_message_type_support_t _ClearCostmapExceptRegion_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ClearCostmapExceptRegion_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, srv, ClearCostmapExceptRegion_Response)() {
  return &_ClearCostmapExceptRegion_Response__type_support;
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
#include "nav2_msgs/srv/clear_costmap_except_region.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ClearCostmapExceptRegion__callbacks = {
  "nav2_msgs::srv",
  "ClearCostmapExceptRegion",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, srv, ClearCostmapExceptRegion_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, srv, ClearCostmapExceptRegion_Response)(),
};

static rosidl_service_type_support_t ClearCostmapExceptRegion__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ClearCostmapExceptRegion__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, srv, ClearCostmapExceptRegion)() {
  return &ClearCostmapExceptRegion__handle;
}

#if defined(__cplusplus)
}
#endif
