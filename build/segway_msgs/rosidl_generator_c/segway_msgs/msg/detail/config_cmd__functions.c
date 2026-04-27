// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from segway_msgs:msg/ConfigCmd.idl
// generated code does not contain a copyright notice
#include "segway_msgs/msg/detail/config_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `gp_cmd`
#include "rosidl_runtime_c/string_functions.h"

bool
segway_msgs__msg__ConfigCmd__init(segway_msgs__msg__ConfigCmd * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    segway_msgs__msg__ConfigCmd__fini(msg);
    return false;
  }
  // gp_cmd
  if (!rosidl_runtime_c__String__init(&msg->gp_cmd)) {
    segway_msgs__msg__ConfigCmd__fini(msg);
    return false;
  }
  // gp_param
  return true;
}

void
segway_msgs__msg__ConfigCmd__fini(segway_msgs__msg__ConfigCmd * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // gp_cmd
  rosidl_runtime_c__String__fini(&msg->gp_cmd);
  // gp_param
}

bool
segway_msgs__msg__ConfigCmd__are_equal(const segway_msgs__msg__ConfigCmd * lhs, const segway_msgs__msg__ConfigCmd * rhs)
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
  // gp_cmd
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->gp_cmd), &(rhs->gp_cmd)))
  {
    return false;
  }
  // gp_param
  if (lhs->gp_param != rhs->gp_param) {
    return false;
  }
  return true;
}

bool
segway_msgs__msg__ConfigCmd__copy(
  const segway_msgs__msg__ConfigCmd * input,
  segway_msgs__msg__ConfigCmd * output)
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
  // gp_cmd
  if (!rosidl_runtime_c__String__copy(
      &(input->gp_cmd), &(output->gp_cmd)))
  {
    return false;
  }
  // gp_param
  output->gp_param = input->gp_param;
  return true;
}

segway_msgs__msg__ConfigCmd *
segway_msgs__msg__ConfigCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__ConfigCmd * msg = (segway_msgs__msg__ConfigCmd *)allocator.allocate(sizeof(segway_msgs__msg__ConfigCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__msg__ConfigCmd));
  bool success = segway_msgs__msg__ConfigCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__msg__ConfigCmd__destroy(segway_msgs__msg__ConfigCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__msg__ConfigCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__msg__ConfigCmd__Sequence__init(segway_msgs__msg__ConfigCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__ConfigCmd * data = NULL;

  if (size) {
    data = (segway_msgs__msg__ConfigCmd *)allocator.zero_allocate(size, sizeof(segway_msgs__msg__ConfigCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__msg__ConfigCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__msg__ConfigCmd__fini(&data[i - 1]);
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
segway_msgs__msg__ConfigCmd__Sequence__fini(segway_msgs__msg__ConfigCmd__Sequence * array)
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
      segway_msgs__msg__ConfigCmd__fini(&array->data[i]);
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

segway_msgs__msg__ConfigCmd__Sequence *
segway_msgs__msg__ConfigCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__ConfigCmd__Sequence * array = (segway_msgs__msg__ConfigCmd__Sequence *)allocator.allocate(sizeof(segway_msgs__msg__ConfigCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__msg__ConfigCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__msg__ConfigCmd__Sequence__destroy(segway_msgs__msg__ConfigCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__msg__ConfigCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__msg__ConfigCmd__Sequence__are_equal(const segway_msgs__msg__ConfigCmd__Sequence * lhs, const segway_msgs__msg__ConfigCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__msg__ConfigCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__msg__ConfigCmd__Sequence__copy(
  const segway_msgs__msg__ConfigCmd__Sequence * input,
  segway_msgs__msg__ConfigCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__msg__ConfigCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__msg__ConfigCmd * data =
      (segway_msgs__msg__ConfigCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__msg__ConfigCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__msg__ConfigCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__msg__ConfigCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
