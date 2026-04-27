// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bwi_tasks_interface:msg/VirtualObstacle.idl
// generated code does not contain a copyright notice

#ifndef BWI_TASKS_INTERFACE__MSG__DETAIL__VIRTUAL_OBSTACLE__STRUCT_H_
#define BWI_TASKS_INTERFACE__MSG__DETAIL__VIRTUAL_OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/VirtualObstacle in the package bwi_tasks_interface.
typedef struct bwi_tasks_interface__msg__VirtualObstacle
{
  geometry_msgs__msg__Pose__Sequence poses;
  double radius;
  bool active;
} bwi_tasks_interface__msg__VirtualObstacle;

// Struct for a sequence of bwi_tasks_interface__msg__VirtualObstacle.
typedef struct bwi_tasks_interface__msg__VirtualObstacle__Sequence
{
  bwi_tasks_interface__msg__VirtualObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bwi_tasks_interface__msg__VirtualObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BWI_TASKS_INTERFACE__MSG__DETAIL__VIRTUAL_OBSTACLE__STRUCT_H_
