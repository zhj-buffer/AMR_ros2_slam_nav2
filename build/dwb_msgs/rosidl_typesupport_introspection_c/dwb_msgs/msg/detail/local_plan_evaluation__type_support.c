// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dwb_msgs:msg/LocalPlanEvaluation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dwb_msgs/msg/detail/local_plan_evaluation__rosidl_typesupport_introspection_c.h"
#include "dwb_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dwb_msgs/msg/detail/local_plan_evaluation__functions.h"
#include "dwb_msgs/msg/detail/local_plan_evaluation__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `twists`
#include "dwb_msgs/msg/trajectory_score.h"
// Member `twists`
#include "dwb_msgs/msg/detail/trajectory_score__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LocalPlanEvaluation__rosidl_typesupport_introspection_c__LocalPlanEvaluation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dwb_msgs__msg__LocalPlanEvaluation__init(message_memory);
}

void LocalPlanEvaluation__rosidl_typesupport_introspection_c__LocalPlanEvaluation_fini_function(void * message_memory)
{
  dwb_msgs__msg__LocalPlanEvaluation__fini(message_memory);
}

size_t LocalPlanEvaluation__rosidl_typesupport_introspection_c__size_function__TrajectoryScore__twists(
  const void * untyped_member)
{
  const dwb_msgs__msg__TrajectoryScore__Sequence * member =
    (const dwb_msgs__msg__TrajectoryScore__Sequence *)(untyped_member);
  return member->size;
}

const void * LocalPlanEvaluation__rosidl_typesupport_introspection_c__get_const_function__TrajectoryScore__twists(
  const void * untyped_member, size_t index)
{
  const dwb_msgs__msg__TrajectoryScore__Sequence * member =
    (const dwb_msgs__msg__TrajectoryScore__Sequence *)(untyped_member);
  return &member->data[index];
}

void * LocalPlanEvaluation__rosidl_typesupport_introspection_c__get_function__TrajectoryScore__twists(
  void * untyped_member, size_t index)
{
  dwb_msgs__msg__TrajectoryScore__Sequence * member =
    (dwb_msgs__msg__TrajectoryScore__Sequence *)(untyped_member);
  return &member->data[index];
}

bool LocalPlanEvaluation__rosidl_typesupport_introspection_c__resize_function__TrajectoryScore__twists(
  void * untyped_member, size_t size)
{
  dwb_msgs__msg__TrajectoryScore__Sequence * member =
    (dwb_msgs__msg__TrajectoryScore__Sequence *)(untyped_member);
  dwb_msgs__msg__TrajectoryScore__Sequence__fini(member);
  return dwb_msgs__msg__TrajectoryScore__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember LocalPlanEvaluation__rosidl_typesupport_introspection_c__LocalPlanEvaluation_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs__msg__LocalPlanEvaluation, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "twists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs__msg__LocalPlanEvaluation, twists),  // bytes offset in struct
    NULL,  // default value
    LocalPlanEvaluation__rosidl_typesupport_introspection_c__size_function__TrajectoryScore__twists,  // size() function pointer
    LocalPlanEvaluation__rosidl_typesupport_introspection_c__get_const_function__TrajectoryScore__twists,  // get_const(index) function pointer
    LocalPlanEvaluation__rosidl_typesupport_introspection_c__get_function__TrajectoryScore__twists,  // get(index) function pointer
    LocalPlanEvaluation__rosidl_typesupport_introspection_c__resize_function__TrajectoryScore__twists  // resize(index) function pointer
  },
  {
    "best_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs__msg__LocalPlanEvaluation, best_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "worst_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs__msg__LocalPlanEvaluation, worst_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LocalPlanEvaluation__rosidl_typesupport_introspection_c__LocalPlanEvaluation_message_members = {
  "dwb_msgs__msg",  // message namespace
  "LocalPlanEvaluation",  // message name
  4,  // number of fields
  sizeof(dwb_msgs__msg__LocalPlanEvaluation),
  LocalPlanEvaluation__rosidl_typesupport_introspection_c__LocalPlanEvaluation_message_member_array,  // message members
  LocalPlanEvaluation__rosidl_typesupport_introspection_c__LocalPlanEvaluation_init_function,  // function to initialize message memory (memory has to be allocated)
  LocalPlanEvaluation__rosidl_typesupport_introspection_c__LocalPlanEvaluation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LocalPlanEvaluation__rosidl_typesupport_introspection_c__LocalPlanEvaluation_message_type_support_handle = {
  0,
  &LocalPlanEvaluation__rosidl_typesupport_introspection_c__LocalPlanEvaluation_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dwb_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, msg, LocalPlanEvaluation)() {
  LocalPlanEvaluation__rosidl_typesupport_introspection_c__LocalPlanEvaluation_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  LocalPlanEvaluation__rosidl_typesupport_introspection_c__LocalPlanEvaluation_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, msg, TrajectoryScore)();
  if (!LocalPlanEvaluation__rosidl_typesupport_introspection_c__LocalPlanEvaluation_message_type_support_handle.typesupport_identifier) {
    LocalPlanEvaluation__rosidl_typesupport_introspection_c__LocalPlanEvaluation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LocalPlanEvaluation__rosidl_typesupport_introspection_c__LocalPlanEvaluation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
