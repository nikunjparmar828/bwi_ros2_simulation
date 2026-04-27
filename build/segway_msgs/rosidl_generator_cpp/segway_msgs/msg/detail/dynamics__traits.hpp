// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from segway_msgs:msg/Dynamics.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__DYNAMICS__TRAITS_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__DYNAMICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "segway_msgs/msg/detail/dynamics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace segway_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Dynamics & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: x_vel_target_mps
  {
    out << "x_vel_target_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.x_vel_target_mps, out);
    out << ", ";
  }

  // member: y_vel_target_mps
  {
    out << "y_vel_target_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.y_vel_target_mps, out);
    out << ", ";
  }

  // member: yaw_rate_target_rps
  {
    out << "yaw_rate_target_rps: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate_target_rps, out);
    out << ", ";
  }

  // member: vel_limit_mps
  {
    out << "vel_limit_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_limit_mps, out);
    out << ", ";
  }

  // member: yaw_rate_limit_rps
  {
    out << "yaw_rate_limit_rps: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate_limit_rps, out);
    out << ", ";
  }

  // member: wheel_vel_mps
  {
    if (msg.wheel_vel_mps.size() == 0) {
      out << "wheel_vel_mps: []";
    } else {
      out << "wheel_vel_mps: [";
      size_t pending_items = msg.wheel_vel_mps.size();
      for (auto item : msg.wheel_vel_mps) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: wheel_pos_m
  {
    if (msg.wheel_pos_m.size() == 0) {
      out << "wheel_pos_m: []";
    } else {
      out << "wheel_pos_m: [";
      size_t pending_items = msg.wheel_pos_m.size();
      for (auto item : msg.wheel_pos_m) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: x_accel_mps2
  {
    out << "x_accel_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.x_accel_mps2, out);
    out << ", ";
  }

  // member: y_accel_mps2
  {
    out << "y_accel_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.y_accel_mps2, out);
    out << ", ";
  }

  // member: yaw_accel_mps2
  {
    out << "yaw_accel_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_accel_mps2, out);
    out << ", ";
  }

  // member: yaw_angle_rad
  {
    out << "yaw_angle_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_angle_rad, out);
    out << ", ";
  }

  // member: odom_yaw_angle_rad
  {
    out << "odom_yaw_angle_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_yaw_angle_rad, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Dynamics & msg,
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

  // member: x_vel_target_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_vel_target_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.x_vel_target_mps, out);
    out << "\n";
  }

  // member: y_vel_target_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_vel_target_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.y_vel_target_mps, out);
    out << "\n";
  }

  // member: yaw_rate_target_rps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate_target_rps: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate_target_rps, out);
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

  // member: yaw_rate_limit_rps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate_limit_rps: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate_limit_rps, out);
    out << "\n";
  }

  // member: wheel_vel_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wheel_vel_mps.size() == 0) {
      out << "wheel_vel_mps: []\n";
    } else {
      out << "wheel_vel_mps:\n";
      for (auto item : msg.wheel_vel_mps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: wheel_pos_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wheel_pos_m.size() == 0) {
      out << "wheel_pos_m: []\n";
    } else {
      out << "wheel_pos_m:\n";
      for (auto item : msg.wheel_pos_m) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: x_accel_mps2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_accel_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.x_accel_mps2, out);
    out << "\n";
  }

  // member: y_accel_mps2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_accel_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.y_accel_mps2, out);
    out << "\n";
  }

  // member: yaw_accel_mps2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_accel_mps2: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_accel_mps2, out);
    out << "\n";
  }

  // member: yaw_angle_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_angle_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_angle_rad, out);
    out << "\n";
  }

  // member: odom_yaw_angle_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_yaw_angle_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_yaw_angle_rad, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Dynamics & msg, bool use_flow_style = false)
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
  const segway_msgs::msg::Dynamics & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::msg::Dynamics & msg)
{
  return segway_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::msg::Dynamics>()
{
  return "segway_msgs::msg::Dynamics";
}

template<>
inline const char * name<segway_msgs::msg::Dynamics>()
{
  return "segway_msgs/msg/Dynamics";
}

template<>
struct has_fixed_size<segway_msgs::msg::Dynamics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<segway_msgs::msg::Dynamics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<segway_msgs::msg::Dynamics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEGWAY_MSGS__MSG__DETAIL__DYNAMICS__TRAITS_HPP_
