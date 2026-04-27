// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bwi_perception_interface:msg/DlAmclCoords.idl
// generated code does not contain a copyright notice

#ifndef BWI_PERCEPTION_INTERFACE__MSG__DETAIL__DL_AMCL_COORDS__BUILDER_HPP_
#define BWI_PERCEPTION_INTERFACE__MSG__DETAIL__DL_AMCL_COORDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bwi_perception_interface/msg/detail/dl_amcl_coords__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bwi_perception_interface
{

namespace msg
{

namespace builder
{

class Init_DlAmclCoords_depth
{
public:
  explicit Init_DlAmclCoords_depth(::bwi_perception_interface::msg::DlAmclCoords & msg)
  : msg_(msg)
  {}
  ::bwi_perception_interface::msg::DlAmclCoords depth(::bwi_perception_interface::msg::DlAmclCoords::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bwi_perception_interface::msg::DlAmclCoords msg_;
};

class Init_DlAmclCoords_y
{
public:
  explicit Init_DlAmclCoords_y(::bwi_perception_interface::msg::DlAmclCoords & msg)
  : msg_(msg)
  {}
  Init_DlAmclCoords_depth y(::bwi_perception_interface::msg::DlAmclCoords::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_DlAmclCoords_depth(msg_);
  }

private:
  ::bwi_perception_interface::msg::DlAmclCoords msg_;
};

class Init_DlAmclCoords_x
{
public:
  Init_DlAmclCoords_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DlAmclCoords_y x(::bwi_perception_interface::msg::DlAmclCoords::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_DlAmclCoords_y(msg_);
  }

private:
  ::bwi_perception_interface::msg::DlAmclCoords msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bwi_perception_interface::msg::DlAmclCoords>()
{
  return bwi_perception_interface::msg::builder::Init_DlAmclCoords_x();
}

}  // namespace bwi_perception_interface

#endif  // BWI_PERCEPTION_INTERFACE__MSG__DETAIL__DL_AMCL_COORDS__BUILDER_HPP_
