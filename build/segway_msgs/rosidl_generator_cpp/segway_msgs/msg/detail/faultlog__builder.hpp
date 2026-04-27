// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:msg/Faultlog.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__FAULTLOG__BUILDER_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__FAULTLOG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/msg/detail/faultlog__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace msg
{

namespace builder
{

class Init_Faultlog_data
{
public:
  Init_Faultlog_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::msg::Faultlog data(::segway_msgs::msg::Faultlog::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::msg::Faultlog msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::msg::Faultlog>()
{
  return segway_msgs::msg::builder::Init_Faultlog_data();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__FAULTLOG__BUILDER_HPP_
