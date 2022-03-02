// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nav2_msgs:action/DummyRecovery.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nav2_msgs/action/detail/dummy_recovery__rosidl_typesupport_introspection_c.h"
#include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nav2_msgs/action/detail/dummy_recovery__functions.h"
#include "nav2_msgs/action/detail/dummy_recovery__struct.h"


// Include directives for member types
// Member `command`
#include "std_msgs/msg/string.h"
// Member `command`
#include "std_msgs/msg/detail/string__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DummyRecovery_Goal__rosidl_typesupport_introspection_c__DummyRecovery_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__DummyRecovery_Goal__init(message_memory);
}

void DummyRecovery_Goal__rosidl_typesupport_introspection_c__DummyRecovery_Goal_fini_function(void * message_memory)
{
  nav2_msgs__action__DummyRecovery_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DummyRecovery_Goal__rosidl_typesupport_introspection_c__DummyRecovery_Goal_message_member_array[1] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyRecovery_Goal, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DummyRecovery_Goal__rosidl_typesupport_introspection_c__DummyRecovery_Goal_message_members = {
  "nav2_msgs__action",  // message namespace
  "DummyRecovery_Goal",  // message name
  1,  // number of fields
  sizeof(nav2_msgs__action__DummyRecovery_Goal),
  DummyRecovery_Goal__rosidl_typesupport_introspection_c__DummyRecovery_Goal_message_member_array,  // message members
  DummyRecovery_Goal__rosidl_typesupport_introspection_c__DummyRecovery_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  DummyRecovery_Goal__rosidl_typesupport_introspection_c__DummyRecovery_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DummyRecovery_Goal__rosidl_typesupport_introspection_c__DummyRecovery_Goal_message_type_support_handle = {
  0,
  &DummyRecovery_Goal__rosidl_typesupport_introspection_c__DummyRecovery_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyRecovery_Goal)() {
  DummyRecovery_Goal__rosidl_typesupport_introspection_c__DummyRecovery_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  if (!DummyRecovery_Goal__rosidl_typesupport_introspection_c__DummyRecovery_Goal_message_type_support_handle.typesupport_identifier) {
    DummyRecovery_Goal__rosidl_typesupport_introspection_c__DummyRecovery_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DummyRecovery_Goal__rosidl_typesupport_introspection_c__DummyRecovery_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__functions.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__struct.h"


// Include directives for member types
// Member `total_elapsed_time`
#include "builtin_interfaces/msg/duration.h"
// Member `total_elapsed_time`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DummyRecovery_Result__rosidl_typesupport_introspection_c__DummyRecovery_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__DummyRecovery_Result__init(message_memory);
}

void DummyRecovery_Result__rosidl_typesupport_introspection_c__DummyRecovery_Result_fini_function(void * message_memory)
{
  nav2_msgs__action__DummyRecovery_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DummyRecovery_Result__rosidl_typesupport_introspection_c__DummyRecovery_Result_message_member_array[1] = {
  {
    "total_elapsed_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyRecovery_Result, total_elapsed_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DummyRecovery_Result__rosidl_typesupport_introspection_c__DummyRecovery_Result_message_members = {
  "nav2_msgs__action",  // message namespace
  "DummyRecovery_Result",  // message name
  1,  // number of fields
  sizeof(nav2_msgs__action__DummyRecovery_Result),
  DummyRecovery_Result__rosidl_typesupport_introspection_c__DummyRecovery_Result_message_member_array,  // message members
  DummyRecovery_Result__rosidl_typesupport_introspection_c__DummyRecovery_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  DummyRecovery_Result__rosidl_typesupport_introspection_c__DummyRecovery_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DummyRecovery_Result__rosidl_typesupport_introspection_c__DummyRecovery_Result_message_type_support_handle = {
  0,
  &DummyRecovery_Result__rosidl_typesupport_introspection_c__DummyRecovery_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyRecovery_Result)() {
  DummyRecovery_Result__rosidl_typesupport_introspection_c__DummyRecovery_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!DummyRecovery_Result__rosidl_typesupport_introspection_c__DummyRecovery_Result_message_type_support_handle.typesupport_identifier) {
    DummyRecovery_Result__rosidl_typesupport_introspection_c__DummyRecovery_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DummyRecovery_Result__rosidl_typesupport_introspection_c__DummyRecovery_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__functions.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void DummyRecovery_Feedback__rosidl_typesupport_introspection_c__DummyRecovery_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__DummyRecovery_Feedback__init(message_memory);
}

void DummyRecovery_Feedback__rosidl_typesupport_introspection_c__DummyRecovery_Feedback_fini_function(void * message_memory)
{
  nav2_msgs__action__DummyRecovery_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DummyRecovery_Feedback__rosidl_typesupport_introspection_c__DummyRecovery_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyRecovery_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DummyRecovery_Feedback__rosidl_typesupport_introspection_c__DummyRecovery_Feedback_message_members = {
  "nav2_msgs__action",  // message namespace
  "DummyRecovery_Feedback",  // message name
  1,  // number of fields
  sizeof(nav2_msgs__action__DummyRecovery_Feedback),
  DummyRecovery_Feedback__rosidl_typesupport_introspection_c__DummyRecovery_Feedback_message_member_array,  // message members
  DummyRecovery_Feedback__rosidl_typesupport_introspection_c__DummyRecovery_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  DummyRecovery_Feedback__rosidl_typesupport_introspection_c__DummyRecovery_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DummyRecovery_Feedback__rosidl_typesupport_introspection_c__DummyRecovery_Feedback_message_type_support_handle = {
  0,
  &DummyRecovery_Feedback__rosidl_typesupport_introspection_c__DummyRecovery_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyRecovery_Feedback)() {
  if (!DummyRecovery_Feedback__rosidl_typesupport_introspection_c__DummyRecovery_Feedback_message_type_support_handle.typesupport_identifier) {
    DummyRecovery_Feedback__rosidl_typesupport_introspection_c__DummyRecovery_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DummyRecovery_Feedback__rosidl_typesupport_introspection_c__DummyRecovery_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__functions.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "nav2_msgs/action/dummy_recovery.h"
// Member `goal`
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DummyRecovery_SendGoal_Request__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__DummyRecovery_SendGoal_Request__init(message_memory);
}

void DummyRecovery_SendGoal_Request__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Request_fini_function(void * message_memory)
{
  nav2_msgs__action__DummyRecovery_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DummyRecovery_SendGoal_Request__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyRecovery_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyRecovery_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DummyRecovery_SendGoal_Request__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Request_message_members = {
  "nav2_msgs__action",  // message namespace
  "DummyRecovery_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__action__DummyRecovery_SendGoal_Request),
  DummyRecovery_SendGoal_Request__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Request_message_member_array,  // message members
  DummyRecovery_SendGoal_Request__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DummyRecovery_SendGoal_Request__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DummyRecovery_SendGoal_Request__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Request_message_type_support_handle = {
  0,
  &DummyRecovery_SendGoal_Request__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyRecovery_SendGoal_Request)() {
  DummyRecovery_SendGoal_Request__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  DummyRecovery_SendGoal_Request__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyRecovery_Goal)();
  if (!DummyRecovery_SendGoal_Request__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    DummyRecovery_SendGoal_Request__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DummyRecovery_SendGoal_Request__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__functions.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DummyRecovery_SendGoal_Response__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__DummyRecovery_SendGoal_Response__init(message_memory);
}

void DummyRecovery_SendGoal_Response__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Response_fini_function(void * message_memory)
{
  nav2_msgs__action__DummyRecovery_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DummyRecovery_SendGoal_Response__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyRecovery_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyRecovery_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DummyRecovery_SendGoal_Response__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Response_message_members = {
  "nav2_msgs__action",  // message namespace
  "DummyRecovery_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__action__DummyRecovery_SendGoal_Response),
  DummyRecovery_SendGoal_Response__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Response_message_member_array,  // message members
  DummyRecovery_SendGoal_Response__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DummyRecovery_SendGoal_Response__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DummyRecovery_SendGoal_Response__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Response_message_type_support_handle = {
  0,
  &DummyRecovery_SendGoal_Response__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyRecovery_SendGoal_Response)() {
  DummyRecovery_SendGoal_Response__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!DummyRecovery_SendGoal_Response__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    DummyRecovery_SendGoal_Response__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DummyRecovery_SendGoal_Response__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nav2_msgs__action__detail__dummy_recovery__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_service_members = {
  "nav2_msgs__action",  // service namespace
  "DummyRecovery_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nav2_msgs__action__detail__dummy_recovery__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // nav2_msgs__action__detail__dummy_recovery__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t nav2_msgs__action__detail__dummy_recovery__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_service_type_support_handle = {
  0,
  &nav2_msgs__action__detail__dummy_recovery__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyRecovery_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyRecovery_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyRecovery_SendGoal)() {
  if (!nav2_msgs__action__detail__dummy_recovery__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_service_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__detail__dummy_recovery__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nav2_msgs__action__detail__dummy_recovery__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyRecovery_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyRecovery_SendGoal_Response)()->data;
  }

  return &nav2_msgs__action__detail__dummy_recovery__rosidl_typesupport_introspection_c__DummyRecovery_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__functions.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DummyRecovery_GetResult_Request__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__DummyRecovery_GetResult_Request__init(message_memory);
}

void DummyRecovery_GetResult_Request__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Request_fini_function(void * message_memory)
{
  nav2_msgs__action__DummyRecovery_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DummyRecovery_GetResult_Request__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyRecovery_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DummyRecovery_GetResult_Request__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Request_message_members = {
  "nav2_msgs__action",  // message namespace
  "DummyRecovery_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(nav2_msgs__action__DummyRecovery_GetResult_Request),
  DummyRecovery_GetResult_Request__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Request_message_member_array,  // message members
  DummyRecovery_GetResult_Request__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DummyRecovery_GetResult_Request__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DummyRecovery_GetResult_Request__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Request_message_type_support_handle = {
  0,
  &DummyRecovery_GetResult_Request__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyRecovery_GetResult_Request)() {
  DummyRecovery_GetResult_Request__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!DummyRecovery_GetResult_Request__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    DummyRecovery_GetResult_Request__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DummyRecovery_GetResult_Request__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__functions.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "nav2_msgs/action/dummy_recovery.h"
// Member `result`
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DummyRecovery_GetResult_Response__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__DummyRecovery_GetResult_Response__init(message_memory);
}

void DummyRecovery_GetResult_Response__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Response_fini_function(void * message_memory)
{
  nav2_msgs__action__DummyRecovery_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DummyRecovery_GetResult_Response__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyRecovery_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyRecovery_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DummyRecovery_GetResult_Response__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Response_message_members = {
  "nav2_msgs__action",  // message namespace
  "DummyRecovery_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__action__DummyRecovery_GetResult_Response),
  DummyRecovery_GetResult_Response__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Response_message_member_array,  // message members
  DummyRecovery_GetResult_Response__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DummyRecovery_GetResult_Response__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DummyRecovery_GetResult_Response__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Response_message_type_support_handle = {
  0,
  &DummyRecovery_GetResult_Response__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyRecovery_GetResult_Response)() {
  DummyRecovery_GetResult_Response__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyRecovery_Result)();
  if (!DummyRecovery_GetResult_Response__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    DummyRecovery_GetResult_Response__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DummyRecovery_GetResult_Response__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nav2_msgs__action__detail__dummy_recovery__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_service_members = {
  "nav2_msgs__action",  // service namespace
  "DummyRecovery_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nav2_msgs__action__detail__dummy_recovery__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // nav2_msgs__action__detail__dummy_recovery__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t nav2_msgs__action__detail__dummy_recovery__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_service_type_support_handle = {
  0,
  &nav2_msgs__action__detail__dummy_recovery__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyRecovery_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyRecovery_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyRecovery_GetResult)() {
  if (!nav2_msgs__action__detail__dummy_recovery__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_service_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__detail__dummy_recovery__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nav2_msgs__action__detail__dummy_recovery__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyRecovery_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyRecovery_GetResult_Response)()->data;
  }

  return &nav2_msgs__action__detail__dummy_recovery__rosidl_typesupport_introspection_c__DummyRecovery_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__functions.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "nav2_msgs/action/dummy_recovery.h"
// Member `feedback`
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DummyRecovery_FeedbackMessage__rosidl_typesupport_introspection_c__DummyRecovery_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__DummyRecovery_FeedbackMessage__init(message_memory);
}

void DummyRecovery_FeedbackMessage__rosidl_typesupport_introspection_c__DummyRecovery_FeedbackMessage_fini_function(void * message_memory)
{
  nav2_msgs__action__DummyRecovery_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DummyRecovery_FeedbackMessage__rosidl_typesupport_introspection_c__DummyRecovery_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyRecovery_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyRecovery_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DummyRecovery_FeedbackMessage__rosidl_typesupport_introspection_c__DummyRecovery_FeedbackMessage_message_members = {
  "nav2_msgs__action",  // message namespace
  "DummyRecovery_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__action__DummyRecovery_FeedbackMessage),
  DummyRecovery_FeedbackMessage__rosidl_typesupport_introspection_c__DummyRecovery_FeedbackMessage_message_member_array,  // message members
  DummyRecovery_FeedbackMessage__rosidl_typesupport_introspection_c__DummyRecovery_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  DummyRecovery_FeedbackMessage__rosidl_typesupport_introspection_c__DummyRecovery_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DummyRecovery_FeedbackMessage__rosidl_typesupport_introspection_c__DummyRecovery_FeedbackMessage_message_type_support_handle = {
  0,
  &DummyRecovery_FeedbackMessage__rosidl_typesupport_introspection_c__DummyRecovery_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyRecovery_FeedbackMessage)() {
  DummyRecovery_FeedbackMessage__rosidl_typesupport_introspection_c__DummyRecovery_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  DummyRecovery_FeedbackMessage__rosidl_typesupport_introspection_c__DummyRecovery_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyRecovery_Feedback)();
  if (!DummyRecovery_FeedbackMessage__rosidl_typesupport_introspection_c__DummyRecovery_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    DummyRecovery_FeedbackMessage__rosidl_typesupport_introspection_c__DummyRecovery_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DummyRecovery_FeedbackMessage__rosidl_typesupport_introspection_c__DummyRecovery_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
