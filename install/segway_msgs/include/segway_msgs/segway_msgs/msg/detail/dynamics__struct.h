// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:msg/Dynamics.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__DYNAMICS__STRUCT_H_
#define SEGWAY_MSGS__MSG__DETAIL__DYNAMICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'wheel_vel_mps'
// Member 'wheel_pos_m'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Dynamics in the package segway_msgs.
typedef struct segway_msgs__msg__Dynamics
{
  std_msgs__msg__Header header;
  float x_vel_target_mps;
  float y_vel_target_mps;
  float yaw_rate_target_rps;
  float vel_limit_mps;
  float yaw_rate_limit_rps;
  rosidl_runtime_c__float__Sequence wheel_vel_mps;
  rosidl_runtime_c__float__Sequence wheel_pos_m;
  float x_accel_mps2;
  float y_accel_mps2;
  float yaw_accel_mps2;
  float yaw_angle_rad;
  float odom_yaw_angle_rad;
} segway_msgs__msg__Dynamics;

// Struct for a sequence of segway_msgs__msg__Dynamics.
typedef struct segway_msgs__msg__Dynamics__Sequence
{
  segway_msgs__msg__Dynamics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__msg__Dynamics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__MSG__DETAIL__DYNAMICS__STRUCT_H_
