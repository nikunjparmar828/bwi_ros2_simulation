// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from bwi_perception_interface:msg/DlAmclCoords.idl
// generated code does not contain a copyright notice

#ifndef BWI_PERCEPTION_INTERFACE__MSG__DETAIL__DL_AMCL_COORDS__FUNCTIONS_H_
#define BWI_PERCEPTION_INTERFACE__MSG__DETAIL__DL_AMCL_COORDS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "bwi_perception_interface/msg/rosidl_generator_c__visibility_control.h"

#include "bwi_perception_interface/msg/detail/dl_amcl_coords__struct.h"

/// Initialize msg/DlAmclCoords message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bwi_perception_interface__msg__DlAmclCoords
 * )) before or use
 * bwi_perception_interface__msg__DlAmclCoords__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bwi_perception_interface
bool
bwi_perception_interface__msg__DlAmclCoords__init(bwi_perception_interface__msg__DlAmclCoords * msg);

/// Finalize msg/DlAmclCoords message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bwi_perception_interface
void
bwi_perception_interface__msg__DlAmclCoords__fini(bwi_perception_interface__msg__DlAmclCoords * msg);

/// Create msg/DlAmclCoords message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bwi_perception_interface__msg__DlAmclCoords__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bwi_perception_interface
bwi_perception_interface__msg__DlAmclCoords *
bwi_perception_interface__msg__DlAmclCoords__create();

/// Destroy msg/DlAmclCoords message.
/**
 * It calls
 * bwi_perception_interface__msg__DlAmclCoords__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bwi_perception_interface
void
bwi_perception_interface__msg__DlAmclCoords__destroy(bwi_perception_interface__msg__DlAmclCoords * msg);

/// Check for msg/DlAmclCoords message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bwi_perception_interface
bool
bwi_perception_interface__msg__DlAmclCoords__are_equal(const bwi_perception_interface__msg__DlAmclCoords * lhs, const bwi_perception_interface__msg__DlAmclCoords * rhs);

/// Copy a msg/DlAmclCoords message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bwi_perception_interface
bool
bwi_perception_interface__msg__DlAmclCoords__copy(
  const bwi_perception_interface__msg__DlAmclCoords * input,
  bwi_perception_interface__msg__DlAmclCoords * output);

/// Initialize array of msg/DlAmclCoords messages.
/**
 * It allocates the memory for the number of elements and calls
 * bwi_perception_interface__msg__DlAmclCoords__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bwi_perception_interface
bool
bwi_perception_interface__msg__DlAmclCoords__Sequence__init(bwi_perception_interface__msg__DlAmclCoords__Sequence * array, size_t size);

/// Finalize array of msg/DlAmclCoords messages.
/**
 * It calls
 * bwi_perception_interface__msg__DlAmclCoords__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bwi_perception_interface
void
bwi_perception_interface__msg__DlAmclCoords__Sequence__fini(bwi_perception_interface__msg__DlAmclCoords__Sequence * array);

/// Create array of msg/DlAmclCoords messages.
/**
 * It allocates the memory for the array and calls
 * bwi_perception_interface__msg__DlAmclCoords__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bwi_perception_interface
bwi_perception_interface__msg__DlAmclCoords__Sequence *
bwi_perception_interface__msg__DlAmclCoords__Sequence__create(size_t size);

/// Destroy array of msg/DlAmclCoords messages.
/**
 * It calls
 * bwi_perception_interface__msg__DlAmclCoords__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bwi_perception_interface
void
bwi_perception_interface__msg__DlAmclCoords__Sequence__destroy(bwi_perception_interface__msg__DlAmclCoords__Sequence * array);

/// Check for msg/DlAmclCoords message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bwi_perception_interface
bool
bwi_perception_interface__msg__DlAmclCoords__Sequence__are_equal(const bwi_perception_interface__msg__DlAmclCoords__Sequence * lhs, const bwi_perception_interface__msg__DlAmclCoords__Sequence * rhs);

/// Copy an array of msg/DlAmclCoords messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bwi_perception_interface
bool
bwi_perception_interface__msg__DlAmclCoords__Sequence__copy(
  const bwi_perception_interface__msg__DlAmclCoords__Sequence * input,
  bwi_perception_interface__msg__DlAmclCoords__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BWI_PERCEPTION_INTERFACE__MSG__DETAIL__DL_AMCL_COORDS__FUNCTIONS_H_
