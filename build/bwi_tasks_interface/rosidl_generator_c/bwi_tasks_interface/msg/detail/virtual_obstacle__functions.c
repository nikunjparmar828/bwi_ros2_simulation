// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bwi_tasks_interface:msg/VirtualObstacle.idl
// generated code does not contain a copyright notice
#include "bwi_tasks_interface/msg/detail/virtual_obstacle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `poses`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
bwi_tasks_interface__msg__VirtualObstacle__init(bwi_tasks_interface__msg__VirtualObstacle * msg)
{
  if (!msg) {
    return false;
  }
  // poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->poses, 0)) {
    bwi_tasks_interface__msg__VirtualObstacle__fini(msg);
    return false;
  }
  // radius
  // active
  return true;
}

void
bwi_tasks_interface__msg__VirtualObstacle__fini(bwi_tasks_interface__msg__VirtualObstacle * msg)
{
  if (!msg) {
    return;
  }
  // poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->poses);
  // radius
  // active
}

bool
bwi_tasks_interface__msg__VirtualObstacle__are_equal(const bwi_tasks_interface__msg__VirtualObstacle * lhs, const bwi_tasks_interface__msg__VirtualObstacle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // poses
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->poses), &(rhs->poses)))
  {
    return false;
  }
  // radius
  if (lhs->radius != rhs->radius) {
    return false;
  }
  // active
  if (lhs->active != rhs->active) {
    return false;
  }
  return true;
}

bool
bwi_tasks_interface__msg__VirtualObstacle__copy(
  const bwi_tasks_interface__msg__VirtualObstacle * input,
  bwi_tasks_interface__msg__VirtualObstacle * output)
{
  if (!input || !output) {
    return false;
  }
  // poses
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->poses), &(output->poses)))
  {
    return false;
  }
  // radius
  output->radius = input->radius;
  // active
  output->active = input->active;
  return true;
}

bwi_tasks_interface__msg__VirtualObstacle *
bwi_tasks_interface__msg__VirtualObstacle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bwi_tasks_interface__msg__VirtualObstacle * msg = (bwi_tasks_interface__msg__VirtualObstacle *)allocator.allocate(sizeof(bwi_tasks_interface__msg__VirtualObstacle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bwi_tasks_interface__msg__VirtualObstacle));
  bool success = bwi_tasks_interface__msg__VirtualObstacle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bwi_tasks_interface__msg__VirtualObstacle__destroy(bwi_tasks_interface__msg__VirtualObstacle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bwi_tasks_interface__msg__VirtualObstacle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bwi_tasks_interface__msg__VirtualObstacle__Sequence__init(bwi_tasks_interface__msg__VirtualObstacle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bwi_tasks_interface__msg__VirtualObstacle * data = NULL;

  if (size) {
    data = (bwi_tasks_interface__msg__VirtualObstacle *)allocator.zero_allocate(size, sizeof(bwi_tasks_interface__msg__VirtualObstacle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bwi_tasks_interface__msg__VirtualObstacle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bwi_tasks_interface__msg__VirtualObstacle__fini(&data[i - 1]);
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
bwi_tasks_interface__msg__VirtualObstacle__Sequence__fini(bwi_tasks_interface__msg__VirtualObstacle__Sequence * array)
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
      bwi_tasks_interface__msg__VirtualObstacle__fini(&array->data[i]);
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

bwi_tasks_interface__msg__VirtualObstacle__Sequence *
bwi_tasks_interface__msg__VirtualObstacle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bwi_tasks_interface__msg__VirtualObstacle__Sequence * array = (bwi_tasks_interface__msg__VirtualObstacle__Sequence *)allocator.allocate(sizeof(bwi_tasks_interface__msg__VirtualObstacle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bwi_tasks_interface__msg__VirtualObstacle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bwi_tasks_interface__msg__VirtualObstacle__Sequence__destroy(bwi_tasks_interface__msg__VirtualObstacle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bwi_tasks_interface__msg__VirtualObstacle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bwi_tasks_interface__msg__VirtualObstacle__Sequence__are_equal(const bwi_tasks_interface__msg__VirtualObstacle__Sequence * lhs, const bwi_tasks_interface__msg__VirtualObstacle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bwi_tasks_interface__msg__VirtualObstacle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bwi_tasks_interface__msg__VirtualObstacle__Sequence__copy(
  const bwi_tasks_interface__msg__VirtualObstacle__Sequence * input,
  bwi_tasks_interface__msg__VirtualObstacle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bwi_tasks_interface__msg__VirtualObstacle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bwi_tasks_interface__msg__VirtualObstacle * data =
      (bwi_tasks_interface__msg__VirtualObstacle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bwi_tasks_interface__msg__VirtualObstacle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bwi_tasks_interface__msg__VirtualObstacle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bwi_tasks_interface__msg__VirtualObstacle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
