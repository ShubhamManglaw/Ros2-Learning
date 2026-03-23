// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:msg/RobotCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/msg/robot_command.hpp"


#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__ROBOT_COMMAND__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__ROBOT_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/msg/detail/robot_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotCommand_robot_name
{
public:
  explicit Init_RobotCommand_robot_name(::my_robot_interfaces::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::msg::RobotCommand robot_name(::my_robot_interfaces::msg::RobotCommand::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::msg::RobotCommand msg_;
};

class Init_RobotCommand_direction
{
public:
  explicit Init_RobotCommand_direction(::my_robot_interfaces::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_robot_name direction(::my_robot_interfaces::msg::RobotCommand::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_RobotCommand_robot_name(msg_);
  }

private:
  ::my_robot_interfaces::msg::RobotCommand msg_;
};

class Init_RobotCommand_speed
{
public:
  Init_RobotCommand_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotCommand_direction speed(::my_robot_interfaces::msg::RobotCommand::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_RobotCommand_direction(msg_);
  }

private:
  ::my_robot_interfaces::msg::RobotCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::msg::RobotCommand>()
{
  return my_robot_interfaces::msg::builder::Init_RobotCommand_speed();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__ROBOT_COMMAND__BUILDER_HPP_
