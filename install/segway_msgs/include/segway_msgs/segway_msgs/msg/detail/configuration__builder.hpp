// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:msg/Configuration.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__CONFIGURATION__BUILDER_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__CONFIGURATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/msg/detail/configuration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace msg
{

namespace builder
{

class Init_Configuration_eth_gateway
{
public:
  explicit Init_Configuration_eth_gateway(::segway_msgs::msg::Configuration & msg)
  : msg_(msg)
  {}
  ::segway_msgs::msg::Configuration eth_gateway(::segway_msgs::msg::Configuration::_eth_gateway_type arg)
  {
    msg_.eth_gateway = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::msg::Configuration msg_;
};

class Init_Configuration_eth_subnet_mask
{
public:
  explicit Init_Configuration_eth_subnet_mask(::segway_msgs::msg::Configuration & msg)
  : msg_(msg)
  {}
  Init_Configuration_eth_gateway eth_subnet_mask(::segway_msgs::msg::Configuration::_eth_subnet_mask_type arg)
  {
    msg_.eth_subnet_mask = std::move(arg);
    return Init_Configuration_eth_gateway(msg_);
  }

private:
  ::segway_msgs::msg::Configuration msg_;
};

class Init_Configuration_eth_port_number
{
public:
  explicit Init_Configuration_eth_port_number(::segway_msgs::msg::Configuration & msg)
  : msg_(msg)
  {}
  Init_Configuration_eth_subnet_mask eth_port_number(::segway_msgs::msg::Configuration::_eth_port_number_type arg)
  {
    msg_.eth_port_number = std::move(arg);
    return Init_Configuration_eth_subnet_mask(msg_);
  }

private:
  ::segway_msgs::msg::Configuration msg_;
};

class Init_Configuration_eth_ip_address
{
public:
  explicit Init_Configuration_eth_ip_address(::segway_msgs::msg::Configuration & msg)
  : msg_(msg)
  {}
  Init_Configuration_eth_port_number eth_ip_address(::segway_msgs::msg::Configuration::_eth_ip_address_type arg)
  {
    msg_.eth_ip_address = std::move(arg);
    return Init_Configuration_eth_port_number(msg_);
  }

private:
  ::segway_msgs::msg::Configuration msg_;
};

class Init_Configuration_config_bitmap
{
public:
  explicit Init_Configuration_config_bitmap(::segway_msgs::msg::Configuration & msg)
  : msg_(msg)
  {}
  Init_Configuration_eth_ip_address config_bitmap(::segway_msgs::msg::Configuration::_config_bitmap_type arg)
  {
    msg_.config_bitmap = std::move(arg);
    return Init_Configuration_eth_ip_address(msg_);
  }

private:
  ::segway_msgs::msg::Configuration msg_;
};

class Init_Configuration_gear_ratio
{
public:
  explicit Init_Configuration_gear_ratio(::segway_msgs::msg::Configuration & msg)
  : msg_(msg)
  {}
  Init_Configuration_config_bitmap gear_ratio(::segway_msgs::msg::Configuration::_gear_ratio_type arg)
  {
    msg_.gear_ratio = std::move(arg);
    return Init_Configuration_config_bitmap(msg_);
  }

private:
  ::segway_msgs::msg::Configuration msg_;
};

class Init_Configuration_wheel_track_width_m
{
public:
  explicit Init_Configuration_wheel_track_width_m(::segway_msgs::msg::Configuration & msg)
  : msg_(msg)
  {}
  Init_Configuration_gear_ratio wheel_track_width_m(::segway_msgs::msg::Configuration::_wheel_track_width_m_type arg)
  {
    msg_.wheel_track_width_m = std::move(arg);
    return Init_Configuration_gear_ratio(msg_);
  }

private:
  ::segway_msgs::msg::Configuration msg_;
};

class Init_Configuration_wheelbase_length_m
{
public:
  explicit Init_Configuration_wheelbase_length_m(::segway_msgs::msg::Configuration & msg)
  : msg_(msg)
  {}
  Init_Configuration_wheel_track_width_m wheelbase_length_m(::segway_msgs::msg::Configuration::_wheelbase_length_m_type arg)
  {
    msg_.wheelbase_length_m = std::move(arg);
    return Init_Configuration_wheel_track_width_m(msg_);
  }

private:
  ::segway_msgs::msg::Configuration msg_;
};

class Init_Configuration_tire_diameter_m
{
public:
  explicit Init_Configuration_tire_diameter_m(::segway_msgs::msg::Configuration & msg)
  : msg_(msg)
  {}
  Init_Configuration_wheelbase_length_m tire_diameter_m(::segway_msgs::msg::Configuration::_tire_diameter_m_type arg)
  {
    msg_.tire_diameter_m = std::move(arg);
    return Init_Configuration_wheelbase_length_m(msg_);
  }

private:
  ::segway_msgs::msg::Configuration msg_;
};

class Init_Configuration_yaw_accel_limit_rps2
{
public:
  explicit Init_Configuration_yaw_accel_limit_rps2(::segway_msgs::msg::Configuration & msg)
  : msg_(msg)
  {}
  Init_Configuration_tire_diameter_m yaw_accel_limit_rps2(::segway_msgs::msg::Configuration::_yaw_accel_limit_rps2_type arg)
  {
    msg_.yaw_accel_limit_rps2 = std::move(arg);
    return Init_Configuration_tire_diameter_m(msg_);
  }

private:
  ::segway_msgs::msg::Configuration msg_;
};

class Init_Configuration_yaw_rate_limit_rps
{
public:
  explicit Init_Configuration_yaw_rate_limit_rps(::segway_msgs::msg::Configuration & msg)
  : msg_(msg)
  {}
  Init_Configuration_yaw_accel_limit_rps2 yaw_rate_limit_rps(::segway_msgs::msg::Configuration::_yaw_rate_limit_rps_type arg)
  {
    msg_.yaw_rate_limit_rps = std::move(arg);
    return Init_Configuration_yaw_accel_limit_rps2(msg_);
  }

private:
  ::segway_msgs::msg::Configuration msg_;
};

class Init_Configuration_lateral_accel_limit_mps2
{
public:
  explicit Init_Configuration_lateral_accel_limit_mps2(::segway_msgs::msg::Configuration & msg)
  : msg_(msg)
  {}
  Init_Configuration_yaw_rate_limit_rps lateral_accel_limit_mps2(::segway_msgs::msg::Configuration::_lateral_accel_limit_mps2_type arg)
  {
    msg_.lateral_accel_limit_mps2 = std::move(arg);
    return Init_Configuration_yaw_rate_limit_rps(msg_);
  }

private:
  ::segway_msgs::msg::Configuration msg_;
};

class Init_Configuration_dtz_decel_limit_mps2
{
public:
  explicit Init_Configuration_dtz_decel_limit_mps2(::segway_msgs::msg::Configuration & msg)
  : msg_(msg)
  {}
  Init_Configuration_lateral_accel_limit_mps2 dtz_decel_limit_mps2(::segway_msgs::msg::Configuration::_dtz_decel_limit_mps2_type arg)
  {
    msg_.dtz_decel_limit_mps2 = std::move(arg);
    return Init_Configuration_lateral_accel_limit_mps2(msg_);
  }

private:
  ::segway_msgs::msg::Configuration msg_;
};

class Init_Configuration_decel_limit_mps2
{
public:
  explicit Init_Configuration_decel_limit_mps2(::segway_msgs::msg::Configuration & msg)
  : msg_(msg)
  {}
  Init_Configuration_dtz_decel_limit_mps2 decel_limit_mps2(::segway_msgs::msg::Configuration::_decel_limit_mps2_type arg)
  {
    msg_.decel_limit_mps2 = std::move(arg);
    return Init_Configuration_dtz_decel_limit_mps2(msg_);
  }

private:
  ::segway_msgs::msg::Configuration msg_;
};

class Init_Configuration_accel_limit_mps2
{
public:
  explicit Init_Configuration_accel_limit_mps2(::segway_msgs::msg::Configuration & msg)
  : msg_(msg)
  {}
  Init_Configuration_decel_limit_mps2 accel_limit_mps2(::segway_msgs::msg::Configuration::_accel_limit_mps2_type arg)
  {
    msg_.accel_limit_mps2 = std::move(arg);
    return Init_Configuration_decel_limit_mps2(msg_);
  }

private:
  ::segway_msgs::msg::Configuration msg_;
};

class Init_Configuration_vel_limit_mps
{
public:
  explicit Init_Configuration_vel_limit_mps(::segway_msgs::msg::Configuration & msg)
  : msg_(msg)
  {}
  Init_Configuration_accel_limit_mps2 vel_limit_mps(::segway_msgs::msg::Configuration::_vel_limit_mps_type arg)
  {
    msg_.vel_limit_mps = std::move(arg);
    return Init_Configuration_accel_limit_mps2(msg_);
  }

private:
  ::segway_msgs::msg::Configuration msg_;
};

class Init_Configuration_teleop_yaw_accel_limit_rps2
{
public:
  explicit Init_Configuration_teleop_yaw_accel_limit_rps2(::segway_msgs::msg::Configuration & msg)
  : msg_(msg)
  {}
  Init_Configuration_vel_limit_mps teleop_yaw_accel_limit_rps2(::segway_msgs::msg::Configuration::_teleop_yaw_accel_limit_rps2_type arg)
  {
    msg_.teleop_yaw_accel_limit_rps2 = std::move(arg);
    return Init_Configuration_vel_limit_mps(msg_);
  }

private:
  ::segway_msgs::msg::Configuration msg_;
};

class Init_Configuration_teleop_yaw_rate_limit_rps
{
public:
  explicit Init_Configuration_teleop_yaw_rate_limit_rps(::segway_msgs::msg::Configuration & msg)
  : msg_(msg)
  {}
  Init_Configuration_teleop_yaw_accel_limit_rps2 teleop_yaw_rate_limit_rps(::segway_msgs::msg::Configuration::_teleop_yaw_rate_limit_rps_type arg)
  {
    msg_.teleop_yaw_rate_limit_rps = std::move(arg);
    return Init_Configuration_teleop_yaw_accel_limit_rps2(msg_);
  }

private:
  ::segway_msgs::msg::Configuration msg_;
};

class Init_Configuration_teleop_accel_limit_mps2
{
public:
  explicit Init_Configuration_teleop_accel_limit_mps2(::segway_msgs::msg::Configuration & msg)
  : msg_(msg)
  {}
  Init_Configuration_teleop_yaw_rate_limit_rps teleop_accel_limit_mps2(::segway_msgs::msg::Configuration::_teleop_accel_limit_mps2_type arg)
  {
    msg_.teleop_accel_limit_mps2 = std::move(arg);
    return Init_Configuration_teleop_yaw_rate_limit_rps(msg_);
  }

private:
  ::segway_msgs::msg::Configuration msg_;
};

class Init_Configuration_teleop_vel_limit_mps
{
public:
  explicit Init_Configuration_teleop_vel_limit_mps(::segway_msgs::msg::Configuration & msg)
  : msg_(msg)
  {}
  Init_Configuration_teleop_accel_limit_mps2 teleop_vel_limit_mps(::segway_msgs::msg::Configuration::_teleop_vel_limit_mps_type arg)
  {
    msg_.teleop_vel_limit_mps = std::move(arg);
    return Init_Configuration_teleop_accel_limit_mps2(msg_);
  }

private:
  ::segway_msgs::msg::Configuration msg_;
};

class Init_Configuration_header
{
public:
  Init_Configuration_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Configuration_teleop_vel_limit_mps header(::segway_msgs::msg::Configuration::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Configuration_teleop_vel_limit_mps(msg_);
  }

private:
  ::segway_msgs::msg::Configuration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::msg::Configuration>()
{
  return segway_msgs::msg::builder::Init_Configuration_header();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__CONFIGURATION__BUILDER_HPP_
