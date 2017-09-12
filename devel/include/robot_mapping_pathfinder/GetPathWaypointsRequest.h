// Generated by gencpp from file robot_mapping_pathfinder/GetPathWaypointsRequest.msg
// DO NOT EDIT!


#ifndef ROBOT_MAPPING_PATHFINDER_MESSAGE_GETPATHWAYPOINTSREQUEST_H
#define ROBOT_MAPPING_PATHFINDER_MESSAGE_GETPATHWAYPOINTSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose2D.h>
#include <geometry_msgs/Pose2D.h>

namespace robot_mapping_pathfinder
{
template <class ContainerAllocator>
struct GetPathWaypointsRequest_
{
  typedef GetPathWaypointsRequest_<ContainerAllocator> Type;

  GetPathWaypointsRequest_()
    : startpos()
    , endpos()  {
    }
  GetPathWaypointsRequest_(const ContainerAllocator& _alloc)
    : startpos(_alloc)
    , endpos(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _startpos_type;
  _startpos_type startpos;

   typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _endpos_type;
  _endpos_type endpos;




  typedef boost::shared_ptr< ::robot_mapping_pathfinder::GetPathWaypointsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_mapping_pathfinder::GetPathWaypointsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetPathWaypointsRequest_

typedef ::robot_mapping_pathfinder::GetPathWaypointsRequest_<std::allocator<void> > GetPathWaypointsRequest;

typedef boost::shared_ptr< ::robot_mapping_pathfinder::GetPathWaypointsRequest > GetPathWaypointsRequestPtr;
typedef boost::shared_ptr< ::robot_mapping_pathfinder::GetPathWaypointsRequest const> GetPathWaypointsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_mapping_pathfinder::GetPathWaypointsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_mapping_pathfinder::GetPathWaypointsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robot_mapping_pathfinder

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robot_mapping_pathfinder::GetPathWaypointsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_mapping_pathfinder::GetPathWaypointsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_mapping_pathfinder::GetPathWaypointsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_mapping_pathfinder::GetPathWaypointsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_mapping_pathfinder::GetPathWaypointsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_mapping_pathfinder::GetPathWaypointsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_mapping_pathfinder::GetPathWaypointsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4b38870893a4a10eb2a6096ddd927b62";
  }

  static const char* value(const ::robot_mapping_pathfinder::GetPathWaypointsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4b38870893a4a10eULL;
  static const uint64_t static_value2 = 0xb2a6096ddd927b62ULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_mapping_pathfinder::GetPathWaypointsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_mapping_pathfinder/GetPathWaypointsRequest";
  }

  static const char* value(const ::robot_mapping_pathfinder::GetPathWaypointsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_mapping_pathfinder::GetPathWaypointsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Pose2D startpos\n\
geometry_msgs/Pose2D endpos\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose2D\n\
# This expresses a position and orientation on a 2D manifold.\n\
\n\
float64 x\n\
float64 y\n\
float64 theta\n\
";
  }

  static const char* value(const ::robot_mapping_pathfinder::GetPathWaypointsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_mapping_pathfinder::GetPathWaypointsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.startpos);
      stream.next(m.endpos);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetPathWaypointsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_mapping_pathfinder::GetPathWaypointsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_mapping_pathfinder::GetPathWaypointsRequest_<ContainerAllocator>& v)
  {
    s << indent << "startpos: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "  ", v.startpos);
    s << indent << "endpos: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "  ", v.endpos);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_MAPPING_PATHFINDER_MESSAGE_GETPATHWAYPOINTSREQUEST_H
