// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bwi_tasks_interface:msg/VirtualObstacle.idl
// generated code does not contain a copyright notice

#ifndef BWI_TASKS_INTERFACE__MSG__DETAIL__VIRTUAL_OBSTACLE__BUILDER_HPP_
#define BWI_TASKS_INTERFACE__MSG__DETAIL__VIRTUAL_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bwi_tasks_interface/msg/detail/virtual_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bwi_tasks_interface
{

namespace msg
{

namespace builder
{

class Init_VirtualObstacle_active
{
public:
  explicit Init_VirtualObstacle_active(::bwi_tasks_interface::msg::VirtualObstacle & msg)
  : msg_(msg)
  {}
  ::bwi_tasks_interface::msg::VirtualObstacle active(::bwi_tasks_interface::msg::VirtualObstacle::_active_type arg)
  {
    msg_.active = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bwi_tasks_interface::msg::VirtualObstacle msg_;
};

class Init_VirtualObstacle_radius
{
public:
  explicit Init_VirtualObstacle_radius(::bwi_tasks_interface::msg::VirtualObstacle & msg)
  : msg_(msg)
  {}
  Init_VirtualObstacle_active radius(::bwi_tasks_interface::msg::VirtualObstacle::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_VirtualObstacle_active(msg_);
  }

private:
  ::bwi_tasks_interface::msg::VirtualObstacle msg_;
};

class Init_VirtualObstacle_poses
{
public:
  Init_VirtualObstacle_poses()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VirtualObstacle_radius poses(::bwi_tasks_interface::msg::VirtualObstacle::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return Init_VirtualObstacle_radius(msg_);
  }

private:
  ::bwi_tasks_interface::msg::VirtualObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bwi_tasks_interface::msg::VirtualObstacle>()
{
  return bwi_tasks_interface::msg::builder::Init_VirtualObstacle_poses();
}

}  // namespace bwi_tasks_interface

#endif  // BWI_TASKS_INTERFACE__MSG__DETAIL__VIRTUAL_OBSTACLE__BUILDER_HPP_
