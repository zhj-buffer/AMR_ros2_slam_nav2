// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pcl_msgs:msg/ModelCoefficients.idl
// generated code does not contain a copyright notice

#ifndef PCL_MSGS__MSG__DETAIL__MODEL_COEFFICIENTS__FUNCTIONS_H_
#define PCL_MSGS__MSG__DETAIL__MODEL_COEFFICIENTS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pcl_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "pcl_msgs/msg/detail/model_coefficients__struct.h"

/// Initialize msg/ModelCoefficients message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pcl_msgs__msg__ModelCoefficients
 * )) before or use
 * pcl_msgs__msg__ModelCoefficients__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
bool
pcl_msgs__msg__ModelCoefficients__init(pcl_msgs__msg__ModelCoefficients * msg);

/// Finalize msg/ModelCoefficients message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
void
pcl_msgs__msg__ModelCoefficients__fini(pcl_msgs__msg__ModelCoefficients * msg);

/// Create msg/ModelCoefficients message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pcl_msgs__msg__ModelCoefficients__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
pcl_msgs__msg__ModelCoefficients *
pcl_msgs__msg__ModelCoefficients__create();

/// Destroy msg/ModelCoefficients message.
/**
 * It calls
 * pcl_msgs__msg__ModelCoefficients__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
void
pcl_msgs__msg__ModelCoefficients__destroy(pcl_msgs__msg__ModelCoefficients * msg);


/// Initialize array of msg/ModelCoefficients messages.
/**
 * It allocates the memory for the number of elements and calls
 * pcl_msgs__msg__ModelCoefficients__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
bool
pcl_msgs__msg__ModelCoefficients__Sequence__init(pcl_msgs__msg__ModelCoefficients__Sequence * array, size_t size);

/// Finalize array of msg/ModelCoefficients messages.
/**
 * It calls
 * pcl_msgs__msg__ModelCoefficients__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
void
pcl_msgs__msg__ModelCoefficients__Sequence__fini(pcl_msgs__msg__ModelCoefficients__Sequence * array);

/// Create array of msg/ModelCoefficients messages.
/**
 * It allocates the memory for the array and calls
 * pcl_msgs__msg__ModelCoefficients__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
pcl_msgs__msg__ModelCoefficients__Sequence *
pcl_msgs__msg__ModelCoefficients__Sequence__create(size_t size);

/// Destroy array of msg/ModelCoefficients messages.
/**
 * It calls
 * pcl_msgs__msg__ModelCoefficients__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
void
pcl_msgs__msg__ModelCoefficients__Sequence__destroy(pcl_msgs__msg__ModelCoefficients__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // PCL_MSGS__MSG__DETAIL__MODEL_COEFFICIENTS__FUNCTIONS_H_
