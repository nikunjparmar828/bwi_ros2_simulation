// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bwi_perception_interface:msg/DlAmclCoords.idl
// generated code does not contain a copyright notice

#ifndef BWI_PERCEPTION_INTERFACE__MSG__DETAIL__DL_AMCL_COORDS__STRUCT_H_
#define BWI_PERCEPTION_INTERFACE__MSG__DETAIL__DL_AMCL_COORDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DlAmclCoords in the package bwi_perception_interface.
typedef struct bwi_perception_interface__msg__DlAmclCoords
{
  double x;
  double y;
  double depth;
} bwi_perception_interface__msg__DlAmclCoords;

// Struct for a sequence of bwi_perception_interface__msg__DlAmclCoords.
typedef struct bwi_perception_interface__msg__DlAmclCoords__Sequence
{
  bwi_perception_interface__msg__DlAmclCoords * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bwi_perception_interface__msg__DlAmclCoords__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BWI_PERCEPTION_INTERFACE__MSG__DETAIL__DL_AMCL_COORDS__STRUCT_H_
