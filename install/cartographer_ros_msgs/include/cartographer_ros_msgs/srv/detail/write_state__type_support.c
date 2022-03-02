// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartographer_ros_msgs:srv/WriteState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartographer_ros_msgs/srv/detail/write_state__rosidl_typesupport_introspection_c.h"
#include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartographer_ros_msgs/srv/detail/write_state__functions.h"
#include "cartographer_ros_msgs/srv/detail/write_state__struct.h"


// Include directives for member types
// Member `filename`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WriteState_Request__rosidl_typesupport_introspection_c__WriteState_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartographer_ros_msgs__srv__WriteState_Request__init(message_memory);
}

void WriteState_Request__rosidl_typesupport_introspection_c__WriteState_Request_fini_function(void * message_memory)
{
  cartographer_ros_msgs__srv__WriteState_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WriteState_Request__rosidl_typesupport_introspection_c__WriteState_Request_message_member_array[1] = {
  {
    "filename",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__WriteState_Request, filename),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WriteState_Request__rosidl_typesupport_introspection_c__WriteState_Request_message_members = {
  "cartographer_ros_msgs__srv",  // message namespace
  "WriteState_Request",  // message name
  1,  // number of fields
  sizeof(cartographer_ros_msgs__srv__WriteState_Request),
  WriteState_Request__rosidl_typesupport_introspection_c__WriteState_Request_message_member_array,  // message members
  WriteState_Request__rosidl_typesupport_introspection_c__WriteState_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  WriteState_Request__rosidl_typesupport_introspection_c__WriteState_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WriteState_Request__rosidl_typesupport_introspection_c__WriteState_Request_message_type_support_handle = {
  0,
  &WriteState_Request__rosidl_typesupport_introspection_c__WriteState_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, WriteState_Request)() {
  if (!WriteState_Request__rosidl_typesupport_introspection_c__WriteState_Request_message_type_support_handle.typesupport_identifier) {
    WriteState_Request__rosidl_typesupport_introspection_c__WriteState_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WriteState_Request__rosidl_typesupport_introspection_c__WriteState_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cartographer_ros_msgs/srv/detail/write_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cartographer_ros_msgs/srv/detail/write_state__functions.h"
// already included above
// #include "cartographer_ros_msgs/srv/detail/write_state__struct.h"


// Include directives for member types
// Member `status`
#include "cartographer_ros_msgs/msg/status_response.h"
// Member `status`
#include "cartographer_ros_msgs/msg/detail/status_response__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WriteState_Response__rosidl_typesupport_introspection_c__WriteState_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartographer_ros_msgs__srv__WriteState_Response__init(message_memory);
}

void WriteState_Response__rosidl_typesupport_introspection_c__WriteState_Response_fini_function(void * message_memory)
{
  cartographer_ros_msgs__srv__WriteState_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WriteState_Response__rosidl_typesupport_introspection_c__WriteState_Response_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__WriteState_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WriteState_Response__rosidl_typesupport_introspection_c__WriteState_Response_message_members = {
  "cartographer_ros_msgs__srv",  // message namespace
  "WriteState_Response",  // message name
  1,  // number of fields
  sizeof(cartographer_ros_msgs__srv__WriteState_Response),
  WriteState_Response__rosidl_typesupport_introspection_c__WriteState_Response_message_member_array,  // message members
  WriteState_Response__rosidl_typesupport_introspection_c__WriteState_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  WriteState_Response__rosidl_typesupport_introspection_c__WriteState_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WriteState_Response__rosidl_typesupport_introspection_c__WriteState_Response_message_type_support_handle = {
  0,
  &WriteState_Response__rosidl_typesupport_introspection_c__WriteState_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, WriteState_Response)() {
  WriteState_Response__rosidl_typesupport_introspection_c__WriteState_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, msg, StatusResponse)();
  if (!WriteState_Response__rosidl_typesupport_introspection_c__WriteState_Response_message_type_support_handle.typesupport_identifier) {
    WriteState_Response__rosidl_typesupport_introspection_c__WriteState_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WriteState_Response__rosidl_typesupport_introspection_c__WriteState_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cartographer_ros_msgs/srv/detail/write_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cartographer_ros_msgs__srv__detail__write_state__rosidl_typesupport_introspection_c__WriteState_service_members = {
  "cartographer_ros_msgs__srv",  // service namespace
  "WriteState",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cartographer_ros_msgs__srv__detail__write_state__rosidl_typesupport_introspection_c__WriteState_Request_message_type_support_handle,
  NULL  // response message
  // cartographer_ros_msgs__srv__detail__write_state__rosidl_typesupport_introspection_c__WriteState_Response_message_type_support_handle
};

static rosidl_service_type_support_t cartographer_ros_msgs__srv__detail__write_state__rosidl_typesupport_introspection_c__WriteState_service_type_support_handle = {
  0,
  &cartographer_ros_msgs__srv__detail__write_state__rosidl_typesupport_introspection_c__WriteState_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, WriteState_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, WriteState_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, WriteState)() {
  if (!cartographer_ros_msgs__srv__detail__write_state__rosidl_typesupport_introspection_c__WriteState_service_type_support_handle.typesupport_identifier) {
    cartographer_ros_msgs__srv__detail__write_state__rosidl_typesupport_introspection_c__WriteState_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cartographer_ros_msgs__srv__detail__write_state__rosidl_typesupport_introspection_c__WriteState_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, WriteState_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, WriteState_Response)()->data;
  }

  return &cartographer_ros_msgs__srv__detail__write_state__rosidl_typesupport_introspection_c__WriteState_service_type_support_handle;
}
