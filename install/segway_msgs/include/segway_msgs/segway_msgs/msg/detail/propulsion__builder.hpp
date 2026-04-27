// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:msg/Propulsion.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__PROPULSION__BUILDER_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__PROPULSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/msg/detail/propulsion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace msg
{

namespace builder
{

class Init_Propulsion_min_motor_current_limit
{
public:
  explicit Init_Propulsion_min_motor_current_limit(::segway_msgs::msg::Propulsion & msg)
  : msg_(msg)
  {}
  ::segway_msgs::msg::Propulsion min_motor_current_limit(::segway_msgs::msg::Propulsion::_min_motor_current_limit_type arg)
  {
    msg_.min_motor_current_limit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::msg::Propulsion msg_;
};

class Init_Propulsion_motor_current_limit
{
public:
  explicit Init_Propulsion_motor_current_limit(::segway_msgs::msg::Propulsion & msg)
  : msg_(msg)
  {}
  Init_Propulsion_min_motor_current_limit motor_current_limit(::segway_msgs::msg::Propulsion::_motor_current_limit_type arg)
  {
    msg_.motor_current_limit = std::move(arg);
    return Init_Propulsion_min_motor_current_limit(msg_);
  }

private:
  ::segway_msgs::msg::Propulsion msg_;
};

class Init_Propulsion_max_motor_current
{
public:
  explicit Init_Propulsion_max_motor_current(::segway_msgs::msg::Propulsion & msg)
  : msg_(msg)
  {}
  Init_Propulsion_motor_current_limit max_motor_current(::segway_msgs::msg::Propulsion::_max_motor_current_type arg)
  {
    msg_.max_motor_current = std::move(arg);
    return Init_Propulsion_motor_current_limit(msg_);
  }

private:
  ::segway_msgs::msg::Propulsion msg_;
};

class Init_Propulsion_motor_current
{
public:
  explicit Init_Propulsion_motor_current(::segway_msgs::msg::Propulsion & msg)
  : msg_(msg)
  {}
  Init_Propulsion_max_motor_current motor_current(::segway_msgs::msg::Propulsion::_motor_current_type arg)
  {
    msg_.motor_current = std::move(arg);
    return Init_Propulsion_max_motor_current(msg_);
  }

private:
  ::segway_msgs::msg::Propulsion msg_;
};

class Init_Propulsion_mcu_total_energy
{
public:
  explicit Init_Propulsion_mcu_total_energy(::segway_msgs::msg::Propulsion & msg)
  : msg_(msg)
  {}
  Init_Propulsion_motor_current mcu_total_energy(::segway_msgs::msg::Propulsion::_mcu_total_energy_type arg)
  {
    msg_.mcu_total_energy = std::move(arg);
    return Init_Propulsion_motor_current(msg_);
  }

private:
  ::segway_msgs::msg::Propulsion msg_;
};

class Init_Propulsion_mcu_inst_power
{
public:
  explicit Init_Propulsion_mcu_inst_power(::segway_msgs::msg::Propulsion & msg)
  : msg_(msg)
  {}
  Init_Propulsion_mcu_total_energy mcu_inst_power(::segway_msgs::msg::Propulsion::_mcu_inst_power_type arg)
  {
    msg_.mcu_inst_power = std::move(arg);
    return Init_Propulsion_mcu_total_energy(msg_);
  }

private:
  ::segway_msgs::msg::Propulsion msg_;
};

class Init_Propulsion_mcu_battery_temp_deg
{
public:
  explicit Init_Propulsion_mcu_battery_temp_deg(::segway_msgs::msg::Propulsion & msg)
  : msg_(msg)
  {}
  Init_Propulsion_mcu_inst_power mcu_battery_temp_deg(::segway_msgs::msg::Propulsion::_mcu_battery_temp_deg_type arg)
  {
    msg_.mcu_battery_temp_deg = std::move(arg);
    return Init_Propulsion_mcu_inst_power(msg_);
  }

private:
  ::segway_msgs::msg::Propulsion msg_;
};

class Init_Propulsion_mcu_battery_soc
{
public:
  explicit Init_Propulsion_mcu_battery_soc(::segway_msgs::msg::Propulsion & msg)
  : msg_(msg)
  {}
  Init_Propulsion_mcu_battery_temp_deg mcu_battery_soc(::segway_msgs::msg::Propulsion::_mcu_battery_soc_type arg)
  {
    msg_.mcu_battery_soc = std::move(arg);
    return Init_Propulsion_mcu_battery_temp_deg(msg_);
  }

private:
  ::segway_msgs::msg::Propulsion msg_;
};

class Init_Propulsion_min_propulsion_battery_soc
{
public:
  explicit Init_Propulsion_min_propulsion_battery_soc(::segway_msgs::msg::Propulsion & msg)
  : msg_(msg)
  {}
  Init_Propulsion_mcu_battery_soc min_propulsion_battery_soc(::segway_msgs::msg::Propulsion::_min_propulsion_battery_soc_type arg)
  {
    msg_.min_propulsion_battery_soc = std::move(arg);
    return Init_Propulsion_mcu_battery_soc(msg_);
  }

private:
  ::segway_msgs::msg::Propulsion msg_;
};

class Init_Propulsion_header
{
public:
  Init_Propulsion_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Propulsion_min_propulsion_battery_soc header(::segway_msgs::msg::Propulsion::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Propulsion_min_propulsion_battery_soc(msg_);
  }

private:
  ::segway_msgs::msg::Propulsion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::msg::Propulsion>()
{
  return segway_msgs::msg::builder::Init_Propulsion_header();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__PROPULSION__BUILDER_HPP_
