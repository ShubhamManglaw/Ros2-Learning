// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:msg/Distance.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/msg/distance.hpp"


#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__DISTANCE__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__DISTANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/msg/detail/distance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_Distance_distance
{
public:
  Init_Distance_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_interfaces::msg::Distance distance(::my_robot_interfaces::msg::Distance::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::msg::Distance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::msg::Distance>()
{
  return my_robot_interfaces::msg::builder::Init_Distance_distance();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__DISTANCE__BUILDER_HPP_
