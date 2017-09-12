// Generated by gencpp from file robot_ai_timer/ai_timer.msg
// DO NOT EDIT!


#ifndef ROBOT_AI_TIMER_MESSAGE_AI_TIMER_H
#define ROBOT_AI_TIMER_MESSAGE_AI_TIMER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robot_ai_timer
{
template <class ContainerAllocator>
struct ai_timer_
{
  typedef ai_timer_<ContainerAllocator> Type;

  ai_timer_()
    : elapsed_time(0.0)
    , time_left(0.0)
    , is_finished(false)  {
    }
  ai_timer_(const ContainerAllocator& _alloc)
    : elapsed_time(0.0)
    , time_left(0.0)
    , is_finished(false)  {
  (void)_alloc;
    }



   typedef float _elapsed_time_type;
  _elapsed_time_type elapsed_time;

   typedef float _time_left_type;
  _time_left_type time_left;

   typedef uint8_t _is_finished_type;
  _is_finished_type is_finished;




  typedef boost::shared_ptr< ::robot_ai_timer::ai_timer_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_ai_timer::ai_timer_<ContainerAllocator> const> ConstPtr;

}; // struct ai_timer_

typedef ::robot_ai_timer::ai_timer_<std::allocator<void> > ai_timer;

typedef boost::shared_ptr< ::robot_ai_timer::ai_timer > ai_timerPtr;
typedef boost::shared_ptr< ::robot_ai_timer::ai_timer const> ai_timerConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_ai_timer::ai_timer_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_ai_timer::ai_timer_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robot_ai_timer

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'robot_ai_timer': ['/home/jack/Programming/Robotics/RobotOS/src/robot_ai_timer/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robot_ai_timer::ai_timer_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_ai_timer::ai_timer_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_ai_timer::ai_timer_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_ai_timer::ai_timer_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_ai_timer::ai_timer_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_ai_timer::ai_timer_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_ai_timer::ai_timer_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c4cb09c8090b9afd36452fbb8fd74941";
  }

  static const char* value(const ::robot_ai_timer::ai_timer_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc4cb09c8090b9afdULL;
  static const uint64_t static_value2 = 0x36452fbb8fd74941ULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_ai_timer::ai_timer_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_ai_timer/ai_timer";
  }

  static const char* value(const ::robot_ai_timer::ai_timer_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_ai_timer::ai_timer_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 elapsed_time\n\
float32 time_left\n\
bool is_finished\n\
";
  }

  static const char* value(const ::robot_ai_timer::ai_timer_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_ai_timer::ai_timer_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.elapsed_time);
      stream.next(m.time_left);
      stream.next(m.is_finished);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ai_timer_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_ai_timer::ai_timer_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_ai_timer::ai_timer_<ContainerAllocator>& v)
  {
    s << indent << "elapsed_time: ";
    Printer<float>::stream(s, indent + "  ", v.elapsed_time);
    s << indent << "time_left: ";
    Printer<float>::stream(s, indent + "  ", v.time_left);
    s << indent << "is_finished: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_finished);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_AI_TIMER_MESSAGE_AI_TIMER_H
