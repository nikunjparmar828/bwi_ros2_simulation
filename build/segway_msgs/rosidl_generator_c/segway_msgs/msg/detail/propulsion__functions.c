// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from segway_msgs:msg/Propulsion.idl
// generated code does not contain a copyright notice
#include "segway_msgs/msg/detail/propulsion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `mcu_battery_soc`
// Member `mcu_battery_temp_deg`
// Member `mcu_inst_power`
// Member `mcu_total_energy`
// Member `motor_current`
// Member `motor_current_limit`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
segway_msgs__msg__Propulsion__init(segway_msgs__msg__Propulsion * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    segway_msgs__msg__Propulsion__fini(msg);
    return false;
  }
  // min_propulsion_battery_soc
  // mcu_battery_soc
  if (!rosidl_runtime_c__float__Sequence__init(&msg->mcu_battery_soc, 0)) {
    segway_msgs__msg__Propulsion__fini(msg);
    return false;
  }
  // mcu_battery_temp_deg
  if (!rosidl_runtime_c__float__Sequence__init(&msg->mcu_battery_temp_deg, 0)) {
    segway_msgs__msg__Propulsion__fini(msg);
    return false;
  }
  // mcu_inst_power
  if (!rosidl_runtime_c__float__Sequence__init(&msg->mcu_inst_power, 0)) {
    segway_msgs__msg__Propulsion__fini(msg);
    return false;
  }
  // mcu_total_energy
  if (!rosidl_runtime_c__float__Sequence__init(&msg->mcu_total_energy, 0)) {
    segway_msgs__msg__Propulsion__fini(msg);
    return false;
  }
  // motor_current
  if (!rosidl_runtime_c__float__Sequence__init(&msg->motor_current, 0)) {
    segway_msgs__msg__Propulsion__fini(msg);
    return false;
  }
  // max_motor_current
  // motor_current_limit
  if (!rosidl_runtime_c__float__Sequence__init(&msg->motor_current_limit, 0)) {
    segway_msgs__msg__Propulsion__fini(msg);
    return false;
  }
  // min_motor_current_limit
  return true;
}

void
segway_msgs__msg__Propulsion__fini(segway_msgs__msg__Propulsion * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // min_propulsion_battery_soc
  // mcu_battery_soc
  rosidl_runtime_c__float__Sequence__fini(&msg->mcu_battery_soc);
  // mcu_battery_temp_deg
  rosidl_runtime_c__float__Sequence__fini(&msg->mcu_battery_temp_deg);
  // mcu_inst_power
  rosidl_runtime_c__float__Sequence__fini(&msg->mcu_inst_power);
  // mcu_total_energy
  rosidl_runtime_c__float__Sequence__fini(&msg->mcu_total_energy);
  // motor_current
  rosidl_runtime_c__float__Sequence__fini(&msg->motor_current);
  // max_motor_current
  // motor_current_limit
  rosidl_runtime_c__float__Sequence__fini(&msg->motor_current_limit);
  // min_motor_current_limit
}

bool
segway_msgs__msg__Propulsion__are_equal(const segway_msgs__msg__Propulsion * lhs, const segway_msgs__msg__Propulsion * rhs)
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
  // min_propulsion_battery_soc
  if (lhs->min_propulsion_battery_soc != rhs->min_propulsion_battery_soc) {
    return false;
  }
  // mcu_battery_soc
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->mcu_battery_soc), &(rhs->mcu_battery_soc)))
  {
    return false;
  }
  // mcu_battery_temp_deg
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->mcu_battery_temp_deg), &(rhs->mcu_battery_temp_deg)))
  {
    return false;
  }
  // mcu_inst_power
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->mcu_inst_power), &(rhs->mcu_inst_power)))
  {
    return false;
  }
  // mcu_total_energy
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->mcu_total_energy), &(rhs->mcu_total_energy)))
  {
    return false;
  }
  // motor_current
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->motor_current), &(rhs->motor_current)))
  {
    return false;
  }
  // max_motor_current
  if (lhs->max_motor_current != rhs->max_motor_current) {
    return false;
  }
  // motor_current_limit
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->motor_current_limit), &(rhs->motor_current_limit)))
  {
    return false;
  }
  // min_motor_current_limit
  if (lhs->min_motor_current_limit != rhs->min_motor_current_limit) {
    return false;
  }
  return true;
}

bool
segway_msgs__msg__Propulsion__copy(
  const segway_msgs__msg__Propulsion * input,
  segway_msgs__msg__Propulsion * output)
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
  // min_propulsion_battery_soc
  output->min_propulsion_battery_soc = input->min_propulsion_battery_soc;
  // mcu_battery_soc
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->mcu_battery_soc), &(output->mcu_battery_soc)))
  {
    return false;
  }
  // mcu_battery_temp_deg
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->mcu_battery_temp_deg), &(output->mcu_battery_temp_deg)))
  {
    return false;
  }
  // mcu_inst_power
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->mcu_inst_power), &(output->mcu_inst_power)))
  {
    return false;
  }
  // mcu_total_energy
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->mcu_total_energy), &(output->mcu_total_energy)))
  {
    return false;
  }
  // motor_current
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->motor_current), &(output->motor_current)))
  {
    return false;
  }
  // max_motor_current
  output->max_motor_current = input->max_motor_current;
  // motor_current_limit
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->motor_current_limit), &(output->motor_current_limit)))
  {
    return false;
  }
  // min_motor_current_limit
  output->min_motor_current_limit = input->min_motor_current_limit;
  return true;
}

segway_msgs__msg__Propulsion *
segway_msgs__msg__Propulsion__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Propulsion * msg = (segway_msgs__msg__Propulsion *)allocator.allocate(sizeof(segway_msgs__msg__Propulsion), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__msg__Propulsion));
  bool success = segway_msgs__msg__Propulsion__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__msg__Propulsion__destroy(segway_msgs__msg__Propulsion * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__msg__Propulsion__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__msg__Propulsion__Sequence__init(segway_msgs__msg__Propulsion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Propulsion * data = NULL;

  if (size) {
    data = (segway_msgs__msg__Propulsion *)allocator.zero_allocate(size, sizeof(segway_msgs__msg__Propulsion), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__msg__Propulsion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__msg__Propulsion__fini(&data[i - 1]);
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
segway_msgs__msg__Propulsion__Sequence__fini(segway_msgs__msg__Propulsion__Sequence * array)
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
      segway_msgs__msg__Propulsion__fini(&array->data[i]);
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

segway_msgs__msg__Propulsion__Sequence *
segway_msgs__msg__Propulsion__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Propulsion__Sequence * array = (segway_msgs__msg__Propulsion__Sequence *)allocator.allocate(sizeof(segway_msgs__msg__Propulsion__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__msg__Propulsion__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__msg__Propulsion__Sequence__destroy(segway_msgs__msg__Propulsion__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__msg__Propulsion__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__msg__Propulsion__Sequence__are_equal(const segway_msgs__msg__Propulsion__Sequence * lhs, const segway_msgs__msg__Propulsion__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__msg__Propulsion__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__msg__Propulsion__Sequence__copy(
  const segway_msgs__msg__Propulsion__Sequence * input,
  segway_msgs__msg__Propulsion__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__msg__Propulsion);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__msg__Propulsion * data =
      (segway_msgs__msg__Propulsion *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__msg__Propulsion__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__msg__Propulsion__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__msg__Propulsion__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
