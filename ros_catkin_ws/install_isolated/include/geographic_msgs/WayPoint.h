// Generated by gencpp from file geographic_msgs/WayPoint.msg
// DO NOT EDIT!


#ifndef GEOGRAPHIC_MSGS_MESSAGE_WAYPOINT_H
#define GEOGRAPHIC_MSGS_MESSAGE_WAYPOINT_H


#include <string>
#include <vector>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <uuid_msgs/UniqueID.h>
#include <geographic_msgs/GeoPoint.h>
#include <geographic_msgs/KeyValue.h>

namespace geographic_msgs
{
template <class ContainerAllocator>
struct WayPoint_
{
  typedef WayPoint_<ContainerAllocator> Type;

  WayPoint_()
    : id()
    , position()
    , props()  {
    }
  WayPoint_(const ContainerAllocator& _alloc)
    : id(_alloc)
    , position(_alloc)
    , props(_alloc)  {
  (void)_alloc;
    }



   typedef  ::uuid_msgs::UniqueID_<ContainerAllocator>  _id_type;
  _id_type id;

   typedef  ::geographic_msgs::GeoPoint_<ContainerAllocator>  _position_type;
  _position_type position;

   typedef std::vector< ::geographic_msgs::KeyValue_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geographic_msgs::KeyValue_<ContainerAllocator> >::other >  _props_type;
  _props_type props;





  typedef boost::shared_ptr< ::geographic_msgs::WayPoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::geographic_msgs::WayPoint_<ContainerAllocator> const> ConstPtr;

}; // struct WayPoint_

typedef ::geographic_msgs::WayPoint_<std::allocator<void> > WayPoint;

typedef boost::shared_ptr< ::geographic_msgs::WayPoint > WayPointPtr;
typedef boost::shared_ptr< ::geographic_msgs::WayPoint const> WayPointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::geographic_msgs::WayPoint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::geographic_msgs::WayPoint_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::geographic_msgs::WayPoint_<ContainerAllocator1> & lhs, const ::geographic_msgs::WayPoint_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.position == rhs.position &&
    lhs.props == rhs.props;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::geographic_msgs::WayPoint_<ContainerAllocator1> & lhs, const ::geographic_msgs::WayPoint_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace geographic_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::geographic_msgs::WayPoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::geographic_msgs::WayPoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::geographic_msgs::WayPoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::geographic_msgs::WayPoint_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::geographic_msgs::WayPoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::geographic_msgs::WayPoint_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::geographic_msgs::WayPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ef04f823aef332455a49eaec3f1761b7";
  }

  static const char* value(const ::geographic_msgs::WayPoint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xef04f823aef33245ULL;
  static const uint64_t static_value2 = 0x5a49eaec3f1761b7ULL;
};

template<class ContainerAllocator>
struct DataType< ::geographic_msgs::WayPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geographic_msgs/WayPoint";
  }

  static const char* value(const ::geographic_msgs::WayPoint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::geographic_msgs::WayPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Way-point element for a geographic map.\n"
"\n"
"uuid_msgs/UniqueID id   # Unique way-point identifier\n"
"GeoPoint   position     # Position relative to WGS 84 ellipsoid\n"
"KeyValue[] props        # Key/value properties for this point\n"
"\n"
"================================================================================\n"
"MSG: uuid_msgs/UniqueID\n"
"# A universally unique identifier (UUID).\n"
"#\n"
"#  http://en.wikipedia.org/wiki/Universally_unique_identifier\n"
"#  http://tools.ietf.org/html/rfc4122.html\n"
"\n"
"uint8[16] uuid\n"
"\n"
"================================================================================\n"
"MSG: geographic_msgs/GeoPoint\n"
"# Geographic point, using the WGS 84 reference ellipsoid.\n"
"\n"
"# Latitude [degrees]. Positive is north of equator; negative is south\n"
"# (-90 <= latitude <= +90).\n"
"float64 latitude\n"
"\n"
"# Longitude [degrees]. Positive is east of prime meridian; negative is\n"
"# west (-180 <= longitude <= +180). At the poles, latitude is -90 or\n"
"# +90, and longitude is irrelevant, but must be in range.\n"
"float64 longitude\n"
"\n"
"# Altitude [m]. Positive is above the WGS 84 ellipsoid (NaN if unspecified).\n"
"float64 altitude\n"
"\n"
"================================================================================\n"
"MSG: geographic_msgs/KeyValue\n"
"# Geographic map tag (key, value) pair\n"
"#\n"
"# This is equivalent to diagnostic_msgs/KeyValue, repeated here to\n"
"# avoid introducing a trivial stack dependency.\n"
"\n"
"string key                     # tag label\n"
"string value                   # corresponding value\n"
;
  }

  static const char* value(const ::geographic_msgs::WayPoint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::geographic_msgs::WayPoint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.position);
      stream.next(m.props);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WayPoint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::geographic_msgs::WayPoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::geographic_msgs::WayPoint_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    s << std::endl;
    Printer< ::uuid_msgs::UniqueID_<ContainerAllocator> >::stream(s, indent + "  ", v.id);
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geographic_msgs::GeoPoint_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "props[]" << std::endl;
    for (size_t i = 0; i < v.props.size(); ++i)
    {
      s << indent << "  props[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geographic_msgs::KeyValue_<ContainerAllocator> >::stream(s, indent + "    ", v.props[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // GEOGRAPHIC_MSGS_MESSAGE_WAYPOINT_H
