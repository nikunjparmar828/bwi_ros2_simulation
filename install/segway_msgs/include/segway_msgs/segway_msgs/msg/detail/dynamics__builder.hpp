// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:msg/Dynamics.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__DYNAMICS__BUILDER_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__DYNAMICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/msg/detail/dynamics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace msg
{

namespace builder
{

class Init_Dynamics_odom_yaw_angle_rad
{
public:
  explicit Init_Dynamics_odom_yaw_angle_rad(::segway_msgs::msg::Dynamics & msg)
  : msg_(msg)
  {}
  ::segway_msgs::msg::Dynamics odom_yaw_angle_rad(::segway_msgs::msg::Dynamics::_odom_yaw_angle_rad_type arg)
  {
    msg_.odom_yaw_angle_rad = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::msg::Dynamics msg_;
};

class Init_Dynamics_yaw_angle_rad
{
public:
  explicit Init_Dynamics_yaw_angle_rad(::segway_msgs::msg::Dynamics & msg)
  : msg_(msg)
  {}
  Init_Dynamics_odom_yaw_angle_rad yaw_angle_rad(::segway_msgs::msg::Dynamics::_yaw_angle_rad_type arg)
  {
    msg_.yaw_angle_rad = std::move(arg);
    return Init_Dynamics_odom_yaw_angle_rad(msg_);
  }

private:
  ::segway_msgs::msg::Dynamics msg_;
};

class Init_Dynamics_yaw_accel_mps2
{
public:
  explicit Init_Dynamics_yaw_accel_mps2(::segway_msgs::msg::Dynamics & msg)
  : msg_(msg)
  {}
  Init_Dynamics_yaw_angle_rad yaw_accel_mps2(::segway_msgs::msg::Dynamics::_yaw_accel_mps2_type arg)
  {
    msg_.yaw_accel_mps2 = std::move(arg);
    return Init_Dynamics_yaw_angle_rad(msg_);
  }

private:
  ::segway_msgs::msg::Dynamics msg_;
};

class Init_Dynamics_y_accel_mps2
{
public:
  explicit Init_Dynamics_y_accel_mps2(::segway_msgs::msg::Dynamics & msg)
  : msg_(msg)
  {}
  Init_Dynamics_yaw_accel_mps2 y_accel_mps2(::segway_msgs::msg::Dynamics::_y_accel_mps2_type arg)
  {
    msg_.y_accel_mps2 = std::move(arg);
    return Init_Dynamics_yaw_accel_mps2(msg_);
  }

private:
  ::segway_msgs::msg::Dynamics msg_;
};

class Init_Dynamics_x_accel_mps2
{
public:
  explicit Init_Dynamics_x_accel_mps2(::segway_msgs::msg::Dynamics & msg)
  : msg_(msg)
  {}
  Init_Dynamics_y_accel_mps2 x_accel_mps2(::segway_msgs::msg::Dynamics::_x_accel_mps2_type arg)
  {
    msg_.x_accel_mps2 = std::move(arg);
    return Init_Dynamics_y_accel_mps2(msg_);
  }

private:
  ::segway_msgs::msg::Dynamics msg_;
};

class Init_Dynamics_wheel_pos_m
{
public:
  explicit Init_Dynamics_wheel_pos_m(::segway_msgs::msg::Dynamics & msg)
  : msg_(msg)
  {}
  Init_Dynamics_x_accel_mps2 wheel_pos_m(::segway_msgs::msg::Dynamics::_wheel_pos_m_type arg)
  {
    msg_.wheel_pos_m = std::move(arg);
    return Init_Dynamics_x_accel_mps2(msg_);
  }

private:
  ::segway_msgs::msg::Dynamics msg_;
};

class Init_Dynamics_wheel_vel_mps
{
public:
  explicit Init_Dynamics_wheel_vel_mps(::segway_msgs::msg::Dynamics & msg)
  : msg_(msg)
  {}
  Init_Dynamics_wheel_pos_m wheel_vel_mps(::segway_msgs::msg::Dynamics::_wheel_vel_mps_type arg)
  {
    msg_.wheel_vel_mps = std::move(arg);
    return Init_Dynamics_wheel_pos_m(msg_);
  }

private:
  ::segway_msgs::msg::Dynamics msg_;
};

class Init_Dynamics_yaw_rate_limit_rps
{
public:
  explicit Init_Dynamics_yaw_rate_limit_rps(::segway_msgs::msg::Dynamics & msg)
  : msg_(msg)
  {}
  Init_Dynamics_wheel_vel_mps yaw_rate_limit_rps(::segway_msgs::msg::Dynamics::_yaw_rate_limit_rps_type arg)
  {
    msg_.yaw_rate_limit_rps = std::move(arg);
    return Init_Dynamics_wheel_vel_mps(msg_);
  }

private:
  ::segway_msgs::msg::Dynamics msg_;
};

class Init_Dynamics_vel_limit_mps
{
public:
  explicit Init_Dynamics_vel_limit_mps(::segway_msgs::msg::Dynamics & msg)
  : msg_(msg)
  {}
  Init_Dynamics_yaw_rate_limit_rps vel_limit_mps(::segway_msgs::msg::Dynamics::_vel_limit_mps_type arg)
  {
    msg_.vel_limit_mps = std::move(arg);
    return Init_Dynamics_yaw_rate_limit_rps(msg_);
  }

private:
  ::segway_msgs::msg::Dynamics msg_;
};

class Init_Dynamics_yaw_rate_target_rps
{
public:
  explicit Init_Dynamics_yaw_rate_target_rps(::segway_msgs::msg::Dynamics & msg)
  : msg_(msg)
  {}
  Init_Dynamics_vel_limit_mps yaw_rate_target_rps(::segway_msgs::msg::Dynamics::_yaw_rate_target_rps_type arg)
  {
    msg_.yaw_rate_target_rps = std::move(arg);
    return Init_Dynamics_vel_limit_mps(msg_);
  }

private:
  ::segway_msgs::msg::Dynamics msg_;
};

class Init_Dynamics_y_vel_target_mps
{
public:
  explicit Init_Dynamics_y_vel_target_mps(::segway_msgs::msg::Dynamics & msg)
  : msg_(msg)
  {}
  Init_Dynamics_yaw_rate_target_rps y_vel_target_mps(::segway_msgs::msg::Dynamics::_y_vel_target_mps_type arg)
  {
    msg_.y_vel_target_mps = std::move(arg);
    return Init_Dynamics_yaw_rate_target_rps(msg_);
  }

private:
  ::segway_msgs::msg::Dynamics msg_;
};

class Init_Dynamics_x_vel_target_mps
{
public:
  explicit Init_Dynamics_x_vel_target_mps(::segway_msgs::msg::Dynamics & msg)
  : msg_(msg)
  {}
  Init_Dynamics_y_vel_target_mps x_vel_target_mps(::segway_msgs::msg::Dynamics::_x_vel_target_mps_type arg)
  {
    msg_.x_vel_target_mps = std::move(arg);
    return Init_Dynamics_y_vel_target_mps(msg_);
  }

private:
  ::segway_msgs::msg::Dynamics msg_;
};

class Init_Dynamics_header
{
public:
  Init_Dynamics_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Dynamics_x_vel_target_mps header(::segway_msgs::msg::Dynamics::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Dynamics_x_vel_target_mps(msg_);
  }

private:
  ::segway_msgs::msg::Dynamics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::msg::Dynamics>()
{
  return segway_msgs::msg::builder::Init_Dynamics_header();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__DYNAMICS__BUILDER_HPP_
