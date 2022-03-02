// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gazebo_msgs:msg/PerformanceMetrics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gazebo_msgs/msg/detail/performance_metrics__rosidl_typesupport_introspection_c.h"
#include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gazebo_msgs/msg/detail/performance_metrics__functions.h"
#include "gazebo_msgs/msg/detail/performance_metrics__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `sensors`
#include "gazebo_msgs/msg/sensor_performance_metric.h"
// Member `sensors`
#include "gazebo_msgs/msg/detail/sensor_performance_metric__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PerformanceMetrics__rosidl_typesupport_introspection_c__PerformanceMetrics_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gazebo_msgs__msg__PerformanceMetrics__init(message_memory);
}

void PerformanceMetrics__rosidl_typesupport_introspection_c__PerformanceMetrics_fini_function(void * message_memory)
{
  gazebo_msgs__msg__PerformanceMetrics__fini(message_memory);
}

size_t PerformanceMetrics__rosidl_typesupport_introspection_c__size_function__SensorPerformanceMetric__sensors(
  const void * untyped_member)
{
  const gazebo_msgs__msg__SensorPerformanceMetric__Sequence * member =
    (const gazebo_msgs__msg__SensorPerformanceMetric__Sequence *)(untyped_member);
  return member->size;
}

const void * PerformanceMetrics__rosidl_typesupport_introspection_c__get_const_function__SensorPerformanceMetric__sensors(
  const void * untyped_member, size_t index)
{
  const gazebo_msgs__msg__SensorPerformanceMetric__Sequence * member =
    (const gazebo_msgs__msg__SensorPerformanceMetric__Sequence *)(untyped_member);
  return &member->data[index];
}

void * PerformanceMetrics__rosidl_typesupport_introspection_c__get_function__SensorPerformanceMetric__sensors(
  void * untyped_member, size_t index)
{
  gazebo_msgs__msg__SensorPerformanceMetric__Sequence * member =
    (gazebo_msgs__msg__SensorPerformanceMetric__Sequence *)(untyped_member);
  return &member->data[index];
}

bool PerformanceMetrics__rosidl_typesupport_introspection_c__resize_function__SensorPerformanceMetric__sensors(
  void * untyped_member, size_t size)
{
  gazebo_msgs__msg__SensorPerformanceMetric__Sequence * member =
    (gazebo_msgs__msg__SensorPerformanceMetric__Sequence *)(untyped_member);
  gazebo_msgs__msg__SensorPerformanceMetric__Sequence__fini(member);
  return gazebo_msgs__msg__SensorPerformanceMetric__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember PerformanceMetrics__rosidl_typesupport_introspection_c__PerformanceMetrics_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__PerformanceMetrics, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "real_time_factor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__PerformanceMetrics, real_time_factor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__PerformanceMetrics, sensors),  // bytes offset in struct
    NULL,  // default value
    PerformanceMetrics__rosidl_typesupport_introspection_c__size_function__SensorPerformanceMetric__sensors,  // size() function pointer
    PerformanceMetrics__rosidl_typesupport_introspection_c__get_const_function__SensorPerformanceMetric__sensors,  // get_const(index) function pointer
    PerformanceMetrics__rosidl_typesupport_introspection_c__get_function__SensorPerformanceMetric__sensors,  // get(index) function pointer
    PerformanceMetrics__rosidl_typesupport_introspection_c__resize_function__SensorPerformanceMetric__sensors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PerformanceMetrics__rosidl_typesupport_introspection_c__PerformanceMetrics_message_members = {
  "gazebo_msgs__msg",  // message namespace
  "PerformanceMetrics",  // message name
  3,  // number of fields
  sizeof(gazebo_msgs__msg__PerformanceMetrics),
  PerformanceMetrics__rosidl_typesupport_introspection_c__PerformanceMetrics_message_member_array,  // message members
  PerformanceMetrics__rosidl_typesupport_introspection_c__PerformanceMetrics_init_function,  // function to initialize message memory (memory has to be allocated)
  PerformanceMetrics__rosidl_typesupport_introspection_c__PerformanceMetrics_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PerformanceMetrics__rosidl_typesupport_introspection_c__PerformanceMetrics_message_type_support_handle = {
  0,
  &PerformanceMetrics__rosidl_typesupport_introspection_c__PerformanceMetrics_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, msg, PerformanceMetrics)() {
  PerformanceMetrics__rosidl_typesupport_introspection_c__PerformanceMetrics_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  PerformanceMetrics__rosidl_typesupport_introspection_c__PerformanceMetrics_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, msg, SensorPerformanceMetric)();
  if (!PerformanceMetrics__rosidl_typesupport_introspection_c__PerformanceMetrics_message_type_support_handle.typesupport_identifier) {
    PerformanceMetrics__rosidl_typesupport_introspection_c__PerformanceMetrics_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PerformanceMetrics__rosidl_typesupport_introspection_c__PerformanceMetrics_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
