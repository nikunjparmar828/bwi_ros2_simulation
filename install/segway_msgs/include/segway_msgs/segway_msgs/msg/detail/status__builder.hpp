// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace msg
{

namespace builder
{

class Init_Status_machine_id
{
public:
  explicit Init_Status_machine_id(::segway_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  ::segway_msgs::msg::Status machine_id(::segway_msgs::msg::Status::_machine_id_type arg)
  {
    msg_.machine_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::msg::Status msg_;
};

class Init_Status_dynamic_response
{
public:
  explicit Init_Status_dynamic_response(::segway_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_machine_id dynamic_response(::segway_msgs::msg::Status::_dynamic_response_type arg)
  {
    msg_.dynamic_response = std::move(arg);
    return Init_Status_machine_id(msg_);
  }

private:
  ::segway_msgs::msg::Status msg_;
};

class Init_Status_operational_state
{
public:
  explicit Init_Status_operational_state(::segway_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_dynamic_response operational_state(::segway_msgs::msg::Status::_operational_state_type arg)
  {
    msg_.operational_state = std::move(arg);
    return Init_Status_dynamic_response(msg_);
  }

private:
  ::segway_msgs::msg::Status msg_;
};

class Init_Status_operational_time
{
public:
  explicit Init_Status_operational_time(::segway_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_operational_state operational_time(::segway_msgs::msg::Status::_operational_time_type arg)
  {
    msg_.operational_time = std::move(arg);
    return Init_Status_operational_state(msg_);
  }

private:
  ::segway_msgs::msg::Status msg_;
};

class Init_Status_mcu_fault_status
{
public:
  explicit Init_Status_mcu_fault_status(::segway_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_operational_time mcu_fault_status(::segway_msgs::msg::Status::_mcu_fault_status_type arg)
  {
    msg_.mcu_fault_status = std::move(arg);
    return Init_Status_operational_time(msg_);
  }

private:
  ::segway_msgs::msg::Status msg_;
};

class Init_Status_fault_status_words
{
public:
  explicit Init_Status_fault_status_words(::segway_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_mcu_fault_status fault_status_words(::segway_msgs::msg::Status::_fault_status_words_type arg)
  {
    msg_.fault_status_words = std::move(arg);
    return Init_Status_mcu_fault_status(msg_);
  }

private:
  ::segway_msgs::msg::Status msg_;
};

class Init_Status_header
{
public:
  Init_Status_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Status_fault_status_words header(::segway_msgs::msg::Status::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Status_fault_status_words(msg_);
  }

private:
  ::segway_msgs::msg::Status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::msg::Status>()
{
  return segway_msgs::msg::builder::Init_Status_header();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_
