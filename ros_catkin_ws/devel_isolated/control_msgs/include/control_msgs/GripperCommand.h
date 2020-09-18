// Generated by gencpp from file control_msgs/GripperCommand.msg
// DO NOT EDIT!


#ifndef CONTROL_MSGS_MESSAGE_GRIPPERCOMMAND_H
#define CONTROL_MSGS_MESSAGE_GRIPPERCOMMAND_H


#include <string>
#include <vector>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace control_msgs
{
template <class ContainerAllocator>
struct GripperCommand_
{
  typedef GripperCommand_<ContainerAllocator> Type;

  GripperCommand_()
    : position(0.0)
    , max_effort(0.0)  {
    }
  GripperCommand_(const ContainerAllocator& _alloc)
    : position(0.0)
    , max_effort(0.0)  {
  (void)_alloc;
    }



   typedef double _position_type;
  _position_type position;

   typedef double _max_effort_type;
  _max_effort_type max_effort;





  typedef boost::shared_ptr< ::control_msgs::GripperCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::control_msgs::GripperCommand_<ContainerAllocator> const> ConstPtr;

}; // struct GripperCommand_

typedef ::control_msgs::GripperCommand_<std::allocator<void> > GripperCommand;

typedef boost::shared_ptr< ::control_msgs::GripperCommand > GripperCommandPtr;
typedef boost::shared_ptr< ::control_msgs::GripperCommand const> GripperCommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::control_msgs::GripperCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::control_msgs::GripperCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::control_msgs::GripperCommand_<ContainerAllocator1> & lhs, const ::control_msgs::GripperCommand_<ContainerAllocator2> & rhs)
{
  return lhs.position == rhs.position &&
    lhs.max_effort == rhs.max_effort;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::control_msgs::GripperCommand_<ContainerAllocator1> & lhs, const ::control_msgs::GripperCommand_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace control_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::control_msgs::GripperCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::GripperCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::GripperCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::GripperCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::GripperCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::GripperCommand_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::control_msgs::GripperCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "680acaff79486f017132a7f198d40f08";
  }

  static const char* value(const ::control_msgs::GripperCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x680acaff79486f01ULL;
  static const uint64_t static_value2 = 0x7132a7f198d40f08ULL;
};

template<class ContainerAllocator>
struct DataType< ::control_msgs::GripperCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "control_msgs/GripperCommand";
  }

  static const char* value(const ::control_msgs::GripperCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::control_msgs::GripperCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 position\n"
"float64 max_effort\n"
;
  }

  static const char* value(const ::control_msgs::GripperCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::control_msgs::GripperCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.position);
      stream.next(m.max_effort);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GripperCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::control_msgs::GripperCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::control_msgs::GripperCommand_<ContainerAllocator>& v)
  {
    s << indent << "position: ";
    Printer<double>::stream(s, indent + "  ", v.position);
    s << indent << "max_effort: ";
    Printer<double>::stream(s, indent + "  ", v.max_effort);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONTROL_MSGS_MESSAGE_GRIPPERCOMMAND_H
