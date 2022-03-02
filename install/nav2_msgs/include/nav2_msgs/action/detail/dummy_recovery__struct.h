// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:action/DummyRecovery.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__ACTION__DETAIL__DUMMY_RECOVERY__STRUCT_H_
#define NAV2_MSGS__ACTION__DETAIL__DUMMY_RECOVERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "std_msgs/msg/detail/string__struct.h"

// Struct defined in action/DummyRecovery in the package nav2_msgs.
typedef struct nav2_msgs__action__DummyRecovery_Goal
{
  std_msgs__msg__String command;
} nav2_msgs__action__DummyRecovery_Goal;

// Struct for a sequence of nav2_msgs__action__DummyRecovery_Goal.
typedef struct nav2_msgs__action__DummyRecovery_Goal__Sequence
{
  nav2_msgs__action__DummyRecovery_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DummyRecovery_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'total_elapsed_time'
#include "builtin_interfaces/msg/detail/duration__struct.h"

// Struct defined in action/DummyRecovery in the package nav2_msgs.
typedef struct nav2_msgs__action__DummyRecovery_Result
{
  builtin_interfaces__msg__Duration total_elapsed_time;
} nav2_msgs__action__DummyRecovery_Result;

// Struct for a sequence of nav2_msgs__action__DummyRecovery_Result.
typedef struct nav2_msgs__action__DummyRecovery_Result__Sequence
{
  nav2_msgs__action__DummyRecovery_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DummyRecovery_Result__Sequence;


// Constants defined in the message

// Struct defined in action/DummyRecovery in the package nav2_msgs.
typedef struct nav2_msgs__action__DummyRecovery_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} nav2_msgs__action__DummyRecovery_Feedback;

// Struct for a sequence of nav2_msgs__action__DummyRecovery_Feedback.
typedef struct nav2_msgs__action__DummyRecovery_Feedback__Sequence
{
  nav2_msgs__action__DummyRecovery_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DummyRecovery_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "nav2_msgs/action/detail/dummy_recovery__struct.h"

// Struct defined in action/DummyRecovery in the package nav2_msgs.
typedef struct nav2_msgs__action__DummyRecovery_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__DummyRecovery_Goal goal;
} nav2_msgs__action__DummyRecovery_SendGoal_Request;

// Struct for a sequence of nav2_msgs__action__DummyRecovery_SendGoal_Request.
typedef struct nav2_msgs__action__DummyRecovery_SendGoal_Request__Sequence
{
  nav2_msgs__action__DummyRecovery_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DummyRecovery_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/DummyRecovery in the package nav2_msgs.
typedef struct nav2_msgs__action__DummyRecovery_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} nav2_msgs__action__DummyRecovery_SendGoal_Response;

// Struct for a sequence of nav2_msgs__action__DummyRecovery_SendGoal_Response.
typedef struct nav2_msgs__action__DummyRecovery_SendGoal_Response__Sequence
{
  nav2_msgs__action__DummyRecovery_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DummyRecovery_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/DummyRecovery in the package nav2_msgs.
typedef struct nav2_msgs__action__DummyRecovery_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} nav2_msgs__action__DummyRecovery_GetResult_Request;

// Struct for a sequence of nav2_msgs__action__DummyRecovery_GetResult_Request.
typedef struct nav2_msgs__action__DummyRecovery_GetResult_Request__Sequence
{
  nav2_msgs__action__DummyRecovery_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DummyRecovery_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__struct.h"

// Struct defined in action/DummyRecovery in the package nav2_msgs.
typedef struct nav2_msgs__action__DummyRecovery_GetResult_Response
{
  int8_t status;
  nav2_msgs__action__DummyRecovery_Result result;
} nav2_msgs__action__DummyRecovery_GetResult_Response;

// Struct for a sequence of nav2_msgs__action__DummyRecovery_GetResult_Response.
typedef struct nav2_msgs__action__DummyRecovery_GetResult_Response__Sequence
{
  nav2_msgs__action__DummyRecovery_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DummyRecovery_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "nav2_msgs/action/detail/dummy_recovery__struct.h"

// Struct defined in action/DummyRecovery in the package nav2_msgs.
typedef struct nav2_msgs__action__DummyRecovery_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__DummyRecovery_Feedback feedback;
} nav2_msgs__action__DummyRecovery_FeedbackMessage;

// Struct for a sequence of nav2_msgs__action__DummyRecovery_FeedbackMessage.
typedef struct nav2_msgs__action__DummyRecovery_FeedbackMessage__Sequence
{
  nav2_msgs__action__DummyRecovery_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__DummyRecovery_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__ACTION__DETAIL__DUMMY_RECOVERY__STRUCT_H_
