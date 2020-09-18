// Generated by gencpp from file gazebo_msgs/ApplyBodyWrenchResponse.msg
// DO NOT EDIT!


#ifndef GAZEBO_MSGS_MESSAGE_APPLYBODYWRENCHRESPONSE_H
#define GAZEBO_MSGS_MESSAGE_APPLYBODYWRENCHRESPONSE_H


#include <string>
#include <vector>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gazebo_msgs
{
template <class ContainerAllocator>
struct ApplyBodyWrenchResponse_
{
  typedef ApplyBodyWrenchResponse_<ContainerAllocator> Type;

  ApplyBodyWrenchResponse_()
    : success(false)
    , status_message()  {
    }
  ApplyBodyWrenchResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , status_message(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _status_message_type;
  _status_message_type status_message;





  typedef boost::shared_ptr< ::gazebo_msgs::ApplyBodyWrenchResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_msgs::ApplyBodyWrenchResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ApplyBodyWrenchResponse_

typedef ::gazebo_msgs::ApplyBodyWrenchResponse_<std::allocator<void> > ApplyBodyWrenchResponse;

typedef boost::shared_ptr< ::gazebo_msgs::ApplyBodyWrenchResponse > ApplyBodyWrenchResponsePtr;
typedef boost::shared_ptr< ::gazebo_msgs::ApplyBodyWrenchResponse const> ApplyBodyWrenchResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gazebo_msgs::ApplyBodyWrenchResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gazebo_msgs::ApplyBodyWrenchResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::gazebo_msgs::ApplyBodyWrenchResponse_<ContainerAllocator1> & lhs, const ::gazebo_msgs::ApplyBodyWrenchResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success &&
    lhs.status_message == rhs.status_message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::gazebo_msgs::ApplyBodyWrenchResponse_<ContainerAllocator1> & lhs, const ::gazebo_msgs::ApplyBodyWrenchResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace gazebo_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::ApplyBodyWrenchResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::ApplyBodyWrenchResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::ApplyBodyWrenchResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::ApplyBodyWrenchResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::ApplyBodyWrenchResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::ApplyBodyWrenchResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gazebo_msgs::ApplyBodyWrenchResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2ec6f3eff0161f4257b808b12bc830c2";
  }

  static const char* value(const ::gazebo_msgs::ApplyBodyWrenchResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2ec6f3eff0161f42ULL;
  static const uint64_t static_value2 = 0x57b808b12bc830c2ULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_msgs::ApplyBodyWrenchResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_msgs/ApplyBodyWrenchResponse";
  }

  static const char* value(const ::gazebo_msgs::ApplyBodyWrenchResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gazebo_msgs::ApplyBodyWrenchResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success                              # return true if set wrench successful\n"
"string status_message                     # comments if available\n"
"\n"
;
  }

  static const char* value(const ::gazebo_msgs::ApplyBodyWrenchResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gazebo_msgs::ApplyBodyWrenchResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.status_message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ApplyBodyWrenchResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gazebo_msgs::ApplyBodyWrenchResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gazebo_msgs::ApplyBodyWrenchResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "status_message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.status_message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAZEBO_MSGS_MESSAGE_APPLYBODYWRENCHRESPONSE_H
