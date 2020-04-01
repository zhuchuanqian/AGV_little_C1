// Generated by gencpp from file simple_navigation_goals/sensor.msg
// DO NOT EDIT!


#ifndef SIMPLE_NAVIGATION_GOALS_MESSAGE_SENSOR_H
#define SIMPLE_NAVIGATION_GOALS_MESSAGE_SENSOR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace simple_navigation_goals
{
template <class ContainerAllocator>
struct sensor_
{
  typedef sensor_<ContainerAllocator> Type;

  sensor_()
    : IR0(0)
    , IR1(0)
    , USA(0)
    , USB(0)
    , USL(0)
    , USR(0)  {
    }
  sensor_(const ContainerAllocator& _alloc)
    : IR0(0)
    , IR1(0)
    , USA(0)
    , USB(0)
    , USL(0)
    , USR(0)  {
  (void)_alloc;
    }



   typedef int32_t _IR0_type;
  _IR0_type IR0;

   typedef int32_t _IR1_type;
  _IR1_type IR1;

   typedef int32_t _USA_type;
  _USA_type USA;

   typedef int32_t _USB_type;
  _USB_type USB;

   typedef int32_t _USL_type;
  _USL_type USL;

   typedef int32_t _USR_type;
  _USR_type USR;





  typedef boost::shared_ptr< ::simple_navigation_goals::sensor_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::simple_navigation_goals::sensor_<ContainerAllocator> const> ConstPtr;

}; // struct sensor_

typedef ::simple_navigation_goals::sensor_<std::allocator<void> > sensor;

typedef boost::shared_ptr< ::simple_navigation_goals::sensor > sensorPtr;
typedef boost::shared_ptr< ::simple_navigation_goals::sensor const> sensorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::simple_navigation_goals::sensor_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::simple_navigation_goals::sensor_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace simple_navigation_goals

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'simple_navigation_goals': ['/home/kmakise/catkin_ws/src/simple_navigation_goals/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::simple_navigation_goals::sensor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::simple_navigation_goals::sensor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simple_navigation_goals::sensor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simple_navigation_goals::sensor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simple_navigation_goals::sensor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simple_navigation_goals::sensor_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::simple_navigation_goals::sensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7b2fc253ad368634d89fd7b84900def5";
  }

  static const char* value(const ::simple_navigation_goals::sensor_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7b2fc253ad368634ULL;
  static const uint64_t static_value2 = 0xd89fd7b84900def5ULL;
};

template<class ContainerAllocator>
struct DataType< ::simple_navigation_goals::sensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "simple_navigation_goals/sensor";
  }

  static const char* value(const ::simple_navigation_goals::sensor_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::simple_navigation_goals::sensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 IR0\n\
int32 IR1\n\
int32 USA\n\
int32 USB\n\
int32 USL\n\
int32 USR\n\
";
  }

  static const char* value(const ::simple_navigation_goals::sensor_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::simple_navigation_goals::sensor_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.IR0);
      stream.next(m.IR1);
      stream.next(m.USA);
      stream.next(m.USB);
      stream.next(m.USL);
      stream.next(m.USR);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct sensor_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::simple_navigation_goals::sensor_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::simple_navigation_goals::sensor_<ContainerAllocator>& v)
  {
    s << indent << "IR0: ";
    Printer<int32_t>::stream(s, indent + "  ", v.IR0);
    s << indent << "IR1: ";
    Printer<int32_t>::stream(s, indent + "  ", v.IR1);
    s << indent << "USA: ";
    Printer<int32_t>::stream(s, indent + "  ", v.USA);
    s << indent << "USB: ";
    Printer<int32_t>::stream(s, indent + "  ", v.USB);
    s << indent << "USL: ";
    Printer<int32_t>::stream(s, indent + "  ", v.USL);
    s << indent << "USR: ";
    Printer<int32_t>::stream(s, indent + "  ", v.USR);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SIMPLE_NAVIGATION_GOALS_MESSAGE_SENSOR_H
