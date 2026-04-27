// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bwi_perception_interface:msg/DlAmclCoords.idl
// generated code does not contain a copyright notice
#include "bwi_perception_interface/msg/detail/dl_amcl_coords__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bwi_perception_interface__msg__DlAmclCoords__init(bwi_perception_interface__msg__DlAmclCoords * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // depth
  return true;
}

void
bwi_perception_interface__msg__DlAmclCoords__fini(bwi_perception_interface__msg__DlAmclCoords * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // depth
}

bool
bwi_perception_interface__msg__DlAmclCoords__are_equal(const bwi_perception_interface__msg__DlAmclCoords * lhs, const bwi_perception_interface__msg__DlAmclCoords * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // depth
  if (lhs->depth != rhs->depth) {
    return false;
  }
  return true;
}

bool
bwi_perception_interface__msg__DlAmclCoords__copy(
  const bwi_perception_interface__msg__DlAmclCoords * input,
  bwi_perception_interface__msg__DlAmclCoords * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // depth
  output->depth = input->depth;
  return true;
}

bwi_perception_interface__msg__DlAmclCoords *
bwi_perception_interface__msg__DlAmclCoords__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bwi_perception_interface__msg__DlAmclCoords * msg = (bwi_perception_interface__msg__DlAmclCoords *)allocator.allocate(sizeof(bwi_perception_interface__msg__DlAmclCoords), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bwi_perception_interface__msg__DlAmclCoords));
  bool success = bwi_perception_interface__msg__DlAmclCoords__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bwi_perception_interface__msg__DlAmclCoords__destroy(bwi_perception_interface__msg__DlAmclCoords * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bwi_perception_interface__msg__DlAmclCoords__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bwi_perception_interface__msg__DlAmclCoords__Sequence__init(bwi_perception_interface__msg__DlAmclCoords__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bwi_perception_interface__msg__DlAmclCoords * data = NULL;

  if (size) {
    data = (bwi_perception_interface__msg__DlAmclCoords *)allocator.zero_allocate(size, sizeof(bwi_perception_interface__msg__DlAmclCoords), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bwi_perception_interface__msg__DlAmclCoords__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bwi_perception_interface__msg__DlAmclCoords__fini(&data[i - 1]);
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
bwi_perception_interface__msg__DlAmclCoords__Sequence__fini(bwi_perception_interface__msg__DlAmclCoords__Sequence * array)
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
      bwi_perception_interface__msg__DlAmclCoords__fini(&array->data[i]);
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

bwi_perception_interface__msg__DlAmclCoords__Sequence *
bwi_perception_interface__msg__DlAmclCoords__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bwi_perception_interface__msg__DlAmclCoords__Sequence * array = (bwi_perception_interface__msg__DlAmclCoords__Sequence *)allocator.allocate(sizeof(bwi_perception_interface__msg__DlAmclCoords__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bwi_perception_interface__msg__DlAmclCoords__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bwi_perception_interface__msg__DlAmclCoords__Sequence__destroy(bwi_perception_interface__msg__DlAmclCoords__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bwi_perception_interface__msg__DlAmclCoords__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bwi_perception_interface__msg__DlAmclCoords__Sequence__are_equal(const bwi_perception_interface__msg__DlAmclCoords__Sequence * lhs, const bwi_perception_interface__msg__DlAmclCoords__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bwi_perception_interface__msg__DlAmclCoords__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bwi_perception_interface__msg__DlAmclCoords__Sequence__copy(
  const bwi_perception_interface__msg__DlAmclCoords__Sequence * input,
  bwi_perception_interface__msg__DlAmclCoords__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bwi_perception_interface__msg__DlAmclCoords);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bwi_perception_interface__msg__DlAmclCoords * data =
      (bwi_perception_interface__msg__DlAmclCoords *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bwi_perception_interface__msg__DlAmclCoords__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bwi_perception_interface__msg__DlAmclCoords__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bwi_perception_interface__msg__DlAmclCoords__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
