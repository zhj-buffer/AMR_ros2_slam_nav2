// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dwb_msgs:msg/LocalPlanEvaluation.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__MSG__DETAIL__LOCAL_PLAN_EVALUATION__FUNCTIONS_H_
#define DWB_MSGS__MSG__DETAIL__LOCAL_PLAN_EVALUATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "dwb_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "dwb_msgs/msg/detail/local_plan_evaluation__struct.h"

/// Initialize msg/LocalPlanEvaluation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dwb_msgs__msg__LocalPlanEvaluation
 * )) before or use
 * dwb_msgs__msg__LocalPlanEvaluation__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
bool
dwb_msgs__msg__LocalPlanEvaluation__init(dwb_msgs__msg__LocalPlanEvaluation * msg);

/// Finalize msg/LocalPlanEvaluation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
void
dwb_msgs__msg__LocalPlanEvaluation__fini(dwb_msgs__msg__LocalPlanEvaluation * msg);

/// Create msg/LocalPlanEvaluation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dwb_msgs__msg__LocalPlanEvaluation__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
dwb_msgs__msg__LocalPlanEvaluation *
dwb_msgs__msg__LocalPlanEvaluation__create();

/// Destroy msg/LocalPlanEvaluation message.
/**
 * It calls
 * dwb_msgs__msg__LocalPlanEvaluation__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
void
dwb_msgs__msg__LocalPlanEvaluation__destroy(dwb_msgs__msg__LocalPlanEvaluation * msg);


/// Initialize array of msg/LocalPlanEvaluation messages.
/**
 * It allocates the memory for the number of elements and calls
 * dwb_msgs__msg__LocalPlanEvaluation__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
bool
dwb_msgs__msg__LocalPlanEvaluation__Sequence__init(dwb_msgs__msg__LocalPlanEvaluation__Sequence * array, size_t size);

/// Finalize array of msg/LocalPlanEvaluation messages.
/**
 * It calls
 * dwb_msgs__msg__LocalPlanEvaluation__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
void
dwb_msgs__msg__LocalPlanEvaluation__Sequence__fini(dwb_msgs__msg__LocalPlanEvaluation__Sequence * array);

/// Create array of msg/LocalPlanEvaluation messages.
/**
 * It allocates the memory for the array and calls
 * dwb_msgs__msg__LocalPlanEvaluation__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
dwb_msgs__msg__LocalPlanEvaluation__Sequence *
dwb_msgs__msg__LocalPlanEvaluation__Sequence__create(size_t size);

/// Destroy array of msg/LocalPlanEvaluation messages.
/**
 * It calls
 * dwb_msgs__msg__LocalPlanEvaluation__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
void
dwb_msgs__msg__LocalPlanEvaluation__Sequence__destroy(dwb_msgs__msg__LocalPlanEvaluation__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // DWB_MSGS__MSG__DETAIL__LOCAL_PLAN_EVALUATION__FUNCTIONS_H_
