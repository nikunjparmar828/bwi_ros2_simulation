// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from segway_msgs:msg/Status.idl
// generated code does not contain a copyright notice
#include "segway_msgs/msg/detail/status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `fault_status_words`
// Member `mcu_fault_status`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
segway_msgs__msg__Status__init(segway_msgs__msg__Status * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    segway_msgs__msg__Status__fini(msg);
    return false;
  }
  // fault_status_words
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->fault_status_words, 0)) {
    segway_msgs__msg__Status__fini(msg);
    return false;
  }
  // mcu_fault_status
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->mcu_fault_status, 0)) {
    segway_msgs__msg__Status__fini(msg);
    return false;
  }
  // operational_time
  // operational_state
  // dynamic_response
  // machine_id
  return true;
}

void
segway_msgs__msg__Status__fini(segway_msgs__msg__Status * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // fault_status_words
  rosidl_runtime_c__uint32__Sequence__fini(&msg->fault_status_words);
  // mcu_fault_status
  rosidl_runtime_c__uint32__Sequence__fini(&msg->mcu_fault_status);
  // operational_time
  // operational_state
  // dynamic_response
  // machine_id
}

bool
segway_msgs__msg__Status__are_equal(const segway_msgs__msg__Status * lhs, const segway_msgs__msg__Status * rhs)
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
  // fault_status_words
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->fault_status_words), &(rhs->fault_status_words)))
  {
    return false;
  }
  // mcu_fault_status
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->mcu_fault_status), &(rhs->mcu_fault_status)))
  {
    return false;
  }
  // operational_time
  if (lhs->operational_time != rhs->operational_time) {
    return false;
  }
  // operational_state
  if (lhs->operational_state != rhs->operational_state) {
    return false;
  }
  // dynamic_response
  if (lhs->dynamic_response != rhs->dynamic_response) {
    return false;
  }
  // machine_id
  if (lhs->machine_id != rhs->machine_id) {
    return false;
  }
  return true;
}

bool
segway_msgs__msg__Status__copy(
  const segway_msgs__msg__Status * input,
  segway_msgs__msg__Status * output)
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
  // fault_status_words
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->fault_status_words), &(output->fault_status_words)))
  {
    return false;
  }
  // mcu_fault_status
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->mcu_fault_status), &(output->mcu_fault_status)))
  {
    return false;
  }
  // operational_time
  output->operational_time = input->operational_time;
  // operational_state
  output->operational_state = input->operational_state;
  // dynamic_response
  output->dynamic_response = input->dynamic_response;
  // machine_id
  output->machine_id = input->machine_id;
  return true;
}

segway_msgs__msg__Status *
segway_msgs__msg__Status__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Status * msg = (segway_msgs__msg__Status *)allocator.allocate(sizeof(segway_msgs__msg__Status), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__msg__Status));
  bool success = segway_msgs__msg__Status__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__msg__Status__destroy(segway_msgs__msg__Status * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__msg__Status__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__msg__Status__Sequence__init(segway_msgs__msg__Status__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Status * data = NULL;

  if (size) {
    data = (segway_msgs__msg__Status *)allocator.zero_allocate(size, sizeof(segway_msgs__msg__Status), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__msg__Status__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__msg__Status__fini(&data[i - 1]);
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
segway_msgs__msg__Status__Sequence__fini(segway_msgs__msg__Status__Sequence * array)
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
      segway_msgs__msg__Status__fini(&array->data[i]);
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

segway_msgs__msg__Status__Sequence *
segway_msgs__msg__Status__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__Status__Sequence * array = (segway_msgs__msg__Status__Sequence *)allocator.allocate(sizeof(segway_msgs__msg__Status__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__msg__Status__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__msg__Status__Sequence__destroy(segway_msgs__msg__Status__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__msg__Status__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__msg__Status__Sequence__are_equal(const segway_msgs__msg__Status__Sequence * lhs, const segway_msgs__msg__Status__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__msg__Status__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__msg__Status__Sequence__copy(
  const segway_msgs__msg__Status__Sequence * input,
  segway_msgs__msg__Status__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__msg__Status);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__msg__Status * data =
      (segway_msgs__msg__Status *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__msg__Status__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__msg__Status__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__msg__Status__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
