// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from nav2_msgs:srv/GetCostmap.idl
// generated code does not contain a copyright notice
#include "nav2_msgs/srv/detail/get_costmap__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "nav2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nav2_msgs/srv/detail/get_costmap__struct.h"
#include "nav2_msgs/srv/detail/get_costmap__functions.h"
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

#include "nav2_msgs/msg/detail/costmap_meta_data__functions.h"  // specs

// forward declare type support functions
size_t get_serialized_size_nav2_msgs__msg__CostmapMetaData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_nav2_msgs__msg__CostmapMetaData(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, msg, CostmapMetaData)();


using _GetCostmap_Request__ros_msg_type = nav2_msgs__srv__GetCostmap_Request;

static bool _GetCostmap_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetCostmap_Request__ros_msg_type * ros_message = static_cast<const _GetCostmap_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: specs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav2_msgs, msg, CostmapMetaData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->specs, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetCostmap_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetCostmap_Request__ros_msg_type * ros_message = static_cast<_GetCostmap_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: specs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav2_msgs, msg, CostmapMetaData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->specs))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t get_serialized_size_nav2_msgs__srv__GetCostmap_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetCostmap_Request__ros_msg_type * ros_message = static_cast<const _GetCostmap_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name specs

  current_alignment += get_serialized_size_nav2_msgs__msg__CostmapMetaData(
    &(ros_message->specs), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetCostmap_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nav2_msgs__srv__GetCostmap_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t max_serialized_size_nav2_msgs__srv__GetCostmap_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: specs
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nav2_msgs__msg__CostmapMetaData(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetCostmap_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nav2_msgs__srv__GetCostmap_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetCostmap_Request = {
  "nav2_msgs::srv",
  "GetCostmap_Request",
  _GetCostmap_Request__cdr_serialize,
  _GetCostmap_Request__cdr_deserialize,
  _GetCostmap_Request__get_serialized_size,
  _GetCostmap_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetCostmap_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetCostmap_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, srv, GetCostmap_Request)() {
  return &_GetCostmap_Request__type_support;
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
// #include "nav2_msgs/srv/detail/get_costmap__struct.h"
// already included above
// #include "nav2_msgs/srv/detail/get_costmap__functions.h"
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

#include "nav2_msgs/msg/detail/costmap__functions.h"  // map

// forward declare type support functions
size_t get_serialized_size_nav2_msgs__msg__Costmap(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_nav2_msgs__msg__Costmap(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, msg, Costmap)();


using _GetCostmap_Response__ros_msg_type = nav2_msgs__srv__GetCostmap_Response;

static bool _GetCostmap_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetCostmap_Response__ros_msg_type * ros_message = static_cast<const _GetCostmap_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: map
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav2_msgs, msg, Costmap
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->map, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetCostmap_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetCostmap_Response__ros_msg_type * ros_message = static_cast<_GetCostmap_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: map
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav2_msgs, msg, Costmap
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->map))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t get_serialized_size_nav2_msgs__srv__GetCostmap_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetCostmap_Response__ros_msg_type * ros_message = static_cast<const _GetCostmap_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name map

  current_alignment += get_serialized_size_nav2_msgs__msg__Costmap(
    &(ros_message->map), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetCostmap_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nav2_msgs__srv__GetCostmap_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t max_serialized_size_nav2_msgs__srv__GetCostmap_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: map
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nav2_msgs__msg__Costmap(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetCostmap_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nav2_msgs__srv__GetCostmap_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetCostmap_Response = {
  "nav2_msgs::srv",
  "GetCostmap_Response",
  _GetCostmap_Response__cdr_serialize,
  _GetCostmap_Response__cdr_deserialize,
  _GetCostmap_Response__get_serialized_size,
  _GetCostmap_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetCostmap_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetCostmap_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, srv, GetCostmap_Response)() {
  return &_GetCostmap_Response__type_support;
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
#include "nav2_msgs/srv/get_costmap.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetCostmap__callbacks = {
  "nav2_msgs::srv",
  "GetCostmap",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, srv, GetCostmap_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, srv, GetCostmap_Response)(),
};

static rosidl_service_type_support_t GetCostmap__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetCostmap__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, srv, GetCostmap)() {
  return &GetCostmap__handle;
}

#if defined(__cplusplus)
}
#endif
