// Generated by gencpp from file rosbridge_library/TestRequestAndResponseRequest.msg
// DO NOT EDIT!


#ifndef ROSBRIDGE_LIBRARY_MESSAGE_TESTREQUESTANDRESPONSEREQUEST_H
#define ROSBRIDGE_LIBRARY_MESSAGE_TESTREQUESTANDRESPONSEREQUEST_H


#include <string>
#include <vector>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosbridge_library
{
template <class ContainerAllocator>
struct TestRequestAndResponseRequest_
{
  typedef TestRequestAndResponseRequest_<ContainerAllocator> Type;

  TestRequestAndResponseRequest_()
    : data(0)  {
    }
  TestRequestAndResponseRequest_(const ContainerAllocator& _alloc)
    : data(0)  {
  (void)_alloc;
    }



   typedef int32_t _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::rosbridge_library::TestRequestAndResponseRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosbridge_library::TestRequestAndResponseRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TestRequestAndResponseRequest_

typedef ::rosbridge_library::TestRequestAndResponseRequest_<std::allocator<void> > TestRequestAndResponseRequest;

typedef boost::shared_ptr< ::rosbridge_library::TestRequestAndResponseRequest > TestRequestAndResponseRequestPtr;
typedef boost::shared_ptr< ::rosbridge_library::TestRequestAndResponseRequest const> TestRequestAndResponseRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosbridge_library::TestRequestAndResponseRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosbridge_library::TestRequestAndResponseRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rosbridge_library::TestRequestAndResponseRequest_<ContainerAllocator1> & lhs, const ::rosbridge_library::TestRequestAndResponseRequest_<ContainerAllocator2> & rhs)
{
  return lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rosbridge_library::TestRequestAndResponseRequest_<ContainerAllocator1> & lhs, const ::rosbridge_library::TestRequestAndResponseRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rosbridge_library

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rosbridge_library::TestRequestAndResponseRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosbridge_library::TestRequestAndResponseRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosbridge_library::TestRequestAndResponseRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosbridge_library::TestRequestAndResponseRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosbridge_library::TestRequestAndResponseRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosbridge_library::TestRequestAndResponseRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosbridge_library::TestRequestAndResponseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "da5909fbe378aeaf85e547e830cc1bb7";
  }

  static const char* value(const ::rosbridge_library::TestRequestAndResponseRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xda5909fbe378aeafULL;
  static const uint64_t static_value2 = 0x85e547e830cc1bb7ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosbridge_library::TestRequestAndResponseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosbridge_library/TestRequestAndResponseRequest";
  }

  static const char* value(const ::rosbridge_library::TestRequestAndResponseRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosbridge_library::TestRequestAndResponseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 data\n"
;
  }

  static const char* value(const ::rosbridge_library::TestRequestAndResponseRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosbridge_library::TestRequestAndResponseRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TestRequestAndResponseRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosbridge_library::TestRequestAndResponseRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosbridge_library::TestRequestAndResponseRequest_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    Printer<int32_t>::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSBRIDGE_LIBRARY_MESSAGE_TESTREQUESTANDRESPONSEREQUEST_H
