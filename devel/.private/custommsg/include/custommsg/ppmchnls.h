// Generated by gencpp from file custommsg/ppmchnls.msg
// DO NOT EDIT!


#ifndef CUSTOMMSG_MESSAGE_PPMCHNLS_H
#define CUSTOMMSG_MESSAGE_PPMCHNLS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace custommsg
{
template <class ContainerAllocator>
struct ppmchnls_
{
  typedef ppmchnls_<ContainerAllocator> Type;

  ppmchnls_()
    : header()
    , chn1(0)
    , chn2(0)
    , chn3(0)
    , chn4(0)
    , chn5(0)
    , chn6(0)
    , chn7(0)
    , chn8(0)  {
    }
  ppmchnls_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , chn1(0)
    , chn2(0)
    , chn3(0)
    , chn4(0)
    , chn5(0)
    , chn6(0)
    , chn7(0)
    , chn8(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint16_t _chn1_type;
  _chn1_type chn1;

   typedef uint16_t _chn2_type;
  _chn2_type chn2;

   typedef uint16_t _chn3_type;
  _chn3_type chn3;

   typedef uint16_t _chn4_type;
  _chn4_type chn4;

   typedef uint16_t _chn5_type;
  _chn5_type chn5;

   typedef uint16_t _chn6_type;
  _chn6_type chn6;

   typedef uint16_t _chn7_type;
  _chn7_type chn7;

   typedef uint16_t _chn8_type;
  _chn8_type chn8;





  typedef boost::shared_ptr< ::custommsg::ppmchnls_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::custommsg::ppmchnls_<ContainerAllocator> const> ConstPtr;

}; // struct ppmchnls_

typedef ::custommsg::ppmchnls_<std::allocator<void> > ppmchnls;

typedef boost::shared_ptr< ::custommsg::ppmchnls > ppmchnlsPtr;
typedef boost::shared_ptr< ::custommsg::ppmchnls const> ppmchnlsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::custommsg::ppmchnls_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::custommsg::ppmchnls_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::custommsg::ppmchnls_<ContainerAllocator1> & lhs, const ::custommsg::ppmchnls_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.chn1 == rhs.chn1 &&
    lhs.chn2 == rhs.chn2 &&
    lhs.chn3 == rhs.chn3 &&
    lhs.chn4 == rhs.chn4 &&
    lhs.chn5 == rhs.chn5 &&
    lhs.chn6 == rhs.chn6 &&
    lhs.chn7 == rhs.chn7 &&
    lhs.chn8 == rhs.chn8;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::custommsg::ppmchnls_<ContainerAllocator1> & lhs, const ::custommsg::ppmchnls_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace custommsg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::custommsg::ppmchnls_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::custommsg::ppmchnls_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custommsg::ppmchnls_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custommsg::ppmchnls_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custommsg::ppmchnls_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custommsg::ppmchnls_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::custommsg::ppmchnls_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4976e6ed228d03b8df848315fce63edb";
  }

  static const char* value(const ::custommsg::ppmchnls_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4976e6ed228d03b8ULL;
  static const uint64_t static_value2 = 0xdf848315fce63edbULL;
};

template<class ContainerAllocator>
struct DataType< ::custommsg::ppmchnls_<ContainerAllocator> >
{
  static const char* value()
  {
    return "custommsg/ppmchnls";
  }

  static const char* value(const ::custommsg::ppmchnls_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::custommsg::ppmchnls_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"uint16 chn1\n"
"uint16 chn2\n"
"uint16 chn3\n"
"uint16 chn4\n"
"uint16 chn5\n"
"uint16 chn6\n"
"uint16 chn7\n"
"uint16 chn8\n"
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
;
  }

  static const char* value(const ::custommsg::ppmchnls_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::custommsg::ppmchnls_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.chn1);
      stream.next(m.chn2);
      stream.next(m.chn3);
      stream.next(m.chn4);
      stream.next(m.chn5);
      stream.next(m.chn6);
      stream.next(m.chn7);
      stream.next(m.chn8);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ppmchnls_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::custommsg::ppmchnls_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::custommsg::ppmchnls_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "chn1: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.chn1);
    s << indent << "chn2: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.chn2);
    s << indent << "chn3: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.chn3);
    s << indent << "chn4: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.chn4);
    s << indent << "chn5: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.chn5);
    s << indent << "chn6: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.chn6);
    s << indent << "chn7: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.chn7);
    s << indent << "chn8: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.chn8);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CUSTOMMSG_MESSAGE_PPMCHNLS_H