// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rslidar_msg:msg/RslidarScan.idl
// generated code does not contain a copyright notice

#ifndef RSLIDAR_MSG__MSG__DETAIL__RSLIDAR_SCAN__FUNCTIONS_H_
#define RSLIDAR_MSG__MSG__DETAIL__RSLIDAR_SCAN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rslidar_msg/msg/rosidl_generator_c__visibility_control.h"

#include "rslidar_msg/msg/detail/rslidar_scan__struct.h"

/// Initialize msg/RslidarScan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rslidar_msg__msg__RslidarScan
 * )) before or use
 * rslidar_msg__msg__RslidarScan__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rslidar_msg
bool
rslidar_msg__msg__RslidarScan__init(rslidar_msg__msg__RslidarScan * msg);

/// Finalize msg/RslidarScan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rslidar_msg
void
rslidar_msg__msg__RslidarScan__fini(rslidar_msg__msg__RslidarScan * msg);

/// Create msg/RslidarScan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rslidar_msg__msg__RslidarScan__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rslidar_msg
rslidar_msg__msg__RslidarScan *
rslidar_msg__msg__RslidarScan__create();

/// Destroy msg/RslidarScan message.
/**
 * It calls
 * rslidar_msg__msg__RslidarScan__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rslidar_msg
void
rslidar_msg__msg__RslidarScan__destroy(rslidar_msg__msg__RslidarScan * msg);


/// Initialize array of msg/RslidarScan messages.
/**
 * It allocates the memory for the number of elements and calls
 * rslidar_msg__msg__RslidarScan__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rslidar_msg
bool
rslidar_msg__msg__RslidarScan__Sequence__init(rslidar_msg__msg__RslidarScan__Sequence * array, size_t size);

/// Finalize array of msg/RslidarScan messages.
/**
 * It calls
 * rslidar_msg__msg__RslidarScan__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rslidar_msg
void
rslidar_msg__msg__RslidarScan__Sequence__fini(rslidar_msg__msg__RslidarScan__Sequence * array);

/// Create array of msg/RslidarScan messages.
/**
 * It allocates the memory for the array and calls
 * rslidar_msg__msg__RslidarScan__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rslidar_msg
rslidar_msg__msg__RslidarScan__Sequence *
rslidar_msg__msg__RslidarScan__Sequence__create(size_t size);

/// Destroy array of msg/RslidarScan messages.
/**
 * It calls
 * rslidar_msg__msg__RslidarScan__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rslidar_msg
void
rslidar_msg__msg__RslidarScan__Sequence__destroy(rslidar_msg__msg__RslidarScan__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // RSLIDAR_MSG__MSG__DETAIL__RSLIDAR_SCAN__FUNCTIONS_H_
