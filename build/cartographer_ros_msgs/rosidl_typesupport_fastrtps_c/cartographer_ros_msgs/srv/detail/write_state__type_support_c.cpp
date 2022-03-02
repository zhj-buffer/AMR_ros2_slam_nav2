// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cartographer_ros_msgs:srv/WriteState.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/srv/detail/write_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cartographer_ros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cartographer_ros_msgs/srv/detail/write_state__struct.h"
#include "cartographer_ros_msgs/srv/detail/write_state__functions.h"
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

#include "rosidl_runtime_c/string.h"  // filename
#include "rosidl_runtime_c/string_functions.h"  // filename

// forward declare type support functions


using _WriteState_Request__ros_msg_type = cartographer_ros_msgs__srv__WriteState_Request;

static bool _WriteState_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WriteState_Request__ros_msg_type * ros_message = static_cast<const _WriteState_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: filename
  {
    const rosidl_runtime_c__String * str = &ros_message->filename;
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

static bool _WriteState_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WriteState_Request__ros_msg_type * ros_message = static_cast<_WriteState_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: filename
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->filename.data) {
      rosidl_runtime_c__String__init(&ros_message->filename);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->filename,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'filename'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartographer_ros_msgs
size_t get_serialized_size_cartographer_ros_msgs__srv__WriteState_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WriteState_Request__ros_msg_type * ros_message = static_cast<const _WriteState_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name filename
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->filename.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _WriteState_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cartographer_ros_msgs__srv__WriteState_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartographer_ros_msgs
size_t max_serialized_size_cartographer_ros_msgs__srv__WriteState_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: filename
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

static size_t _WriteState_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cartographer_ros_msgs__srv__WriteState_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_WriteState_Request = {
  "cartographer_ros_msgs::srv",
  "WriteState_Request",
  _WriteState_Request__cdr_serialize,
  _WriteState_Request__cdr_deserialize,
  _WriteState_Request__get_serialized_size,
  _WriteState_Request__max_serialized_size
};

static rosidl_message_type_support_t _WriteState_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WriteState_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, srv, WriteState_Request)() {
  return &_WriteState_Request__type_support;
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
// #include "cartographer_ros_msgs/srv/detail/write_state__struct.h"
// already included above
// #include "cartographer_ros_msgs/srv/detail/write_state__functions.h"
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


using _WriteState_Response__ros_msg_type = cartographer_ros_msgs__srv__WriteState_Response;

static bool _WriteState_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WriteState_Response__ros_msg_type * ros_message = static_cast<const _WriteState_Response__ros_msg_type *>(untyped_ros_message);
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

  return true;
}

static bool _WriteState_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WriteState_Response__ros_msg_type * ros_message = static_cast<_WriteState_Response__ros_msg_type *>(untyped_ros_message);
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartographer_ros_msgs
size_t get_serialized_size_cartographer_ros_msgs__srv__WriteState_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WriteState_Response__ros_msg_type * ros_message = static_cast<const _WriteState_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status

  current_alignment += get_serialized_size_cartographer_ros_msgs__msg__StatusResponse(
    &(ros_message->status), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _WriteState_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cartographer_ros_msgs__srv__WriteState_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartographer_ros_msgs
size_t max_serialized_size_cartographer_ros_msgs__srv__WriteState_Response(
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

  return current_alignment - initial_alignment;
}

static size_t _WriteState_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cartographer_ros_msgs__srv__WriteState_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_WriteState_Response = {
  "cartographer_ros_msgs::srv",
  "WriteState_Response",
  _WriteState_Response__cdr_serialize,
  _WriteState_Response__cdr_deserialize,
  _WriteState_Response__get_serialized_size,
  _WriteState_Response__max_serialized_size
};

static rosidl_message_type_support_t _WriteState_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WriteState_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, srv, WriteState_Response)() {
  return &_WriteState_Response__type_support;
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
#include "cartographer_ros_msgs/srv/write_state.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t WriteState__callbacks = {
  "cartographer_ros_msgs::srv",
  "WriteState",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, srv, WriteState_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, srv, WriteState_Response)(),
};

static rosidl_service_type_support_t WriteState__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &WriteState__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartographer_ros_msgs, srv, WriteState)() {
  return &WriteState__handle;
}

#if defined(__cplusplus)
}
#endif
