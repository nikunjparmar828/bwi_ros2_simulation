// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:msg/Configuration.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__CONFIGURATION__STRUCT_H_
#define SEGWAY_MSGS__MSG__DETAIL__CONFIGURATION__STRUCT_H_

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
// Member 'eth_ip_address'
// Member 'eth_subnet_mask'
// Member 'eth_gateway'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Configuration in the package segway_msgs.
typedef struct segway_msgs__msg__Configuration
{
  std_msgs__msg__Header header;
  float teleop_vel_limit_mps;
  float teleop_accel_limit_mps2;
  float teleop_yaw_rate_limit_rps;
  float teleop_yaw_accel_limit_rps2;
  float vel_limit_mps;
  float accel_limit_mps2;
  float decel_limit_mps2;
  float dtz_decel_limit_mps2;
  float lateral_accel_limit_mps2;
  float yaw_rate_limit_rps;
  float yaw_accel_limit_rps2;
  float tire_diameter_m;
  float wheelbase_length_m;
  float wheel_track_width_m;
  float gear_ratio;
  uint32_t config_bitmap;
  rosidl_runtime_c__String eth_ip_address;
  uint32_t eth_port_number;
  rosidl_runtime_c__String eth_subnet_mask;
  rosidl_runtime_c__String eth_gateway;
} segway_msgs__msg__Configuration;

// Struct for a sequence of segway_msgs__msg__Configuration.
typedef struct segway_msgs__msg__Configuration__Sequence
{
  segway_msgs__msg__Configuration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__msg__Configuration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__MSG__DETAIL__CONFIGURATION__STRUCT_H_
