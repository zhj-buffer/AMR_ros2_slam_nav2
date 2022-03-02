// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cartographer_ros_msgs:srv/SubmapQuery.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/srv/detail/submap_query__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cartographer_ros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cartographer_ros_msgs/srv/detail/submap_query__struct.h"
#include "cartographer_ros_msgs/srv/detail/submap_query__functions.h"
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


using _SubmapQuery_Request__ros_msg_type = cartographer_ros_msgs__srv__SubmapQuery_Request;

static bool _SubmapQuery_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SubmapQuery_Request__ros_msg_type * ros_message = static_cast<const _SubmapQuery_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: trajectory_id
  {
    cdr << ros_message->trajectory_id;
  }

  // Field name: submap_index
  {
    cdr << ros_message->submap_index;
  }

  return true;
}

static bool _SubmapQuery_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SubmapQuery_Request__ros_msg_type * ros_message = static_cast<_SubmapQuery_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: trajectory_id
  {
    cdr >> ros_message->trajectory_id;
  }

  // Field name: submap_index
  {
    cdr >> ros_message->submap_index;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartographer_ros_msgs
size_t get_serialized_size_cartographer_ros_msgs__srv__SubmapQuery_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SubmapQuery_Request__ros_msg_type * ros_message = static_cast<const _SubmapQuery_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name trajectory_id
  {
    size_t item_size = sizeof(ros_message->trajectory_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name submap_index
  {
    size_t item_size = sizeof(ros_message->submap_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SubmapQuery_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cartographer_ros_msgs__srv__SubmapQuery_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartographer_ros_msgs
size_t max_serialized_size_cartographer_ros_msgs__srv__SubmapQuery_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: trajectory_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: submap_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SubmapQuery_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cartographer_ros_msgs__srv__SubmapQuery_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SubmapQuery_Request = {
  "cartographer_ros_msgs::srv",
  "SubmapQuery_Request",
  _SubmapQuery_Request__cdr_serialize,
  _SubmapQuery_Request__cdr_deserialize,
  _SubmapQuery_Request__get_serialized_size,
  _SubmapQuery_Request__max_serialized_size
};

static rosidl_message_type_support_t _SubmapQuery_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SubmapQuery_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, srv, SubmapQuery_Request)() {
  return &_SubmapQuery_Request__type_support;
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
// #include "cartographer_ros_msgs/srv/detail/submap_query__struct.h"
// already included above
// #include "cartographer_ros_msgs/srv/detail/submap_query__functions.h"
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
#include "cartographer_ros_msgs/msg/detail/submap_texture__functions.h"  // textures

// forward declare type support functions
size_t get_serialized_size_cartographer_ros_msgs__msg__StatusResponse(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cartographer_ros_msgs__msg__StatusResponse(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, msg, StatusResponse)();
size_t get_serialized_size_cartographer_ros_msgs__msg__SubmapTexture(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cartographer_ros_msgs__msg__SubmapTexture(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, msg, SubmapTexture)();


using _SubmapQuery_Response__ros_msg_type = cartographer_ros_msgs__srv__SubmapQuery_Response;

static bool _SubmapQuery_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SubmapQuery_Response__ros_msg_type * ros_message = static_cast<const _SubmapQuery_Response__ros_msg_type *>(untyped_ros_message);
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

  // Field name: submap_version
  {
    cdr << ros_message->submap_version;
  }

  // Field name: textures
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, msg, SubmapTexture
      )()->data);
    size_t size = ros_message->textures.size;
    auto array_ptr = ros_message->textures.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _SubmapQuery_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SubmapQuery_Response__ros_msg_type * ros_message = static_cast<_SubmapQuery_Response__ros_msg_type *>(untyped_ros_message);
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

  // Field name: submap_version
  {
    cdr >> ros_message->submap_version;
  }

  // Field name: textures
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, msg, SubmapTexture
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->textures.data) {
      cartographer_ros_msgs__msg__SubmapTexture__Sequence__fini(&ros_message->textures);
    }
    if (!cartographer_ros_msgs__msg__SubmapTexture__Sequence__init(&ros_message->textures, size)) {
      return "failed to create array for field 'textures'";
    }
    auto array_ptr = ros_message->textures.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartographer_ros_msgs
size_t get_serialized_size_cartographer_ros_msgs__srv__SubmapQuery_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SubmapQuery_Response__ros_msg_type * ros_message = static_cast<const _SubmapQuery_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status

  current_alignment += get_serialized_size_cartographer_ros_msgs__msg__StatusResponse(
    &(ros_message->status), current_alignment);
  // field.name submap_version
  {
    size_t item_size = sizeof(ros_message->submap_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name textures
  {
    size_t array_size = ros_message->textures.size;
    auto array_ptr = ros_message->textures.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_cartographer_ros_msgs__msg__SubmapTexture(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SubmapQuery_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cartographer_ros_msgs__srv__SubmapQuery_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartographer_ros_msgs
size_t max_serialized_size_cartographer_ros_msgs__srv__SubmapQuery_Response(
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
  // member: submap_version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: textures
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cartographer_ros_msgs__msg__SubmapTexture(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SubmapQuery_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cartographer_ros_msgs__srv__SubmapQuery_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SubmapQuery_Response = {
  "cartographer_ros_msgs::srv",
  "SubmapQuery_Response",
  _SubmapQuery_Response__cdr_serialize,
  _SubmapQuery_Response__cdr_deserialize,
  _SubmapQuery_Response__get_serialized_size,
  _SubmapQuery_Response__max_serialized_size
};

static rosidl_message_type_support_t _SubmapQuery_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SubmapQuery_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, srv, SubmapQuery_Response)() {
  return &_SubmapQuery_Response__type_support;
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
#include "cartographer_ros_msgs/srv/submap_query.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SubmapQuery__callbacks = {
  "cartographer_ros_msgs::srv",
  "SubmapQuery",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, srv, SubmapQuery_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, srv, SubmapQuery_Response)(),
};

static rosidl_service_type_support_t SubmapQuery__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SubmapQuery__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, srv, SubmapQuery)() {
  return &SubmapQuery__handle;
}

#if defined(__cplusplus)
}
#endif
