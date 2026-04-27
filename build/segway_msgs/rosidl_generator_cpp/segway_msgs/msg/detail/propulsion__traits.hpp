// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from segway_msgs:msg/Propulsion.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__PROPULSION__TRAITS_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__PROPULSION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "segway_msgs/msg/detail/propulsion__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace segway_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Propulsion & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: min_propulsion_battery_soc
  {
    out << "min_propulsion_battery_soc: ";
    rosidl_generator_traits::value_to_yaml(msg.min_propulsion_battery_soc, out);
    out << ", ";
  }

  // member: mcu_battery_soc
  {
    if (msg.mcu_battery_soc.size() == 0) {
      out << "mcu_battery_soc: []";
    } else {
      out << "mcu_battery_soc: [";
      size_t pending_items = msg.mcu_battery_soc.size();
      for (auto item : msg.mcu_battery_soc) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mcu_battery_temp_deg
  {
    if (msg.mcu_battery_temp_deg.size() == 0) {
      out << "mcu_battery_temp_deg: []";
    } else {
      out << "mcu_battery_temp_deg: [";
      size_t pending_items = msg.mcu_battery_temp_deg.size();
      for (auto item : msg.mcu_battery_temp_deg) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mcu_inst_power
  {
    if (msg.mcu_inst_power.size() == 0) {
      out << "mcu_inst_power: []";
    } else {
      out << "mcu_inst_power: [";
      size_t pending_items = msg.mcu_inst_power.size();
      for (auto item : msg.mcu_inst_power) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mcu_total_energy
  {
    if (msg.mcu_total_energy.size() == 0) {
      out << "mcu_total_energy: []";
    } else {
      out << "mcu_total_energy: [";
      size_t pending_items = msg.mcu_total_energy.size();
      for (auto item : msg.mcu_total_energy) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: motor_current
  {
    if (msg.motor_current.size() == 0) {
      out << "motor_current: []";
    } else {
      out << "motor_current: [";
      size_t pending_items = msg.motor_current.size();
      for (auto item : msg.motor_current) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: max_motor_current
  {
    out << "max_motor_current: ";
    rosidl_generator_traits::value_to_yaml(msg.max_motor_current, out);
    out << ", ";
  }

  // member: motor_current_limit
  {
    if (msg.motor_current_limit.size() == 0) {
      out << "motor_current_limit: []";
    } else {
      out << "motor_current_limit: [";
      size_t pending_items = msg.motor_current_limit.size();
      for (auto item : msg.motor_current_limit) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: min_motor_current_limit
  {
    out << "min_motor_current_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.min_motor_current_limit, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Propulsion & msg,
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

  // member: min_propulsion_battery_soc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_propulsion_battery_soc: ";
    rosidl_generator_traits::value_to_yaml(msg.min_propulsion_battery_soc, out);
    out << "\n";
  }

  // member: mcu_battery_soc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mcu_battery_soc.size() == 0) {
      out << "mcu_battery_soc: []\n";
    } else {
      out << "mcu_battery_soc:\n";
      for (auto item : msg.mcu_battery_soc) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mcu_battery_temp_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mcu_battery_temp_deg.size() == 0) {
      out << "mcu_battery_temp_deg: []\n";
    } else {
      out << "mcu_battery_temp_deg:\n";
      for (auto item : msg.mcu_battery_temp_deg) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mcu_inst_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mcu_inst_power.size() == 0) {
      out << "mcu_inst_power: []\n";
    } else {
      out << "mcu_inst_power:\n";
      for (auto item : msg.mcu_inst_power) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mcu_total_energy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mcu_total_energy.size() == 0) {
      out << "mcu_total_energy: []\n";
    } else {
      out << "mcu_total_energy:\n";
      for (auto item : msg.mcu_total_energy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: motor_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_current.size() == 0) {
      out << "motor_current: []\n";
    } else {
      out << "motor_current:\n";
      for (auto item : msg.motor_current) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: max_motor_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_motor_current: ";
    rosidl_generator_traits::value_to_yaml(msg.max_motor_current, out);
    out << "\n";
  }

  // member: motor_current_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_current_limit.size() == 0) {
      out << "motor_current_limit: []\n";
    } else {
      out << "motor_current_limit:\n";
      for (auto item : msg.motor_current_limit) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: min_motor_current_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_motor_current_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.min_motor_current_limit, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Propulsion & msg, bool use_flow_style = false)
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
  const segway_msgs::msg::Propulsion & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::msg::Propulsion & msg)
{
  return segway_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::msg::Propulsion>()
{
  return "segway_msgs::msg::Propulsion";
}

template<>
inline const char * name<segway_msgs::msg::Propulsion>()
{
  return "segway_msgs/msg/Propulsion";
}

template<>
struct has_fixed_size<segway_msgs::msg::Propulsion>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<segway_msgs::msg::Propulsion>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<segway_msgs::msg::Propulsion>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEGWAY_MSGS__MSG__DETAIL__PROPULSION__TRAITS_HPP_
