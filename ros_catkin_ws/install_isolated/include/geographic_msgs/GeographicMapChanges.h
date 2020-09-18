// Generated by gencpp from file geographic_msgs/GeographicMapChanges.msg
// DO NOT EDIT!


#ifndef GEOGRAPHIC_MSGS_MESSAGE_GEOGRAPHICMAPCHANGES_H
#define GEOGRAPHIC_MSGS_MESSAGE_GEOGRAPHICMAPCHANGES_H


#include <string>
#include <vector>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geographic_msgs/GeographicMap.h>
#include <uuid_msgs/UniqueID.h>

namespace geographic_msgs
{
template <class ContainerAllocator>
struct GeographicMapChanges_
{
  typedef GeographicMapChanges_<ContainerAllocator> Type;

  GeographicMapChanges_()
    : header()
    , diffs()
    , deletes()  {
    }
  GeographicMapChanges_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , diffs(_alloc)
    , deletes(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geographic_msgs::GeographicMap_<ContainerAllocator>  _diffs_type;
  _diffs_type diffs;

   typedef std::vector< ::uuid_msgs::UniqueID_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::uuid_msgs::UniqueID_<ContainerAllocator> >::other >  _deletes_type;
  _deletes_type deletes;





  typedef boost::shared_ptr< ::geographic_msgs::GeographicMapChanges_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::geographic_msgs::GeographicMapChanges_<ContainerAllocator> const> ConstPtr;

}; // struct GeographicMapChanges_

typedef ::geographic_msgs::GeographicMapChanges_<std::allocator<void> > GeographicMapChanges;

typedef boost::shared_ptr< ::geographic_msgs::GeographicMapChanges > GeographicMapChangesPtr;
typedef boost::shared_ptr< ::geographic_msgs::GeographicMapChanges const> GeographicMapChangesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::geographic_msgs::GeographicMapChanges_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::geographic_msgs::GeographicMapChanges_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::geographic_msgs::GeographicMapChanges_<ContainerAllocator1> & lhs, const ::geographic_msgs::GeographicMapChanges_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.diffs == rhs.diffs &&
    lhs.deletes == rhs.deletes;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::geographic_msgs::GeographicMapChanges_<ContainerAllocator1> & lhs, const ::geographic_msgs::GeographicMapChanges_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace geographic_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::geographic_msgs::GeographicMapChanges_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::geographic_msgs::GeographicMapChanges_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::geographic_msgs::GeographicMapChanges_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::geographic_msgs::GeographicMapChanges_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::geographic_msgs::GeographicMapChanges_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::geographic_msgs::GeographicMapChanges_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::geographic_msgs::GeographicMapChanges_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4fd027f54298203ec12aa1c4b20e6cb8";
  }

  static const char* value(const ::geographic_msgs::GeographicMapChanges_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4fd027f54298203eULL;
  static const uint64_t static_value2 = 0xc12aa1c4b20e6cb8ULL;
};

template<class ContainerAllocator>
struct DataType< ::geographic_msgs::GeographicMapChanges_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geographic_msgs/GeographicMapChanges";
  }

  static const char* value(const ::geographic_msgs::GeographicMapChanges_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::geographic_msgs::GeographicMapChanges_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# A list of geographic map changes.\n"
"\n"
"Header header                   # stamp specifies time of change\n"
"                                # frame_id (normally /map)\n"
"\n"
"GeographicMap diffs             # new and changed points and features\n"
"uuid_msgs/UniqueID[] deletes    # deleted map components\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geographic_msgs/GeographicMap\n"
"# Geographic map for a specified region.\n"
"\n"
"Header header            # stamp specifies time\n"
"                         # frame_id (normally /map)\n"
"\n"
"uuid_msgs/UniqueID id    # identifier for this map\n"
"BoundingBox  bounds      # 2D bounding box containing map\n"
"\n"
"WayPoint[]   points      # way-points\n"
"MapFeature[] features    # map features\n"
"KeyValue[]   props       # map properties\n"
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
"MSG: geographic_msgs/BoundingBox\n"
"# Geographic map bounding box. \n"
"#\n"
"# The two GeoPoints denote diagonally opposite corners of the box.\n"
"#\n"
"# If min_pt.latitude is NaN, the bounding box is \"global\", matching\n"
"# any valid latitude, longitude and altitude.\n"
"#\n"
"# If min_pt.altitude is NaN, the bounding box is two-dimensional and\n"
"# matches any altitude within the specified latitude and longitude\n"
"# range.\n"
"\n"
"GeoPoint min_pt         # lowest and most Southwestern corner\n"
"GeoPoint max_pt         # highest and most Northeastern corner\n"
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
"MSG: geographic_msgs/WayPoint\n"
"# Way-point element for a geographic map.\n"
"\n"
"uuid_msgs/UniqueID id   # Unique way-point identifier\n"
"GeoPoint   position     # Position relative to WGS 84 ellipsoid\n"
"KeyValue[] props        # Key/value properties for this point\n"
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
"\n"
"================================================================================\n"
"MSG: geographic_msgs/MapFeature\n"
"# Geographic map feature.\n"
"#\n"
"# A list of WayPoint IDs for features like streets, highways, hiking\n"
"# trails, the outlines of buildings and parking lots in sequential\n"
"# order.\n"
"#\n"
"# Feature lists may also contain other feature lists as members.\n"
"\n"
"uuid_msgs/UniqueID   id         # Unique feature identifier\n"
"uuid_msgs/UniqueID[] components # Sequence of feature components\n"
"KeyValue[] props                # Key/value properties for this feature\n"
;
  }

  static const char* value(const ::geographic_msgs::GeographicMapChanges_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::geographic_msgs::GeographicMapChanges_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.diffs);
      stream.next(m.deletes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GeographicMapChanges_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::geographic_msgs::GeographicMapChanges_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::geographic_msgs::GeographicMapChanges_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "diffs: ";
    s << std::endl;
    Printer< ::geographic_msgs::GeographicMap_<ContainerAllocator> >::stream(s, indent + "  ", v.diffs);
    s << indent << "deletes[]" << std::endl;
    for (size_t i = 0; i < v.deletes.size(); ++i)
    {
      s << indent << "  deletes[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::uuid_msgs::UniqueID_<ContainerAllocator> >::stream(s, indent + "    ", v.deletes[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // GEOGRAPHIC_MSGS_MESSAGE_GEOGRAPHICMAPCHANGES_H
