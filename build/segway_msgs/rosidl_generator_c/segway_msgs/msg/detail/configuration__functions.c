// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from segway_msgs:msg/Configuration.idl
// generated code does not contain a copyright notice
#include "segway_msgs/msg/detail/configuration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `eth_ip_address`
// Member `eth_subnet_mask`
// Member `eth_gateway`
#include "rosidl_runtime_c/string_functions.h"

bool
segway_msgs__msg__Configuration__init(segway_msgs__msg__Configuration * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    segway_msgs__msg__Configuration__fini(msg);
    return false;
  }
  // teleop_vel_limit_mps
  // teleop_accel_limit_mps2
  // teleop_yaw_rate_limit_rps
  // teleop_yaw_accel_limit_rps2
  // vel_limit_mps
  // accel_limit_mps2
  // decel_limit_mps2
  // dtz_decel_limit_mps2
  // lateral_accel_limit_mps2
  // yaw_rate_limit_rps
  // yaw_accel_limit_rps2
  // tire_diameter_m
  // wheelbase_length_m
  // wheel_track_width_m
  // gear_ratio
  // config_bitmap
  // eth_ip_address
  if (!rosidl_runtime_c__String__init(&msg->eth_ip_address)) {
    segway_msgs__msg__Configuration__fini(msg);
    return false;
  }
  // eth_port_number
  // eth_subnet_mask
  if (!rosidl_runtime_c__String__init(&msg->eth_subnet_mask)) {
    segway_msgs__msg__Configuration__fini(msg);
    return false;
  }
  // eth_gateway
  if (!rosidl_runtime_c__String__init(&msg->eth_gateway)) {
    segway_msgs__msg__Configuration__fini(msg);
    return false;
  }
  return true;
}

void
segway_msgs__msg__Configuration__fini(segway_msgs__msg__Configuration * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // teleop_vel_limit_mps
  // teleop_accel_limit_mps2
  // teleop_yaw_rate_limit_rps
  // teleop_yaw_accel_limit_rps2
  // vel_limit_mps
  // accel_limit_mps2
  // decel_limit_mps2
  // dtz_decel_limit_mps2
  // lateral_accel_limit_mps2
  // yaw_rate_limit_rps
  // yaw_accel_limit_rps2
  // tire_diameter_m
  // wheelbase_length_m
  // wheel_track_width_m
  // gear_ratio
  // config_bitmap
  // eth_ip_address
  rosidl_runtime_c__String__fini(&msg->eth_ip_address);
  // eth_port_number
  // eth_subnet_mask
  rosidl_runtime_c__String__fini(&msg->eth_subnet_mask);
  // eth_gateway
  rosidl_runtime_c__String__fini(&msg->eth_gateway);
}

bool
segway_msgs__msg__Configuration__are_equal(const segway_msgs__msg__Configuration * lhs, const segway_msgs__msg__Configuration * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // teleop_vel_limit_mps
  if (lhs->teleop_vel_limit_mps != rhs->teleop_vel_limit_mps) {
    return false;
  }
  // teleop_accel_limit_mps2
  if (lhs->teleop_accel_limit_mps2 != rhs->teleop_accel_limit_mps2) {
    return false;
  }
  // teleop_yaw_rate_limit_rps
  if (lhs->teleop_yaw_rate_limit_rps != rhs->teleop_yaw_rate_limit_rps) {
    return false;
  }
  // teleop_yaw_accel_limit_rps2
  if (lhs->teleop_yaw_accel_limit_rps2 != rhs->teleop_yaw_accel_limit_rps2) {
    return false;
  }
  // vel_limit_mps
  if (lhs->vel_limit_mps != rhs->vel_limit_mps) {
    return false;
  }
  // accel_limit_mps2
  if (lhs->accel_limit_mps2 != rhs->accel_limit_mps2) {
    return false;
  }
  // decel_limit_mps2
  if (lhs->decel_limit_mps2 != rhs->decel_limit_mps2) {
    return false;
  }
  // dtz_decel_limit_mps2
  if (lhs->dtz_decel_limit_mps2 != rhs->dtz_decel_limit_mps2) {
    return false;
  }
  // lateral_accel_limit_mps2
  if (lhs->lateral_accel_limit_mps2 != rhs->lateral_accel_limit_mps2) {
    return false;
  }
  // yaw_rate_limit_rps
  if (lhs->yaw_rate_limit_rps != rhs->yaw_rate_limit_rps) {
    return false;
  }
  // yaw_accel_limit_rps2
  if (lhs->yaw_accel_limit_rps2 != rhs->yaw_accel_limit_rps2) {
    return false;
  }
  // tire_diameter_m
  if (lhs->tire_diameter_m != rhs->tire_diameter_m) {
    return false;
  }
  // wheelbase_length_m
  if (lhs->wheelbase_length_m != rhs->wheelbase_length_m) {
    return false;
  }
  // wheel_track_width_m
  if (lhs->wheel_track_width_m != rhs->wheel_track_width_m) {
    return false;
  }
  // gear_ratio
  if (lhs->gear_ratio != rhs->gear_ratio) {
    return false;
  }
  // config_bitmap
  if (lhs->config_bitmap != rhs->config_bitmap) {
    return false;
  }
  // eth_ip_address
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->eth_ip_address), &(rhs->eth_ip_address)))
  {
    return false;
  }
  // eth_port_number
  if (lhs->eth_port_number != rhs->eth_port_number) {
    return false;
  }
  // eth_subnet_mask
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->eth_subnet_mask), &(rhs->eth_subnet_mask)))
  {
    return false;
  }
  // eth_gateway
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->eth_gateway), &(rhs->eth_gateway)))
  {
    return false;
  }
  return true;
}

