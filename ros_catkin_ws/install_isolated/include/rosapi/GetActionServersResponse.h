// Generated by gencpp from file rosapi/GetActionServersResponse.msg
// DO NOT EDIT!


#ifndef ROSAPI_MESSAGE_GETACTIONSERVERSRESPONSE_H
#define ROSAPI_MESSAGE_GETACTIONSERVERSRESPONSE_H


#include <string>
#include <vector>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosapi
{
template <class ContainerAllocator>
struct GetActionServersResponse_
{
  typedef GetActionServersResponse_<ContainerAllocator> Type;

  GetActionServersResponse_()
    : action_servers()  {
    }
  GetActionServersResponse_(const ContainerAllocator& _alloc)
    : action_servers(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _action_servers_type;
  _action_servers_type action_servers;





  typedef boost::shared_ptr< ::rosapi::GetActionServersResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosapi::GetActionServersResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetActionServersResponse_

typedef ::rosapi::GetActionServersResponse_<std::allocator<void> > GetActionServersResponse;

typedef boost::shared_ptr< ::rosapi::GetActionServersResponse > GetActionServersResponsePtr;
typedef boost::shared_ptr< ::rosapi::GetActionServersResponse const> GetActionServersResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosapi::GetActionServersResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosapi::GetActionServersResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rosapi::GetActionServersResponse_<ContainerAllocator1> & lhs, const ::rosapi::GetActionServersResponse_<ContainerAllocator2> & rhs)
{
  return lhs.action_servers == rhs.action_servers;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rosapi::GetActionServersResponse_<ContainerAllocator1> & lhs, const ::rosapi::GetActionServersResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rosapi

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rosapi::GetActionServersResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::GetActionServersResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::GetActionServersResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::GetActionServersResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::GetActionServersResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::GetActionServersResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosapi::GetActionServersResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "46807ba271844ac5ba4730a47556b236";
  }

  static const char* value(const ::rosapi::GetActionServersResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x46807ba271844ac5ULL;
  static const uint64_t static_value2 = 0xba4730a47556b236ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosapi::GetActionServersResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosapi/GetActionServersResponse";
  }

  static const char* value(const ::rosapi::GetActionServersResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosapi::GetActionServersResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] action_servers\n"
;
  }

  static const char* value(const ::rosapi::GetActionServersResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosapi::GetActionServersResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_servers);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetActionServersResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosapi::GetActionServersResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosapi::GetActionServersResponse_<ContainerAllocator>& v)
  {
    s << indent << "action_servers[]" << std::endl;
    for (size_t i = 0; i < v.action_servers.size(); ++i)
    {
      s << indent << "  action_servers[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.action_servers[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSAPI_MESSAGE_GETACTIONSERVERSRESPONSE_H
