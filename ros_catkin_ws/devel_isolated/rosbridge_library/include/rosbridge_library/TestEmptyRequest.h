// Generated by gencpp from file rosbridge_library/TestEmptyRequest.msg
// DO NOT EDIT!


#ifndef ROSBRIDGE_LIBRARY_MESSAGE_TESTEMPTYREQUEST_H
#define ROSBRIDGE_LIBRARY_MESSAGE_TESTEMPTYREQUEST_H


#include <string>
#include <vector>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosbridge_library
{
template <class ContainerAllocator>
struct TestEmptyRequest_
{
  typedef TestEmptyRequest_<ContainerAllocator> Type;

  TestEmptyRequest_()
    {
    }
  TestEmptyRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::rosbridge_library::TestEmptyRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosbridge_library::TestEmptyRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TestEmptyRequest_

typedef ::rosbridge_library::TestEmptyRequest_<std::allocator<void> > TestEmptyRequest;

typedef boost::shared_ptr< ::rosbridge_library::TestEmptyRequest > TestEmptyRequestPtr;
typedef boost::shared_ptr< ::rosbridge_library::TestEmptyRequest const> TestEmptyRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosbridge_library::TestEmptyRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosbridge_library::TestEmptyRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace rosbridge_library

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rosbridge_library::TestEmptyRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosbridge_library::TestEmptyRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosbridge_library::TestEmptyRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosbridge_library::TestEmptyRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosbridge_library::TestEmptyRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosbridge_library::TestEmptyRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosbridge_library::TestEmptyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::rosbridge_library::TestEmptyRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::rosbridge_library::TestEmptyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosbridge_library/TestEmptyRequest";
  }

  static const char* value(const ::rosbridge_library::TestEmptyRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosbridge_library::TestEmptyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::rosbridge_library::TestEmptyRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosbridge_library::TestEmptyRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TestEmptyRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosbridge_library::TestEmptyRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::rosbridge_library::TestEmptyRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // ROSBRIDGE_LIBRARY_MESSAGE_TESTEMPTYREQUEST_H
