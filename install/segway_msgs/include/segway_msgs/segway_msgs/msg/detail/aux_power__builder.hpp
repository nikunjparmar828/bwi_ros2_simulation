// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:msg/AuxPower.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__AUX_POWER__BUILDER_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__AUX_POWER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/msg/detail/aux_power__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace msg
{

namespace builder
{

class Init_AuxPower_startup_7p2v_batt_voltage
{
public:
  explicit Init_AuxPower_startup_7p2v_batt_voltage(::segway_msgs::msg::AuxPower & msg)
  : msg_(msg)
  {}
  ::segway_msgs::msg::AuxPower startup_7p2v_batt_voltage(::segway_msgs::msg::AuxPower::_startup_7p2v_batt_voltage_type arg)
  {
    msg_.startup_7p2v_batt_voltage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::msg::AuxPower msg_;
};

class Init_AuxPower_aux_bcu_faults
{
public:
  explicit Init_AuxPower_aux_bcu_faults(::segway_msgs::msg::AuxPower & msg)
  : msg_(msg)
  {}
  Init_AuxPower_startup_7p2v_batt_voltage aux_bcu_faults(::segway_msgs::msg::AuxPower::_aux_bcu_faults_type arg)
  {
    msg_.aux_bcu_faults = std::move(arg);
    return Init_AuxPower_startup_7p2v_batt_voltage(msg_);
  }

private:
  ::segway_msgs::msg::AuxPower msg_;
};

class Init_AuxPower_aux_bcu_status
{
public:
  explicit Init_AuxPower_aux_bcu_status(::segway_msgs::msg::AuxPower & msg)
  : msg_(msg)
  {}
  Init_AuxPower_aux_bcu_faults aux_bcu_status(::segway_msgs::msg::AuxPower::_aux_bcu_status_type arg)
  {
    msg_.aux_bcu_status = std::move(arg);
    return Init_AuxPower_aux_bcu_faults(msg_);
  }

private:
  ::segway_msgs::msg::AuxPower msg_;
};

class Init_AuxPower_aux_sys_status
{
public:
  explicit Init_AuxPower_aux_sys_status(::segway_msgs::msg::AuxPower & msg)
  : msg_(msg)
  {}
  Init_AuxPower_aux_bcu_status aux_sys_status(::segway_msgs::msg::AuxPower::_aux_sys_status_type arg)
  {
    msg_.aux_sys_status = std::move(arg);
    return Init_AuxPower_aux_bcu_status(msg_);
  }

private:
  ::segway_msgs::msg::AuxPower msg_;
};

class Init_AuxPower_aux_temp_deg
{
public:
  explicit Init_AuxPower_aux_temp_deg(::segway_msgs::msg::AuxPower & msg)
  : msg_(msg)
  {}
  Init_AuxPower_aux_sys_status aux_temp_deg(::segway_msgs::msg::AuxPower::_aux_temp_deg_type arg)
  {
    msg_.aux_temp_deg = std::move(arg);
    return Init_AuxPower_aux_sys_status(msg_);
  }

private:
  ::segway_msgs::msg::AuxPower msg_;
};

class Init_AuxPower_aux_current
{
public:
  explicit Init_AuxPower_aux_current(::segway_msgs::msg::AuxPower & msg)
  : msg_(msg)
  {}
  Init_AuxPower_aux_temp_deg aux_current(::segway_msgs::msg::AuxPower::_aux_current_type arg)
  {
    msg_.aux_current = std::move(arg);
    return Init_AuxPower_aux_temp_deg(msg_);
  }

private:
  ::segway_msgs::msg::AuxPower msg_;
};

class Init_AuxPower_aux_voltage
{
public:
  explicit Init_AuxPower_aux_voltage(::segway_msgs::msg::AuxPower & msg)
  : msg_(msg)
  {}
  Init_AuxPower_aux_current aux_voltage(::segway_msgs::msg::AuxPower::_aux_voltage_type arg)
  {
    msg_.aux_voltage = std::move(arg);
    return Init_AuxPower_aux_current(msg_);
  }

private:
  ::segway_msgs::msg::AuxPower msg_;
};

class Init_AuxPower_aux_soc
{
public:
  explicit Init_AuxPower_aux_soc(::segway_msgs::msg::AuxPower & msg)
  : msg_(msg)
  {}
  Init_AuxPower_aux_voltage aux_soc(::segway_msgs::msg::AuxPower::_aux_soc_type arg)
  {
    msg_.aux_soc = std::move(arg);
    return Init_AuxPower_aux_voltage(msg_);
  }

private:
  ::segway_msgs::msg::AuxPower msg_;
};

class Init_AuxPower_header
{
public:
  Init_AuxPower_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AuxPower_aux_soc header(::segway_msgs::msg::AuxPower::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AuxPower_aux_soc(msg_);
  }

private:
  ::segway_msgs::msg::AuxPower msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::msg::AuxPower>()
{
  return segway_msgs::msg::builder::Init_AuxPower_header();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__AUX_POWER__BUILDER_HPP_
