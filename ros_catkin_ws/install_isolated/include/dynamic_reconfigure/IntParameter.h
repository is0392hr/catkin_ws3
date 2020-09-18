// Generated by gencpp from file dynamic_reconfigure/IntParameter.msg
// DO NOT EDIT!


#ifndef DYNAMIC_RECONFIGURE_MESSAGE_INTPARAMETER_H
#define DYNAMIC_RECONFIGURE_MESSAGE_INTPARAMETER_H


#include <string>
#include <vector>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dynamic_reconfigure
{
template <class ContainerAllocator>
struct IntParameter_
{
  typedef IntParameter_<ContainerAllocator> Type;

  IntParameter_()
    : name()
    , value(0)  {
    }
  IntParameter_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , value(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef int32_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::dynamic_reconfigure::IntParameter_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamic_reconfigure::IntParameter_<ContainerAllocator> const> ConstPtr;

}; // struct IntParameter_

typedef ::dynamic_reconfigure::IntParameter_<std::allocator<void> > IntParameter;

typedef boost::shared_ptr< ::dynamic_reconfigure::IntParameter > IntParameterPtr;
typedef boost::shared_ptr< ::dynamic_reconfigure::IntParameter const> IntParameterConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dynamic_reconfigure::IntParameter_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dynamic_reconfigure::IntParameter_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dynamic_reconfigure::IntParameter_<ContainerAllocator1> & lhs, const ::dynamic_reconfigure::IntParameter_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dynamic_reconfigure::IntParameter_<ContainerAllocator1> & lhs, const ::dynamic_reconfigure::IntParameter_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dynamic_reconfigure

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dynamic_reconfigure::IntParameter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamic_reconfigure::IntParameter_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dynamic_reconfigure::IntParameter_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dynamic_reconfigure::IntParameter_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamic_reconfigure::IntParameter_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamic_reconfigure::IntParameter_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dynamic_reconfigure::IntParameter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "65fedc7a0cbfb8db035e46194a350bf1";
  }

  static const char* value(const ::dynamic_reconfigure::IntParameter_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x65fedc7a0cbfb8dbULL;
  static const uint64_t static_value2 = 0x035e46194a350bf1ULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamic_reconfigure::IntParameter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dynamic_reconfigure/IntParameter";
  }

  static const char* value(const ::dynamic_reconfigure::IntParameter_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dynamic_reconfigure::IntParameter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n"
"int32 value\n"
;
  }

  static const char* value(const ::dynamic_reconfigure::IntParameter_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dynamic_reconfigure::IntParameter_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IntParameter_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamic_reconfigure::IntParameter_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dynamic_reconfigure::IntParameter_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "value: ";
    Printer<int32_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DYNAMIC_RECONFIGURE_MESSAGE_INTPARAMETER_H
