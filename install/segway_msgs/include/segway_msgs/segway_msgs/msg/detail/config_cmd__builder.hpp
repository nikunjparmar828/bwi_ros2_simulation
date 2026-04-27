// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:msg/ConfigCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__CONFIG_CMD__BUILDER_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__CONFIG_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/msg/detail/config_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace msg
{

namespace builder
{

class Init_ConfigCmd_gp_param
{
public:
  explicit Init_ConfigCmd_gp_param(::segway_msgs::msg::ConfigCmd & msg)
  : msg_(msg)
  {}
  ::segway_msgs::msg::ConfigCmd gp_param(::segway_msgs::msg::ConfigCmd::_gp_param_type arg)
  {
    msg_.gp_param = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::msg::ConfigCmd msg_;
};

class Init_ConfigCmd_gp_cmd
{
public:
  explicit Init_ConfigCmd_gp_cmd(::segway_msgs::msg::ConfigCmd & msg)
  : msg_(msg)
  {}
  Init_ConfigCmd_gp_param gp_cmd(::segway_msgs::msg::ConfigCmd::_gp_cmd_type arg)
  {
    msg_.gp_cmd = std::move(arg);
    return Init_ConfigCmd_gp_param(msg_);
  }

private:
  ::segway_msgs::msg::ConfigCmd msg_;
};

class Init_ConfigCmd_header
{
public:
  Init_ConfigCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConfigCmd_gp_cmd header(::segway_msgs::msg::ConfigCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ConfigCmd_gp_cmd(msg_);
  }

private:
  ::segway_msgs::msg::ConfigCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::msg::ConfigCmd>()
{
  return segway_msgs::msg::builder::Init_ConfigCmd_header();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__CONFIG_CMD__BUILDER_HPP_
