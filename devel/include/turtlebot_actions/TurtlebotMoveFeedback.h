// Generated by gencpp from file turtlebot_actions/TurtlebotMoveFeedback.msg
// DO NOT EDIT!


#ifndef TURTLEBOT_ACTIONS_MESSAGE_TURTLEBOTMOVEFEEDBACK_H
#define TURTLEBOT_ACTIONS_MESSAGE_TURTLEBOTMOVEFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace turtlebot_actions
{
template <class ContainerAllocator>
struct TurtlebotMoveFeedback_
{
  typedef TurtlebotMoveFeedback_<ContainerAllocator> Type;

  TurtlebotMoveFeedback_()
    : turn_distance(0.0)
    , forward_distance(0.0)  {
    }
  TurtlebotMoveFeedback_(const ContainerAllocator& _alloc)
    : turn_distance(0.0)
    , forward_distance(0.0)  {
  (void)_alloc;
    }



   typedef float _turn_distance_type;
  _turn_distance_type turn_distance;

   typedef float _forward_distance_type;
  _forward_distance_type forward_distance;




  typedef boost::shared_ptr< ::turtlebot_actions::TurtlebotMoveFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlebot_actions::TurtlebotMoveFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct TurtlebotMoveFeedback_

typedef ::turtlebot_actions::TurtlebotMoveFeedback_<std::allocator<void> > TurtlebotMoveFeedback;

typedef boost::shared_ptr< ::turtlebot_actions::TurtlebotMoveFeedback > TurtlebotMoveFeedbackPtr;
typedef boost::shared_ptr< ::turtlebot_actions::TurtlebotMoveFeedback const> TurtlebotMoveFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlebot_actions::TurtlebotMoveFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlebot_actions::TurtlebotMoveFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace turtlebot_actions

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'turtlebot_actions': ['/home/hl/turtlebot/devel/share/turtlebot_actions/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_actions::TurtlebotMoveFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_actions::TurtlebotMoveFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot_actions::TurtlebotMoveFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot_actions::TurtlebotMoveFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_actions::TurtlebotMoveFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_actions::TurtlebotMoveFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlebot_actions::TurtlebotMoveFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c971f114b08a2a1ad79af4c9ca9f358c";
  }

  static const char* value(const ::turtlebot_actions::TurtlebotMoveFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc971f114b08a2a1aULL;
  static const uint64_t static_value2 = 0xd79af4c9ca9f358cULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlebot_actions::TurtlebotMoveFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlebot_actions/TurtlebotMoveFeedback";
  }

  static const char* value(const ::turtlebot_actions::TurtlebotMoveFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlebot_actions::TurtlebotMoveFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#feedback\n\
float32 turn_distance\n\
float32 forward_distance\n\
\n\
";
  }

  static const char* value(const ::turtlebot_actions::TurtlebotMoveFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlebot_actions::TurtlebotMoveFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.turn_distance);
      stream.next(m.forward_distance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TurtlebotMoveFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlebot_actions::TurtlebotMoveFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::turtlebot_actions::TurtlebotMoveFeedback_<ContainerAllocator>& v)
  {
    s << indent << "turn_distance: ";
    Printer<float>::stream(s, indent + "  ", v.turn_distance);
    s << indent << "forward_distance: ";
    Printer<float>::stream(s, indent + "  ", v.forward_distance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TURTLEBOT_ACTIONS_MESSAGE_TURTLEBOTMOVEFEEDBACK_H
