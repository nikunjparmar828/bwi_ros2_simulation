// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from segway_msgs:msg/Dynamics.idl
// generated code does not contain a copyright notice
#include "segway_msgs/msg/detail/dynamics__rosidl_typesupport_fastrtps_cpp.hpp"
#include "segway_msgs/msg/detail/dynamics__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace segway_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_segway_msgs
cdr_serialize(
  const segway_msgs::msg::Dynamics & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: x_vel_target_mps
  cdr << ros_message.x_vel_target_mps;
  // Member: y_vel_target_mps
  cdr << ros_message.y_vel_target_mps;
  // Member: yaw_rate_target_rps
  cdr << ros_message.yaw_rate_target_rps;
  // Member: vel_limit_mps
  cdr << ros_message.vel_limit_mps;
  // Member: yaw_rate_limit_rps
  cdr << ros_message.yaw_rate_limit_rps;
  // Member: wheel_vel_mps
  {
    cdr << ros_message.wheel_vel_mps;
  }
  // Member: wheel_pos_m
  {
    cdr << ros_message.wheel_pos_m;
  }
  // Member: x_accel_mps2
  cdr << ros_message.x_accel_mps2;
  // Member: y_accel_mps2
  cdr << ros_message.y_accel_mps2;
  // Member: yaw_accel_mps2
  cdr << ros_message.yaw_accel_mps2;
  // Member: yaw_angle_rad
  cdr << ros_message.yaw_angle_rad;
  // Member: odom_yaw_angle_rad
  cdr << ros_message.odom_yaw_angle_rad;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_segway_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  segway_msgs::msg::Dynamics & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: x_vel_target_mps
  cdr >> ros_message.x_vel_target_mps;

  // Member: y_vel_target_mps
  cdr >> ros_message.y_vel_target_mps;

  // Member: yaw_rate_target_rps
  cdr >> ros_message.yaw_rate_target_rps;

  // Member: vel_limit_mps
  cdr >> ros_message.vel_limit_mps;

  // Member: yaw_rate_limit_rps
  cdr >> ros_message.yaw_rate_limit_rps;

  // Member: wheel_vel_mps
  {
    cdr >> ros_message.wheel_vel_mps;
  }

  // Member: wheel_pos_m
  {
    cdr >> ros_message.wheel_pos_m;
  }

  // Member: x_accel_mps2
  cdr >> ros_message.x_accel_mps2;

  // Member: y_accel_mps2
  cdr >> ros_message.y_accel_mps2;

  // Member: yaw_accel_mps2
  cdr >> ros_message.yaw_accel_mps2;

  // Member: yaw_angle_rad
  cdr >> ros_message.yaw_angle_rad;

  // Member: odom_yaw_angle_rad
  cdr >> ros_message.odom_yaw_angle_rad;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_segway_msgs
get_serialized_size(
  const segway_msgs::msg::Dynamics & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: x_vel_target_mps
  {
    size_t item_size = sizeof(ros_message.x_vel_target_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_vel_target_mps
  {
    size_t item_size = sizeof(ros_message.y_vel_target_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_rate_target_rps
  {
    size_t item_size = sizeof(ros_message.yaw_rate_target_rps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel_limit_mps
  {
    size_t item_size = sizeof(ros_message.vel_limit_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_rate_limit_rps
  {
    size_t item_size = sizeof(ros_message.yaw_rate_limit_rps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_vel_mps
  {
    size_t array_size = ros_message.wheel_vel_mps.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.wheel_vel_mps[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_pos_m
  {
    size_t array_size = ros_message.wheel_pos_m.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.wheel_pos_m[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x_accel_mps2
  {
    size_t item_size = sizeof(ros_message.x_accel_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_accel_mps2
  {
    size_t item_size = sizeof(ros_message.y_accel_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_accel_mps2
  {
    size_t item_size = sizeof(ros_message.yaw_accel_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_angle_rad
  {
    size_t item_size = sizeof(ros_message.yaw_angle_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: odom_yaw_angle_rad
  {
    size_t item_size = sizeof(ros_message.odom_yaw_angle_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_segway_msgs
max_serialized_size_Dynamics(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: x_vel_target_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y_vel_target_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_rate_target_rps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vel_limit_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_rate_limit_rps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wheel_vel_mps
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wheel_pos_m
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: x_accel_mps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y_accel_mps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_accel_mps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_angle_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: odom_yaw_angle_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = segway_msgs::msg::Dynamics;
    is_plain =
      (
      offsetof(DataType, odom_yaw_angle_rad) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Dynamics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const segway_msgs::msg::Dynamics *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Dynamics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<segway_msgs::msg::Dynamics *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Dynamics__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const segway_msgs::msg::Dynamics *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Dynamics__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Dynamics(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Dynamics__callbacks = {
  "segway_msgs::msg",
  "Dynamics",
  _Dynamics__cdr_serialize,
  _Dynamics__cdr_deserialize,
  _Dynamics__get_serialized_size,
  _Dynamics__max_serialized_size
};

static rosidl_message_type_support_t _Dynamics__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Dynamics__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace segway_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_segway_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<segway_msgs::msg::Dynamics>()
{
  return &segway_msgs::msg::typesupport_fastrtps_cpp::_Dynamics__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, segway_msgs, msg, Dynamics)() {
  return &segway_msgs::msg::typesupport_fastrtps_cpp::_Dynamics__handle;
}

#ifdef __cplusplus
}
#endif
