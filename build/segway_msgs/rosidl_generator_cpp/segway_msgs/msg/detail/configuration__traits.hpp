// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from segway_msgs:msg/Configuration.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__CONFIGURATION__TRAITS_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__CONFIGURATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "segway_msgs/msg/detail/configuration__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace segway_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Configuration & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: teleop_vel_limit_mps
  {
    out << "teleop_vel_limit_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.teleop_vel_limit_mps, out);
    out << ", ";
  }

  // member: teleop_accel_limit_mps2
  {
    out << "teleop_accel_limit_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.teleop_accel_limit_mps2, out);
    out << ", ";
  }

  // member: teleop_yaw_rate_limit_rps
  {
    out << "teleop_yaw_rate_limit_rps: ";
    rosidl_generator_traits::value_to_yaml(msg.teleop_yaw_rate_limit_rps, out);
    out << ", ";
  }

  // member: teleop_yaw_accel_limit_rps2
  {
    out << "teleop_yaw_accel_limit_rps2: ";
    rosidl_generator_traits::value_to_yaml(msg.teleop_yaw_accel_limit_rps2, out);
    out << ", ";
  }

  // member: vel_limit_mps
  {
    out << "vel_limit_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_limit_mps, out);
    out << ", ";
  }

  // member: accel_limit_mps2
  {
    out << "accel_limit_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_limit_mps2, out);
    out << ", ";
  }

  // member: decel_limit_mps2
  {
    out << "decel_limit_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.decel_limit_mps2, out);
    out << ", ";
  }

  // member: dtz_decel_limit_mps2
  {
    out << "dtz_decel_limit_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.dtz_decel_limit_mps2, out);
    out << ", ";
  }

  // member: lateral_accel_limit_mps2
  {
    out << "lateral_accel_limit_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_accel_limit_mps2, out);
    out << ", ";
  }

  // member: yaw_rate_limit_rps
  {
    out << "yaw_rate_limit_rps: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate_limit_rps, out);
    out << ", ";
  }

  // member: yaw_accel_limit_rps2
  {
    out << "yaw_accel_limit_rps2: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_accel_limit_rps2, out);
    out << ", ";
  }

  // member: tire_diameter_m
  {
    out << "tire_diameter_m: ";
    rosidl_generator_traits::value_to_yaml(msg.tire_diameter_m, out);
    out << ", ";
  }

  // member: wheelbase_length_m
  {
    out << "wheelbase_length_m: ";
    rosidl_generator_traits::value_to_yaml(msg.wheelbase_length_m, out);
    out << ", ";
  }

  // member: wheel_track_width_m
  {
    out << "wheel_track_width_m: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_track_width_m, out);
    out << ", ";
  }

  // member: gear_ratio
  {
    out << "gear_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_ratio, out);
    out << ", ";
  }

  // member: config_bitmap
  {
    out << "config_bitmap: ";
    rosidl_generator_traits::value_to_yaml(msg.config_bitmap, out);
    out << ", ";
  }

  // member: eth_ip_address
  {
    out << "eth_ip_address: ";
    rosidl_generator_traits::value_to_yaml(msg.eth_ip_address, out);
    out << ", ";
  }

  // member: eth_port_number
  {
    out << "eth_port_number: ";
    rosidl_generator_traits::value_to_yaml(msg.eth_port_number, out);
    out << ", ";
  }

  // member: eth_subnet_mask
  {
    out << "eth_subnet_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.eth_subnet_mask, out);
    out << ", ";
  }

  // member: eth_gateway
  {
    out << "eth_gateway: ";
    rosidl_generator_traits::value_to_yaml(msg.eth_gateway, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Configuration & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: teleop_vel_limit_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "teleop_vel_limit_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.teleop_vel_limit_mps, out);
    out << "\n";
  }

  // member: teleop_accel_limit_mps2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "teleop_accel_limit_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.teleop_accel_limit_mps2, out);
    out << "\n";
  }

  // member: teleop_yaw_rate_limit_rps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "teleop_yaw_rate_limit_rps: ";
    rosidl_generator_traits::value_to_yaml(msg.teleop_yaw_rate_limit_rps, out);
    out << "\n";
  }

  // member: teleop_yaw_accel_limit_rps2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "teleop_yaw_accel_limit_rps2: ";
    rosidl_generator_traits::value_to_yaml(msg.teleop_yaw_accel_limit_rps2, out);
    out << "\n";
  }

  // member: vel_limit_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_limit_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_limit_mps, out);
    out << "\n";
  }

  // member: accel_limit_mps2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_limit_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_limit_mps2, out);
    out << "\n";
  }

  // member: decel_limit_mps2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "decel_limit_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.decel_limit_mps2, out);
    out << "\n";
  }

  // member: dtz_decel_limit_mps2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dtz_decel_limit_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.dtz_decel_limit_mps2, out);
    out << "\n";
  }

  // member: lateral_accel_limit_mps2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_accel_limit_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_accel_limit_mps2, out);
    out << "\n";
  }

  // member: yaw_rate_limit_rps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate_limit_rps: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate_limit_rps, out);
    out << "\n";
  }

  // member: yaw_accel_limit_rps2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_accel_limit_rps2: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_accel_limit_rps2, out);
    out << "\n";
  }

  // member: tire_diameter_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tire_diameter_m: ";
    rosidl_generator_traits::value_to_yaml(msg.tire_diameter_m, out);
    out << "\n";
  }

  // member: wheelbase_length_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheelbase_length_m: ";
    rosidl_generator_traits::value_to_yaml(msg.wheelbase_length_m, out);
    out << "\n";
  }

  // member: wheel_track_width_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_track_width_m: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_track_width_m, out);
    out << "\n";
  }

  // member: gear_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_ratio, out);
    out << "\n";
  }

  // member: config_bitmap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "config_bitmap: ";
    rosidl_generator_traits::value_to_yaml(msg.config_bitmap, out);
    out << "\n";
  }

  // member: eth_ip_address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eth_ip_address: ";
    rosidl_generator_traits::value_to_yaml(msg.eth_ip_address, out);
    out << "\n";
  }

  // member: eth_port_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eth_port_number: ";
    rosidl_generator_traits::value_to_yaml(msg.eth_port_number, out);
    out << "\n";
  }

  // member: eth_subnet_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eth_subnet_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.eth_subnet_mask, out);
    out << "\n";
  }

  // member: eth_gateway
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eth_gateway: ";
    rosidl_generator_traits::value_to_yaml(msg.eth_gateway, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Configuration & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace segway_msgs

namespace rosidl_generator_traits
{

[[deprecated("use segway_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const segway_msgs::msg::Configuration & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::msg::Configuration & msg)
{
  return segway_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::msg::Configuration>()
{
  return "segway_msgs::msg::Configuration";
}

template<>
inline const char * name<segway_msgs::msg::Configuration>()
{
  return "segway_msgs/msg/Configuration";
}

template<>
struct has_fixed_size<segway_msgs::msg::Configuration>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<segway_msgs::msg::Configuration>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<segway_msgs::msg::Configuration>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEGWAY_MSGS__MSG__DETAIL__CONFIGURATION__TRAITS_HPP_
