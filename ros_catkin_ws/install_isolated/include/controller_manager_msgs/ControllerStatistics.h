// Generated by gencpp from file controller_manager_msgs/ControllerStatistics.msg
// DO NOT EDIT!


#ifndef CONTROLLER_MANAGER_MSGS_MESSAGE_CONTROLLERSTATISTICS_H
#define CONTROLLER_MANAGER_MSGS_MESSAGE_CONTROLLERSTATISTICS_H


#include <string>
#include <vector>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace controller_manager_msgs
{
template <class ContainerAllocator>
struct ControllerStatistics_
{
  typedef ControllerStatistics_<ContainerAllocator> Type;

  ControllerStatistics_()
    : name()
    , type()
    , timestamp()
    , running(false)
    , max_time()
    , mean_time()
    , variance_time()
    , num_control_loop_overruns(0)
    , time_last_control_loop_overrun()  {
    }
  ControllerStatistics_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , type(_alloc)
    , timestamp()
    , running(false)
    , max_time()
    , mean_time()
    , variance_time()
    , num_control_loop_overruns(0)
    , time_last_control_loop_overrun()  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;

   typedef ros::Time _timestamp_type;
  _timestamp_type timestamp;

   typedef uint8_t _running_type;
  _running_type running;

   typedef ros::Duration _max_time_type;
  _max_time_type max_time;

   typedef ros::Duration _mean_time_type;
  _mean_time_type mean_time;

   typedef ros::Duration _variance_time_type;
  _variance_time_type variance_time;

   typedef int32_t _num_control_loop_overruns_type;
  _num_control_loop_overruns_type num_control_loop_overruns;

   typedef ros::Time _time_last_control_loop_overrun_type;
  _time_last_control_loop_overrun_type time_last_control_loop_overrun;





  typedef boost::shared_ptr< ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator> const> ConstPtr;

}; // struct ControllerStatistics_

typedef ::controller_manager_msgs::ControllerStatistics_<std::allocator<void> > ControllerStatistics;

typedef boost::shared_ptr< ::controller_manager_msgs::ControllerStatistics > ControllerStatisticsPtr;
typedef boost::shared_ptr< ::controller_manager_msgs::ControllerStatistics const> ControllerStatisticsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator1> & lhs, const ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.type == rhs.type &&
    lhs.timestamp == rhs.timestamp &&
    lhs.running == rhs.running &&
    lhs.max_time == rhs.max_time &&
    lhs.mean_time == rhs.mean_time &&
    lhs.variance_time == rhs.variance_time &&
    lhs.num_control_loop_overruns == rhs.num_control_loop_overruns &&
    lhs.time_last_control_loop_overrun == rhs.time_last_control_loop_overrun;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator1> & lhs, const ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace controller_manager_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "697780c372c8d8597a1436d0e2ad3ba8";
  }

  static const char* value(const ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x697780c372c8d859ULL;
  static const uint64_t static_value2 = 0x7a1436d0e2ad3ba8ULL;
};

template<class ContainerAllocator>
struct DataType< ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "controller_manager_msgs/ControllerStatistics";
  }

  static const char* value(const ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message contains the state of one realtime controller\n"
"# that was spawned in the controller manager\n"
"\n"
"# the name of the controller\n"
"string name\n"
"\n"
"# the type of the controller\n"
"string type\n"
"\n"
"# the time at which these controller statistics were measured\n"
"time timestamp\n"
"\n"
"# bool that indicates if the controller is currently\n"
"# in a running or a stopped state\n"
"bool running\n"
"\n"
"# the maximum time the update loop of the controller ever needed to complete\n"
"duration max_time\n"
"\n"
"# the average time the update loop of the controller needs to complete.\n"
"# the average is computed in a sliding time window.\n"
"duration mean_time\n"
"\n"
"# the variance on the time the update loop of the controller needs to complete.\n"
"# the variance applies to a sliding time window.\n"
"duration variance_time\n"
"\n"
"# the number of times this controller broke the realtime loop\n"
"int32 num_control_loop_overruns\n"
"\n"
"# the timestamp of the last time this controller broke the realtime loop\n"
"time time_last_control_loop_overrun\n"
;
  }

  static const char* value(const ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.type);
      stream.next(m.timestamp);
      stream.next(m.running);
      stream.next(m.max_time);
      stream.next(m.mean_time);
      stream.next(m.variance_time);
      stream.next(m.num_control_loop_overruns);
      stream.next(m.time_last_control_loop_overrun);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ControllerStatistics_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
    s << indent << "timestamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.timestamp);
    s << indent << "running: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.running);
    s << indent << "max_time: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.max_time);
    s << indent << "mean_time: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.mean_time);
    s << indent << "variance_time: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.variance_time);
    s << indent << "num_control_loop_overruns: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num_control_loop_overruns);
    s << indent << "time_last_control_loop_overrun: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.time_last_control_loop_overrun);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONTROLLER_MANAGER_MSGS_MESSAGE_CONTROLLERSTATISTICS_H
