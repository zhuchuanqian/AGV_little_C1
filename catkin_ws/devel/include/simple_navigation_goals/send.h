// Generated by gencpp from file simple_navigation_goals/send.msg
// DO NOT EDIT!


#ifndef SIMPLE_NAVIGATION_GOALS_MESSAGE_SEND_H
#define SIMPLE_NAVIGATION_GOALS_MESSAGE_SEND_H


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
struct send_
{
  typedef send_<ContainerAllocator> Type;

  send_()
    : time(0)
    , age(0)
    , RXlinear(0.0)
    , RYlinear(0.0)
    , Rangular(0.0)
    , xpose(0.0)
    , ypose(0.0)
    , zAngle(0.0)  {
    }
  send_(const ContainerAllocator& _alloc)
    : time(0)
    , age(0)
    , RXlinear(0.0)
    , RYlinear(0.0)
    , Rangular(0.0)
    , xpose(0.0)
    , ypose(0.0)
    , zAngle(0.0)  {
  (void)_alloc;
    }



   typedef uint32_t _time_type;
  _time_type time;

   typedef uint8_t _age_type;
  _age_type age;

   typedef double _RXlinear_type;
  _RXlinear_type RXlinear;

   typedef double _RYlinear_type;
  _RYlinear_type RYlinear;

   typedef double _Rangular_type;
  _Rangular_type Rangular;

   typedef double _xpose_type;
  _xpose_type xpose;

   typedef double _ypose_type;
  _ypose_type ypose;

   typedef float _zAngle_type;
  _zAngle_type zAngle;





  typedef boost::shared_ptr< ::simple_navigation_goals::send_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::simple_navigation_goals::send_<ContainerAllocator> const> ConstPtr;

}; // struct send_

typedef ::simple_navigation_goals::send_<std::allocator<void> > send;

typedef boost::shared_ptr< ::simple_navigation_goals::send > sendPtr;
typedef boost::shared_ptr< ::simple_navigation_goals::send const> sendConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::simple_navigation_goals::send_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::simple_navigation_goals::send_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::simple_navigation_goals::send_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::simple_navigation_goals::send_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simple_navigation_goals::send_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simple_navigation_goals::send_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simple_navigation_goals::send_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simple_navigation_goals::send_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::simple_navigation_goals::send_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a5f0e33b00a5cbe9ea65848687eaa24e";
  }

  static const char* value(const ::simple_navigation_goals::send_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa5f0e33b00a5cbe9ULL;
  static const uint64_t static_value2 = 0xea65848687eaa24eULL;
};

template<class ContainerAllocator>
struct DataType< ::simple_navigation_goals::send_<ContainerAllocator> >
{
  static const char* value()
  {
    return "simple_navigation_goals/send";
  }

  static const char* value(const ::simple_navigation_goals::send_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::simple_navigation_goals::send_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 time\n\
uint8 age\n\
\n\
float64 RXlinear\n\
float64 RYlinear\n\
float64 Rangular\n\
float64 xpose\n\
float64 ypose\n\
\n\
float32 zAngle\n\
";
  }

  static const char* value(const ::simple_navigation_goals::send_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::simple_navigation_goals::send_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.time);
      stream.next(m.age);
      stream.next(m.RXlinear);
      stream.next(m.RYlinear);
      stream.next(m.Rangular);
      stream.next(m.xpose);
      stream.next(m.ypose);
      stream.next(m.zAngle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct send_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::simple_navigation_goals::send_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::simple_navigation_goals::send_<ContainerAllocator>& v)
  {
    s << indent << "time: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.time);
    s << indent << "age: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.age);
    s << indent << "RXlinear: ";
    Printer<double>::stream(s, indent + "  ", v.RXlinear);
    s << indent << "RYlinear: ";
    Printer<double>::stream(s, indent + "  ", v.RYlinear);
    s << indent << "Rangular: ";
    Printer<double>::stream(s, indent + "  ", v.Rangular);
    s << indent << "xpose: ";
    Printer<double>::stream(s, indent + "  ", v.xpose);
    s << indent << "ypose: ";
    Printer<double>::stream(s, indent + "  ", v.ypose);
    s << indent << "zAngle: ";
    Printer<float>::stream(s, indent + "  ", v.zAngle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SIMPLE_NAVIGATION_GOALS_MESSAGE_SEND_H