bool
segway_msgs__msg__Configuration__copy(
  const segway_msgs__msg__Configuration * input,
  segway_msgs__msg__Configuration * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // teleop_vel_limit_mps
  output->teleop_vel_limit_mps = input->teleop_vel_limit_mps;
  // teleop_accel_limit_mps2
  output->teleop_accel_limit_mps2 = input->teleop_accel_limit_mps2;
  // teleop_yaw_rate_limit_rps
  output->teleop_yaw_rate_limit_rps = input->teleop_yaw_rate_limit_rps;
  // teleop_yaw_accel_limit_rps2
  output->teleop_yaw_accel_limit_rps2 = input->teleop_yaw_accel_limit_rps2;
  // vel_limit_mps
  output->vel_limit_mps = input->vel_limit_mps;
  // accel_limit_mps2
  output->accel_limit_mps2 = input->accel_limit_mps2;
  // decel_limit_mps2
  output->decel_limit_mps2 = input->decel_limit_mps2;
  // dtz_decel_limit_mps2
  output->dtz_decel_limit_mps2 = input->dtz_decel_limit_mps2;
  // lateral_accel_limit_mps2
  output->lateral_accel_limit_mps2 = input->lateral_accel_limit_mps2;
  // yaw_rate_limit_rps
  output->yaw_rate_limit_rps = input->yaw_rate_limit_rps;
  // yaw_accel_limit_rps2
  output->yaw_accel_limit_rps2 = input->yaw_accel_limit_rps2;
  // tire_diameter_m
  output->tire_diameter_m = input->tire_diameter_m;
  // wheelbase_length_m
  output->wheelbase_length_m = input->wheelbase_length_m;
  // wheel_track_width_m
  output->wheel_track_width_m = input->wheel_track_width_m;
  // gear_ratio
  output->gear_ratio = input->gear_ratio;
  // config_bitmap
  output->config_bitmap = input->config_bitmap;
  // eth_ip_address
  if (!rosidl_runtime_c__String__copy(
      &(input->eth_ip_address), &(output->eth_ip_address)))
  {
    return false;
  }
  // eth_port_number
  output->eth_port_number = input->eth_port_number;
  // eth_subnet_mask
  if (!rosidl_runtime_c__String__copy(
      &(input->eth_subnet_mask), &(output->eth_subnet_mask)))
  {
    return false;
  }
  // eth_gateway
  if (!rosidl_runtime_c__String__copy(
      &(input->eth_gateway), &(output->eth_gateway)))
  {
    return false;
  }
  return true;
}

segway_msgs__msg__Configuration *
segway_msgs__msg__Configuration__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Configuration * msg = (segway_msgs__msg__Configuration *)allocator.allocate(sizeof(segway_msgs__msg__Configuration), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__msg__Configuration));
  bool success = segway_msgs__msg__Configuration__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__msg__Configuration__destroy(segway_msgs__msg__Configuration * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__msg__Configuration__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__msg__Configuration__Sequence__init(segway_msgs__msg__Configuration__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Configuration * data = NULL;

  if (size) {
    data = (segway_msgs__msg__Configuration *)allocator.zero_allocate(size, sizeof(segway_msgs__msg__Configuration), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__msg__Configuration__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__msg__Configuration__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
segway_msgs__msg__Configuration__Sequence__fini(segway_msgs__msg__Configuration__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      segway_msgs__msg__Configuration__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

segway_msgs__msg__Configuration__Sequence *
segway_msgs__msg__Configuration__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Configuration__Sequence * array = (segway_msgs__msg__Configuration__Sequence *)allocator.allocate(sizeof(segway_msgs__msg__Configuration__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__msg__Configuration__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__msg__Configuration__Sequence__destroy(segway_msgs__msg__Configuration__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__msg__Configuration__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__msg__Configuration__Sequence__are_equal(const segway_msgs__msg__Configuration__Sequence * lhs, const segway_msgs__msg__Configuration__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__msg__Configuration__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__msg__Configuration__Sequence__copy(
  const segway_msgs__msg__Configuration__Sequence * input,
  segway_msgs__msg__Configuration__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__msg__Configuration);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__msg__Configuration * data =
      (segway_msgs__msg__Configuration *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__msg__Configuration__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__msg__Configuration__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__msg__Configuration__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
