// Generated by gencpp from file rospy_tutorials/BadTwoIntsResponse.msg
// DO NOT EDIT!


#ifndef ROSPY_TUTORIALS_MESSAGE_BADTWOINTSRESPONSE_H
#define ROSPY_TUTORIALS_MESSAGE_BADTWOINTSRESPONSE_H


#include <string>
#include <vector>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rospy_tutorials
{
template <class ContainerAllocator>
struct BadTwoIntsResponse_
{
  typedef BadTwoIntsResponse_<ContainerAllocator> Type;

  BadTwoIntsResponse_()
    : sum(0)  {
    }
  BadTwoIntsResponse_(const ContainerAllocator& _alloc)
    : sum(0)  {
  (void)_alloc;
    }



   typedef int32_t _sum_type;
  _sum_type sum;





  typedef boost::shared_ptr< ::rospy_tutorials::BadTwoIntsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rospy_tutorials::BadTwoIntsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct BadTwoIntsResponse_

typedef ::rospy_tutorials::BadTwoIntsResponse_<std::allocator<void> > BadTwoIntsResponse;

typedef boost::shared_ptr< ::rospy_tutorials::BadTwoIntsResponse > BadTwoIntsResponsePtr;
typedef boost::shared_ptr< ::rospy_tutorials::BadTwoIntsResponse const> BadTwoIntsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rospy_tutorials::BadTwoIntsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rospy_tutorials::BadTwoIntsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rospy_tutorials::BadTwoIntsResponse_<ContainerAllocator1> & lhs, const ::rospy_tutorials::BadTwoIntsResponse_<ContainerAllocator2> & rhs)
{
  return lhs.sum == rhs.sum;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rospy_tutorials::BadTwoIntsResponse_<ContainerAllocator1> & lhs, const ::rospy_tutorials::BadTwoIntsResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rospy_tutorials

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rospy_tutorials::BadTwoIntsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rospy_tutorials::BadTwoIntsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rospy_tutorials::BadTwoIntsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rospy_tutorials::BadTwoIntsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rospy_tutorials::BadTwoIntsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rospy_tutorials::BadTwoIntsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rospy_tutorials::BadTwoIntsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0ba699c25c9418c0366f3595c0c8e8ec";
  }

  static const char* value(const ::rospy_tutorials::BadTwoIntsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0ba699c25c9418c0ULL;
  static const uint64_t static_value2 = 0x366f3595c0c8e8ecULL;
};

template<class ContainerAllocator>
struct DataType< ::rospy_tutorials::BadTwoIntsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rospy_tutorials/BadTwoIntsResponse";
  }

  static const char* value(const ::rospy_tutorials::BadTwoIntsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rospy_tutorials::BadTwoIntsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 sum\n"
"\n"
;
  }

  static const char* value(const ::rospy_tutorials::BadTwoIntsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rospy_tutorials::BadTwoIntsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sum);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BadTwoIntsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rospy_tutorials::BadTwoIntsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rospy_tutorials::BadTwoIntsResponse_<ContainerAllocator>& v)
  {
    s << indent << "sum: ";
    Printer<int32_t>::stream(s, indent + "  ", v.sum);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSPY_TUTORIALS_MESSAGE_BADTWOINTSRESPONSE_H
