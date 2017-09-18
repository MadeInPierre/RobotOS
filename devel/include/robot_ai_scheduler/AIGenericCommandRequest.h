// Generated by gencpp from file robot_ai_scheduler/AIGenericCommandRequest.msg
// DO NOT EDIT!


#ifndef ROBOT_AI_SCHEDULER_MESSAGE_AIGENERICCOMMANDREQUEST_H
#define ROBOT_AI_SCHEDULER_MESSAGE_AIGENERICCOMMANDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robot_ai_scheduler
{
template <class ContainerAllocator>
struct AIGenericCommandRequest_
{
  typedef AIGenericCommandRequest_<ContainerAllocator> Type;

  AIGenericCommandRequest_()
    : department()
    , destination()
    , command()
    , params()  {
    }
  AIGenericCommandRequest_(const ContainerAllocator& _alloc)
    : department(_alloc)
    , destination(_alloc)
    , command(_alloc)
    , params(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _department_type;
  _department_type department;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _destination_type;
  _destination_type destination;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _command_type;
  _command_type command;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _params_type;
  _params_type params;




  typedef boost::shared_ptr< ::robot_ai_scheduler::AIGenericCommandRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_ai_scheduler::AIGenericCommandRequest_<ContainerAllocator> const> ConstPtr;

}; // struct AIGenericCommandRequest_

typedef ::robot_ai_scheduler::AIGenericCommandRequest_<std::allocator<void> > AIGenericCommandRequest;

typedef boost::shared_ptr< ::robot_ai_scheduler::AIGenericCommandRequest > AIGenericCommandRequestPtr;
typedef boost::shared_ptr< ::robot_ai_scheduler::AIGenericCommandRequest const> AIGenericCommandRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_ai_scheduler::AIGenericCommandRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_ai_scheduler::AIGenericCommandRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robot_ai_scheduler

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'robot_ai_scheduler': ['/home/jack/Programming/Robotics/RobotOS/src/robot_ai_scheduler/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robot_ai_scheduler::AIGenericCommandRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_ai_scheduler::AIGenericCommandRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_ai_scheduler::AIGenericCommandRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_ai_scheduler::AIGenericCommandRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_ai_scheduler::AIGenericCommandRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_ai_scheduler::AIGenericCommandRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_ai_scheduler::AIGenericCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "121cf84ef2958e8916f9792ec575e134";
  }

  static const char* value(const ::robot_ai_scheduler::AIGenericCommandRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x121cf84ef2958e89ULL;
  static const uint64_t static_value2 = 0x16f9792ec575e134ULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_ai_scheduler::AIGenericCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_ai_scheduler/AIGenericCommandRequest";
  }

  static const char* value(const ::robot_ai_scheduler::AIGenericCommandRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_ai_scheduler::AIGenericCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string department\n\
string destination\n\
string command\n\
string params\n\
";
  }

  static const char* value(const ::robot_ai_scheduler::AIGenericCommandRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_ai_scheduler::AIGenericCommandRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.department);
      stream.next(m.destination);
      stream.next(m.command);
      stream.next(m.params);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AIGenericCommandRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_ai_scheduler::AIGenericCommandRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_ai_scheduler::AIGenericCommandRequest_<ContainerAllocator>& v)
  {
    s << indent << "department: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.department);
    s << indent << "destination: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.destination);
    s << indent << "command: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.command);
    s << indent << "params: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.params);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_AI_SCHEDULER_MESSAGE_AIGENERICCOMMANDREQUEST_H