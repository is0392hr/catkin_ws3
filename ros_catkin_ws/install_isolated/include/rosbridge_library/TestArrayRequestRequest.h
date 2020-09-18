// Generated by gencpp from file rosbridge_library/TestArrayRequestRequest.msg
// DO NOT EDIT!


#ifndef ROSBRIDGE_LIBRARY_MESSAGE_TESTARRAYREQUESTREQUEST_H
#define ROSBRIDGE_LIBRARY_MESSAGE_TESTARRAYREQUESTREQUEST_H


#include <string>
#include <vector>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosbridge_library
{
template <class ContainerAllocator>
struct TestArrayRequestRequest_
{
  typedef TestArrayRequestRequest_<ContainerAllocator> Type;

  TestArrayRequestRequest_()
    : int()  {
    }
  TestArrayRequestRequest_(const ContainerAllocator& _alloc)
    : int(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _int_type;
  _int_type int;





  typedef boost::shared_ptr< ::rosbridge_library::TestArrayRequestRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosbridge_library::TestArrayRequestRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TestArrayRequestRequest_

typedef ::rosbridge_library::TestArrayRequestRequest_<std::allocator<void> > TestArrayRequestRequest;

typedef boost::shared_ptr< ::rosbridge_library::TestArrayRequestRequest > TestArrayRequestRequestPtr;
typedef boost::shared_ptr< ::rosbridge_library::TestArrayRequestRequest const> TestArrayRequestRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosbridge_library::TestArrayRequestRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosbridge_library::TestArrayRequestRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rosbridge_library::TestArrayRequestRequest_<ContainerAllocator1> & lhs, const ::rosbridge_library::TestArrayRequestRequest_<ContainerAllocator2> & rhs)
{
  return lhs.int == rhs.int;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rosbridge_library::TestArrayRequestRequest_<ContainerAllocator1> & lhs, const ::rosbridge_library::TestArrayRequestRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rosbridge_library

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rosbridge_library::TestArrayRequestRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosbridge_library::TestArrayRequestRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosbridge_library::TestArrayRequestRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosbridge_library::TestArrayRequestRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosbridge_library::TestArrayRequestRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosbridge_library::TestArrayRequestRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosbridge_library::TestArrayRequestRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3d7cfb7e4aa0844868966efa8a264398";
  }

  static const char* value(const ::rosbridge_library::TestArrayRequestRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3d7cfb7e4aa08448ULL;
  static const uint64_t static_value2 = 0x68966efa8a264398ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosbridge_library::TestArrayRequestRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosbridge_library/TestArrayRequestRequest";
  }

  static const char* value(const ::rosbridge_library::TestArrayRequestRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosbridge_library::TestArrayRequestRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32[] int\n"
;
  }

  static const char* value(const ::rosbridge_library::TestArrayRequestRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosbridge_library::TestArrayRequestRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.int);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TestArrayRequestRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosbridge_library::TestArrayRequestRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosbridge_library::TestArrayRequestRequest_<ContainerAllocator>& v)
  {
    s << indent << "int[]" << std::endl;
    for (size_t i = 0; i < v.int.size(); ++i)
    {
      s << indent << "  int[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.int[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSBRIDGE_LIBRARY_MESSAGE_TESTARRAYREQUESTREQUEST_H
