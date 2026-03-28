// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:srv/ComputeSpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/srv/compute_speed.hpp"


#ifndef MY_ROBOT_INTERFACES__SRV__DETAIL__COMPUTE_SPEED__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__SRV__DETAIL__COMPUTE_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/srv/detail/compute_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_ComputeSpeed_Request_input
{
public:
  Init_ComputeSpeed_Request_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_interfaces::srv::ComputeSpeed_Request input(::my_robot_interfaces::srv::ComputeSpeed_Request::_input_type arg)
  {
    msg_.input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::srv::ComputeSpeed_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::srv::ComputeSpeed_Request>()
{
  return my_robot_interfaces::srv::builder::Init_ComputeSpeed_Request_input();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_ComputeSpeed_Response_speed
{
public:
  Init_ComputeSpeed_Response_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_interfaces::srv::ComputeSpeed_Response speed(::my_robot_interfaces::srv::ComputeSpeed_Response::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::srv::ComputeSpeed_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::srv::ComputeSpeed_Response>()
{
  return my_robot_interfaces::srv::builder::Init_ComputeSpeed_Response_speed();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_ComputeSpeed_Event_response
{
public:
  explicit Init_ComputeSpeed_Event_response(::my_robot_interfaces::srv::ComputeSpeed_Event & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::srv::ComputeSpeed_Event response(::my_robot_interfaces::srv::ComputeSpeed_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::srv::ComputeSpeed_Event msg_;
};

class Init_ComputeSpeed_Event_request
{
public:
  explicit Init_ComputeSpeed_Event_request(::my_robot_interfaces::srv::ComputeSpeed_Event & msg)
  : msg_(msg)
  {}
  Init_ComputeSpeed_Event_response request(::my_robot_interfaces::srv::ComputeSpeed_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ComputeSpeed_Event_response(msg_);
  }

private:
  ::my_robot_interfaces::srv::ComputeSpeed_Event msg_;
};

class Init_ComputeSpeed_Event_info
{
public:
  Init_ComputeSpeed_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputeSpeed_Event_request info(::my_robot_interfaces::srv::ComputeSpeed_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ComputeSpeed_Event_request(msg_);
  }

private:
  ::my_robot_interfaces::srv::ComputeSpeed_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::srv::ComputeSpeed_Event>()
{
  return my_robot_interfaces::srv::builder::Init_ComputeSpeed_Event_info();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__SRV__DETAIL__COMPUTE_SPEED__BUILDER_HPP_
