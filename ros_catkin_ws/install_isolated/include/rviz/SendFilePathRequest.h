// Generated by gencpp from file rviz/SendFilePathRequest.msg
// DO NOT EDIT!


#ifndef RVIZ_MESSAGE_SENDFILEPATHREQUEST_H
#define RVIZ_MESSAGE_SENDFILEPATHREQUEST_H


#include <string>
#include <vector>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/String.h>

namespace rviz
{
template <class ContainerAllocator>
struct SendFilePathRequest_
{
  typedef SendFilePathRequest_<ContainerAllocator> Type;

  SendFilePathRequest_()
    : path()  {
    }
  SendFilePathRequest_(const ContainerAllocator& _alloc)
    : path(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::String_<ContainerAllocator>  _path_type;
  _path_type path;





  typedef boost::shared_ptr< ::rviz::SendFilePathRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rviz::SendFilePathRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SendFilePathRequest_

typedef ::rviz::SendFilePathRequest_<std::allocator<void> > SendFilePathRequest;

typedef boost::shared_ptr< ::rviz::SendFilePathRequest > SendFilePathRequestPtr;
typedef boost::shared_ptr< ::rviz::SendFilePathRequest const> SendFilePathRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rviz::SendFilePathRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rviz::SendFilePathRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rviz::SendFilePathRequest_<ContainerAllocator1> & lhs, const ::rviz::SendFilePathRequest_<ContainerAllocator2> & rhs)
{
  return lhs.path == rhs.path;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rviz::SendFilePathRequest_<ContainerAllocator1> & lhs, const ::rviz::SendFilePathRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rviz

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rviz::SendFilePathRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rviz::SendFilePathRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rviz::SendFilePathRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rviz::SendFilePathRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rviz::SendFilePathRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rviz::SendFilePathRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rviz::SendFilePathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8a631822f6e3078667af5e13f8ab06b7";
  }

  static const char* value(const ::rviz::SendFilePathRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8a631822f6e30786ULL;
  static const uint64_t static_value2 = 0x67af5e13f8ab06b7ULL;
};

template<class ContainerAllocator>
struct DataType< ::rviz::SendFilePathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rviz/SendFilePathRequest";
  }

  static const char* value(const ::rviz::SendFilePathRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rviz::SendFilePathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/String path # absolute path to file or directory\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/String\n"
"string data\n"
;
  }

  static const char* value(const ::rviz::SendFilePathRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rviz::SendFilePathRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.path);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SendFilePathRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rviz::SendFilePathRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rviz::SendFilePathRequest_<ContainerAllocator>& v)
  {
    s << indent << "path: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.path);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RVIZ_MESSAGE_SENDFILEPATHREQUEST_H
