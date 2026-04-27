// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from segway_msgs:msg/Dynamics.idl
// generated code does not contain a copyright notice
#include "segway_msgs/msg/detail/dynamics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `wheel_vel_mps`
// Member `wheel_pos_m`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
segway_msgs__msg__Dynamics__init(segway_msgs__msg__Dynamics * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    segway_msgs__msg__Dynamics__fini(msg);
    return false;
  }
  // x_vel_target_mps
  // y_vel_target_mps
  // yaw_rate_target_rps
  // vel_limit_mps
  // yaw_rate_limit_rps
  // wheel_vel_mps
  if (!rosidl_runtime_c__float__Sequence__init(&msg->wheel_vel_mps, 0)) {
    segway_msgs__msg__Dynamics__fini(msg);
    return false;
  }
  // wheel_pos_m
  if (!rosidl_runtime_c__float__Sequence__init(&msg->wheel_pos_m, 0)) {
    segway_msgs__msg__Dynamics__fini(msg);
    return false;
  }
  // x_accel_mps2
  // y_accel_mps2
  // yaw_accel_mps2
  // yaw_angle_rad
  // odom_yaw_angle_rad
  return true;
}

void
segway_msgs__msg__Dynamics__fini(segway_msgs__msg__Dynamics * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // x_vel_target_mps
  // y_vel_target_mps
  // yaw_rate_target_rps
  // vel_limit_mps
  // yaw_rate_limit_rps
  // wheel_vel_mps
  rosidl_runtime_c__float__Sequence__fini(&msg->wheel_vel_mps);
  // wheel_pos_m
  rosidl_runtime_c__float__Sequence__fini(&msg->wheel_pos_m);
  // x_accel_mps2
  // y_accel_mps2
  // yaw_accel_mps2
  // yaw_angle_rad
  // odom_yaw_angle_rad
}

bool
segway_msgs__msg__Dynamics__are_equal(const segway_msgs__msg__Dynamics * lhs, const segway_msgs__msg__Dynamics * rhs)
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
  // x_vel_target_mps
  if (lhs->x_vel_target_mps != rhs->x_vel_target_mps) {
    return false;
  }
  // y_vel_target_mps
  if (lhs->y_vel_target_mps != rhs->y_vel_target_mps) {
    return false;
  }
  // yaw_rate_target_rps
  if (lhs->yaw_rate_target_rps != rhs->yaw_rate_target_rps) {
    return false;
  }
  // vel_limit_mps
  if (lhs->vel_limit_mps != rhs->vel_limit_mps) {
    return false;
  }
  // yaw_rate_limit_rps
  if (lhs->yaw_rate_limit_rps != rhs->yaw_rate_limit_rps) {
    return false;
  }
  // wheel_vel_mps
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->wheel_vel_mps), &(rhs->wheel_vel_mps)))
  {
    return false;
  }
  // wheel_pos_m
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->wheel_pos_m), &(rhs->wheel_pos_m)))
  {
    return false;
  }
  // x_accel_mps2
  if (lhs->x_accel_mps2 != rhs->x_accel_mps2) {
    return false;
  }
  // y_accel_mps2
  if (lhs->y_accel_mps2 != rhs->y_accel_mps2) {
    return false;
  }
  // yaw_accel_mps2
  if (lhs->yaw_accel_mps2 != rhs->yaw_accel_mps2) {
    return false;
  }
  // yaw_angle_rad
  if (lhs->yaw_angle_rad != rhs->yaw_angle_rad) {
    return false;
  }
  // odom_yaw_angle_rad
  if (lhs->odom_yaw_angle_rad != rhs->odom_yaw_angle_rad) {
    return false;
  }
  return true;
}

bool
segway_msgs__msg__Dynamics__copy(
  const segway_msgs__msg__Dynamics * input,
  segway_msgs__msg__Dynamics * output)
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
  // x_vel_target_mps
  output->x_vel_target_mps = input->x_vel_target_mps;
  // y_vel_target_mps
  output->y_vel_target_mps = input->y_vel_target_mps;
  // yaw_rate_target_rps
  output->yaw_rate_target_rps = input->yaw_rate_target_rps;
  // vel_limit_mps
  output->vel_limit_mps = input->vel_limit_mps;
  // yaw_rate_limit_rps
  output->yaw_rate_limit_rps = input->yaw_rate_limit_rps;
  // wheel_vel_mps
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->wheel_vel_mps), &(output->wheel_vel_mps)))
  {
    return false;
  }
  // wheel_pos_m
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->wheel_pos_m), &(output->wheel_pos_m)))
  {
    return false;
  }
  // x_accel_mps2
  output->x_accel_mps2 = input->x_accel_mps2;
  // y_accel_mps2
  output->y_accel_mps2 = input->y_accel_mps2;
  // yaw_accel_mps2
  output->yaw_accel_mps2 = input->yaw_accel_mps2;
  // yaw_angle_rad
  output->yaw_angle_rad = input->yaw_angle_rad;
  // odom_yaw_angle_rad
  output->odom_yaw_angle_rad = input->odom_yaw_angle_rad;
  return true;
}

segway_msgs__msg__Dynamics *
segway_msgs__msg__Dynamics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Dynamics * msg = (segway_msgs__msg__Dynamics *)allocator.allocate(sizeof(segway_msgs__msg__Dynamics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__msg__Dynamics));
  bool success = segway_msgs__msg__Dynamics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__msg__Dynamics__destroy(segway_msgs__msg__Dynamics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__msg__Dynamics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__msg__Dynamics__Sequence__init(segway_msgs__msg__Dynamics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Dynamics * data = NULL;

  if (size) {
    data = (segway_msgs__msg__Dynamics *)allocator.zero_allocate(size, sizeof(segway_msgs__msg__Dynamics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__msg__Dynamics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__msg__Dynamics__fini(&data[i - 1]);
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
segway_msgs__msg__Dynamics__Sequence__fini(segway_msgs__msg__Dynamics__Sequence * array)
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
      segway_msgs__msg__Dynamics__fini(&array->data[i]);
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

segway_msgs__msg__Dynamics__Sequence *
segway_msgs__msg__Dynamics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Dynamics__Sequence * array = (segway_msgs__msg__Dynamics__Sequence *)allocator.allocate(sizeof(segway_msgs__msg__Dynamics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__msg__Dynamics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__msg__Dynamics__Sequence__destroy(segway_msgs__msg__Dynamics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__msg__Dynamics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__msg__Dynamics__Sequence__are_equal(const segway_msgs__msg__Dynamics__Sequence * lhs, const segway_msgs__msg__Dynamics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__msg__Dynamics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__msg__Dynamics__Sequence__copy(
  const segway_msgs__msg__Dynamics__Sequence * input,
  segway_msgs__msg__Dynamics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__msg__Dynamics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__msg__Dynamics * data =
      (segway_msgs__msg__Dynamics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__msg__Dynamics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__msg__Dynamics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__msg__Dynamics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
