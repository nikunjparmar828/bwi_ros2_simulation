// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from segway_msgs:msg/AuxPower.idl
// generated code does not contain a copyright notice
#include "segway_msgs/msg/detail/aux_power__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `aux_soc`
// Member `aux_voltage`
// Member `aux_current`
// Member `aux_temp_deg`
// Member `aux_sys_status`
// Member `aux_bcu_status`
// Member `aux_bcu_faults`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
segway_msgs__msg__AuxPower__init(segway_msgs__msg__AuxPower * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    segway_msgs__msg__AuxPower__fini(msg);
    return false;
  }
  // aux_soc
  if (!rosidl_runtime_c__float__Sequence__init(&msg->aux_soc, 0)) {
    segway_msgs__msg__AuxPower__fini(msg);
    return false;
  }
  // aux_voltage
  if (!rosidl_runtime_c__float__Sequence__init(&msg->aux_voltage, 0)) {
    segway_msgs__msg__AuxPower__fini(msg);
    return false;
  }
  // aux_current
  if (!rosidl_runtime_c__float__Sequence__init(&msg->aux_current, 0)) {
    segway_msgs__msg__AuxPower__fini(msg);
    return false;
  }
  // aux_temp_deg
  if (!rosidl_runtime_c__float__Sequence__init(&msg->aux_temp_deg, 0)) {
    segway_msgs__msg__AuxPower__fini(msg);
    return false;
  }
  // aux_sys_status
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->aux_sys_status, 0)) {
    segway_msgs__msg__AuxPower__fini(msg);
    return false;
  }
  // aux_bcu_status
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->aux_bcu_status, 0)) {
    segway_msgs__msg__AuxPower__fini(msg);
    return false;
  }
  // aux_bcu_faults
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->aux_bcu_faults, 0)) {
    segway_msgs__msg__AuxPower__fini(msg);
    return false;
  }
  // startup_7p2v_batt_voltage
  return true;
}

void
segway_msgs__msg__AuxPower__fini(segway_msgs__msg__AuxPower * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // aux_soc
  rosidl_runtime_c__float__Sequence__fini(&msg->aux_soc);
  // aux_voltage
  rosidl_runtime_c__float__Sequence__fini(&msg->aux_voltage);
  // aux_current
  rosidl_runtime_c__float__Sequence__fini(&msg->aux_current);
  // aux_temp_deg
  rosidl_runtime_c__float__Sequence__fini(&msg->aux_temp_deg);
  // aux_sys_status
  rosidl_runtime_c__uint32__Sequence__fini(&msg->aux_sys_status);
  // aux_bcu_status
  rosidl_runtime_c__uint32__Sequence__fini(&msg->aux_bcu_status);
  // aux_bcu_faults
  rosidl_runtime_c__uint32__Sequence__fini(&msg->aux_bcu_faults);
  // startup_7p2v_batt_voltage
}

bool
segway_msgs__msg__AuxPower__are_equal(const segway_msgs__msg__AuxPower * lhs, const segway_msgs__msg__AuxPower * rhs)
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
  // aux_soc
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->aux_soc), &(rhs->aux_soc)))
  {
    return false;
  }
  // aux_voltage
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->aux_voltage), &(rhs->aux_voltage)))
  {
    return false;
  }
  // aux_current
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->aux_current), &(rhs->aux_current)))
  {
    return false;
  }
  // aux_temp_deg
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->aux_temp_deg), &(rhs->aux_temp_deg)))
  {
    return false;
  }
  // aux_sys_status
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->aux_sys_status), &(rhs->aux_sys_status)))
  {
    return false;
  }
  // aux_bcu_status
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->aux_bcu_status), &(rhs->aux_bcu_status)))
  {
    return false;
  }
  // aux_bcu_faults
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->aux_bcu_faults), &(rhs->aux_bcu_faults)))
  {
    return false;
  }
  // startup_7p2v_batt_voltage
  if (lhs->startup_7p2v_batt_voltage != rhs->startup_7p2v_batt_voltage) {
    return false;
  }
  return true;
}

bool
segway_msgs__msg__AuxPower__copy(
  const segway_msgs__msg__AuxPower * input,
  segway_msgs__msg__AuxPower * output)
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
  // aux_soc
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->aux_soc), &(output->aux_soc)))
  {
    return false;
  }
  // aux_voltage
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->aux_voltage), &(output->aux_voltage)))
  {
    return false;
  }
  // aux_current
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->aux_current), &(output->aux_current)))
  {
    return false;
  }
  // aux_temp_deg
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->aux_temp_deg), &(output->aux_temp_deg)))
  {
    return false;
  }
  // aux_sys_status
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->aux_sys_status), &(output->aux_sys_status)))
  {
    return false;
  }
  // aux_bcu_status
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->aux_bcu_status), &(output->aux_bcu_status)))
  {
    return false;
  }
  // aux_bcu_faults
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->aux_bcu_faults), &(output->aux_bcu_faults)))
  {
    return false;
  }
  // startup_7p2v_batt_voltage
  output->startup_7p2v_batt_voltage = input->startup_7p2v_batt_voltage;
  return true;
}

segway_msgs__msg__AuxPower *
segway_msgs__msg__AuxPower__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__AuxPower * msg = (segway_msgs__msg__AuxPower *)allocator.allocate(sizeof(segway_msgs__msg__AuxPower), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__msg__AuxPower));
  bool success = segway_msgs__msg__AuxPower__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__msg__AuxPower__destroy(segway_msgs__msg__AuxPower * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__msg__AuxPower__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__msg__AuxPower__Sequence__init(segway_msgs__msg__AuxPower__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__AuxPower * data = NULL;

  if (size) {
    data = (segway_msgs__msg__AuxPower *)allocator.zero_allocate(size, sizeof(segway_msgs__msg__AuxPower), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__msg__AuxPower__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__msg__AuxPower__fini(&data[i - 1]);
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
segway_msgs__msg__AuxPower__Sequence__fini(segway_msgs__msg__AuxPower__Sequence * array)
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
      segway_msgs__msg__AuxPower__fini(&array->data[i]);
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

segway_msgs__msg__AuxPower__Sequence *
segway_msgs__msg__AuxPower__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__AuxPower__Sequence * array = (segway_msgs__msg__AuxPower__Sequence *)allocator.allocate(sizeof(segway_msgs__msg__AuxPower__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__msg__AuxPower__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__msg__AuxPower__Sequence__destroy(segway_msgs__msg__AuxPower__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__msg__AuxPower__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__msg__AuxPower__Sequence__are_equal(const segway_msgs__msg__AuxPower__Sequence * lhs, const segway_msgs__msg__AuxPower__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__msg__AuxPower__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__msg__AuxPower__Sequence__copy(
  const segway_msgs__msg__AuxPower__Sequence * input,
  segway_msgs__msg__AuxPower__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__msg__AuxPower);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__msg__AuxPower * data =
      (segway_msgs__msg__AuxPower *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__msg__AuxPower__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__msg__AuxPower__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__msg__AuxPower__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
