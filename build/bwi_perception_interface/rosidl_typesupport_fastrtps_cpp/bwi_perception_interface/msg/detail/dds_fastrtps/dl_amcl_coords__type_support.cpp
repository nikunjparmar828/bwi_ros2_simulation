// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from bwi_perception_interface:msg/DlAmclCoords.idl
// generated code does not contain a copyright notice
#include "bwi_perception_interface/msg/detail/dl_amcl_coords__rosidl_typesupport_fastrtps_cpp.hpp"
#include "bwi_perception_interface/msg/detail/dl_amcl_coords__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace bwi_perception_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bwi_perception_interface
cdr_serialize(
  const bwi_perception_interface::msg::DlAmclCoords & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: x
  cdr << ros_message.x;
  // Member: y
  cdr << ros_message.y;
  // Member: depth
  cdr << ros_message.depth;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bwi_perception_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  bwi_perception_interface::msg::DlAmclCoords & ros_message)
{
  // Member: x
  cdr >> ros_message.x;

  // Member: y
  cdr >> ros_message.y;

  // Member: depth
  cdr >> ros_message.depth;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bwi_perception_interface
get_serialized_size(
  const bwi_perception_interface::msg::DlAmclCoords & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: x
  {
    size_t item_size = sizeof(ros_message.x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y
  {
    size_t item_size = sizeof(ros_message.y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: depth
  {
    size_t item_size = sizeof(ros_message.depth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bwi_perception_interface
max_serialized_size_DlAmclCoords(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: depth
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = bwi_perception_interface::msg::DlAmclCoords;
    is_plain =
      (
      offsetof(DataType, depth) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _DlAmclCoords__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const bwi_perception_interface::msg::DlAmclCoords *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DlAmclCoords__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<bwi_perception_interface::msg::DlAmclCoords *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DlAmclCoords__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const bwi_perception_interface::msg::DlAmclCoords *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DlAmclCoords__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DlAmclCoords(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DlAmclCoords__callbacks = {
  "bwi_perception_interface::msg",
  "DlAmclCoords",
  _DlAmclCoords__cdr_serialize,
  _DlAmclCoords__cdr_deserialize,
  _DlAmclCoords__get_serialized_size,
  _DlAmclCoords__max_serialized_size
};

static rosidl_message_type_support_t _DlAmclCoords__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DlAmclCoords__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace bwi_perception_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_bwi_perception_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<bwi_perception_interface::msg::DlAmclCoords>()
{
  return &bwi_perception_interface::msg::typesupport_fastrtps_cpp::_DlAmclCoords__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bwi_perception_interface, msg, DlAmclCoords)() {
  return &bwi_perception_interface::msg::typesupport_fastrtps_cpp::_DlAmclCoords__handle;
}

#ifdef __cplusplus
}
#endif
