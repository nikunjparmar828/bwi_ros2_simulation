// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from segway_msgs:msg/AuxPower.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__AUX_POWER__TRAITS_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__AUX_POWER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "segway_msgs/msg/detail/aux_power__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace segway_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AuxPower & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: aux_soc
  {
    if (msg.aux_soc.size() == 0) {
      out << "aux_soc: []";
    } else {
      out << "aux_soc: [";
      size_t pending_items = msg.aux_soc.size();
      for (auto item : msg.aux_soc) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: aux_voltage
  {
    if (msg.aux_voltage.size() == 0) {
      out << "aux_voltage: []";
    } else {
      out << "aux_voltage: [";
      size_t pending_items = msg.aux_voltage.size();
      for (auto item : msg.aux_voltage) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: aux_current
  {
    if (msg.aux_current.size() == 0) {
      out << "aux_current: []";
    } else {
      out << "aux_current: [";
      size_t pending_items = msg.aux_current.size();
      for (auto item : msg.aux_current) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: aux_temp_deg
  {
    if (msg.aux_temp_deg.size() == 0) {
      out << "aux_temp_deg: []";
    } else {
      out << "aux_temp_deg: [";
      size_t pending_items = msg.aux_temp_deg.size();
      for (auto item : msg.aux_temp_deg) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: aux_sys_status
  {
    if (msg.aux_sys_status.size() == 0) {
      out << "aux_sys_status: []";
    } else {
      out << "aux_sys_status: [";
      size_t pending_items = msg.aux_sys_status.size();
      for (auto item : msg.aux_sys_status) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: aux_bcu_status
  {
    if (msg.aux_bcu_status.size() == 0) {
      out << "aux_bcu_status: []";
    } else {
      out << "aux_bcu_status: [";
      size_t pending_items = msg.aux_bcu_status.size();
      for (auto item : msg.aux_bcu_status) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: aux_bcu_faults
  {
    if (msg.aux_bcu_faults.size() == 0) {
      out << "aux_bcu_faults: []";
    } else {
      out << "aux_bcu_faults: [";
      size_t pending_items = msg.aux_bcu_faults.size();
      for (auto item : msg.aux_bcu_faults) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: startup_7p2v_batt_voltage
  {
    out << "startup_7p2v_batt_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.startup_7p2v_batt_voltage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AuxPower & msg,
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

  // member: aux_soc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.aux_soc.size() == 0) {
      out << "aux_soc: []\n";
    } else {
      out << "aux_soc:\n";
      for (auto item : msg.aux_soc) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: aux_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.aux_voltage.size() == 0) {
      out << "aux_voltage: []\n";
    } else {
      out << "aux_voltage:\n";
      for (auto item : msg.aux_voltage) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: aux_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.aux_current.size() == 0) {
      out << "aux_current: []\n";
    } else {
      out << "aux_current:\n";
      for (auto item : msg.aux_current) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: aux_temp_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.aux_temp_deg.size() == 0) {
      out << "aux_temp_deg: []\n";
    } else {
      out << "aux_temp_deg:\n";
      for (auto item : msg.aux_temp_deg) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: aux_sys_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.aux_sys_status.size() == 0) {
      out << "aux_sys_status: []\n";
    } else {
      out << "aux_sys_status:\n";
      for (auto item : msg.aux_sys_status) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: aux_bcu_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.aux_bcu_status.size() == 0) {
      out << "aux_bcu_status: []\n";
    } else {
      out << "aux_bcu_status:\n";
      for (auto item : msg.aux_bcu_status) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: aux_bcu_faults
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.aux_bcu_faults.size() == 0) {
      out << "aux_bcu_faults: []\n";
    } else {
      out << "aux_bcu_faults:\n";
      for (auto item : msg.aux_bcu_faults) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: startup_7p2v_batt_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "startup_7p2v_batt_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.startup_7p2v_batt_voltage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AuxPower & msg, bool use_flow_style = false)
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
  const segway_msgs::msg::AuxPower & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::msg::AuxPower & msg)
{
  return segway_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::msg::AuxPower>()
{
  return "segway_msgs::msg::AuxPower";
}

template<>
inline const char * name<segway_msgs::msg::AuxPower>()
{
  return "segway_msgs/msg/AuxPower";
}

template<>
struct has_fixed_size<segway_msgs::msg::AuxPower>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<segway_msgs::msg::AuxPower>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<segway_msgs::msg::AuxPower>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEGWAY_MSGS__MSG__DETAIL__AUX_POWER__TRAITS_HPP_
