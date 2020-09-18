// Generated by gencpp from file rosapi/SetParamResponse.msg
// DO NOT EDIT!


#ifndef ROSAPI_MESSAGE_SETPARAMRESPONSE_H
#define ROSAPI_MESSAGE_SETPARAMRESPONSE_H


#include <string>
#include <vector>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosapi
{
template <class ContainerAllocator>
struct SetParamResponse_
{
  typedef SetParamResponse_<ContainerAllocator> Type;

  SetParamResponse_()
    {
    }
  SetParamResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::rosapi::SetParamResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosapi::SetParamResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetParamResponse_

typedef ::rosapi::SetParamResponse_<std::allocator<void> > SetParamResponse;

typedef boost::shared_ptr< ::rosapi::SetParamResponse > SetParamResponsePtr;
typedef boost::shared_ptr< ::rosapi::SetParamResponse const> SetParamResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosapi::SetParamResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosapi::SetParamResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace rosapi

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rosapi::SetParamResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::SetParamResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::SetParamResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::SetParamResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::SetParamResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::SetParamResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosapi::SetParamResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::rosapi::SetParamResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::rosapi::SetParamResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosapi/SetParamResponse";
  }

  static const char* value(const ::rosapi::SetParamResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosapi::SetParamResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::rosapi::SetParamResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosapi::SetParamResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetParamResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosapi::SetParamResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::rosapi::SetParamResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // ROSAPI_MESSAGE_SETPARAMRESPONSE_H
