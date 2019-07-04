/* Auto-generated by genmsg_cpp for file
 * /home/administrator/ros/amtec/srv/Home.srv */
#ifndef AMTEC_SERVICE_HOME_H
#define AMTEC_SERVICE_HOME_H
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/serialization.h"
#include "ros/time.h"
#include <map>
#include <ostream>
#include <string>
#include <vector>

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"

namespace amtec {
template <class ContainerAllocator> struct HomeRequest_ {
  typedef HomeRequest_<ContainerAllocator> Type;

  HomeRequest_() {}

  HomeRequest_(const ContainerAllocator &_alloc) {}

  typedef boost::shared_ptr<amtec::HomeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr<amtec::HomeRequest_<ContainerAllocator> const>
      ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct HomeRequest
typedef ::amtec::HomeRequest_<std::allocator<void> > HomeRequest;

typedef boost::shared_ptr<amtec::HomeRequest> HomeRequestPtr;
typedef boost::shared_ptr<amtec::HomeRequest const> HomeRequestConstPtr;

template <class ContainerAllocator> struct HomeResponse_ {
  typedef HomeResponse_<ContainerAllocator> Type;

  HomeResponse_() {}

  HomeResponse_(const ContainerAllocator &_alloc) {}

  typedef boost::shared_ptr<amtec::HomeResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr<amtec::HomeResponse_<ContainerAllocator> const>
      ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct HomeResponse
typedef ::amtec::HomeResponse_<std::allocator<void> > HomeResponse;

typedef boost::shared_ptr<amtec::HomeResponse> HomeResponsePtr;
typedef boost::shared_ptr<amtec::HomeResponse const> HomeResponseConstPtr;

struct Home {

  typedef HomeRequest Request;
  typedef HomeResponse Response;
  Request request;
  Response response;

  typedef Request RequestType;
  typedef Response ResponseType;
}; // struct Home
} // namespace amtec

namespace ros {
namespace message_traits {
template <class ContainerAllocator>
struct IsMessage<amtec::HomeRequest_<ContainerAllocator> > : public TrueType {
};
template <class ContainerAllocator>
struct IsMessage<amtec::HomeRequest_<ContainerAllocator> const>
    : public TrueType {};
template <class ContainerAllocator>
struct MD5Sum<amtec::HomeRequest_<ContainerAllocator> > {
  static const char *value() { return "d41d8cd98f00b204e9800998ecf8427e"; }

  static const char *value(const ::amtec::HomeRequest_<ContainerAllocator> &) {
    return value();
  }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template <class ContainerAllocator>
struct DataType<amtec::HomeRequest_<ContainerAllocator> > {
  static const char *value() { return "amtec/HomeRequest"; }

  static const char *value(const ::amtec::HomeRequest_<ContainerAllocator> &) {
    return value();
  }
};

template <class ContainerAllocator>
struct Definition<amtec::HomeRequest_<ContainerAllocator> > {
  static const char *value() {
    return "\n\
";
  }

  static const char *value(const ::amtec::HomeRequest_<ContainerAllocator> &) {
    return value();
  }
};

template <class ContainerAllocator>
struct IsFixedSize<amtec::HomeRequest_<ContainerAllocator> >
    : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros {
namespace message_traits {
template <class ContainerAllocator>
struct IsMessage<amtec::HomeResponse_<ContainerAllocator> > : public TrueType {
};
template <class ContainerAllocator>
struct IsMessage<amtec::HomeResponse_<ContainerAllocator> const>
    : public TrueType {};
template <class ContainerAllocator>
struct MD5Sum<amtec::HomeResponse_<ContainerAllocator> > {
  static const char *value() { return "d41d8cd98f00b204e9800998ecf8427e"; }

  static const char *value(const ::amtec::HomeResponse_<ContainerAllocator> &) {
    return value();
  }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template <class ContainerAllocator>
struct DataType<amtec::HomeResponse_<ContainerAllocator> > {
  static const char *value() { return "amtec/HomeResponse"; }

  static const char *value(const ::amtec::HomeResponse_<ContainerAllocator> &) {
    return value();
  }
};

template <class ContainerAllocator>
struct Definition<amtec::HomeResponse_<ContainerAllocator> > {
  static const char *value() {
    return "\n\
";
  }

  static const char *value(const ::amtec::HomeResponse_<ContainerAllocator> &) {
    return value();
  }
};

template <class ContainerAllocator>
struct IsFixedSize<amtec::HomeResponse_<ContainerAllocator> >
    : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros {
namespace serialization {

template <class ContainerAllocator>
struct Serializer<amtec::HomeRequest_<ContainerAllocator> > {
  template <typename Stream, typename T>
  inline static void allInOne(Stream &stream, T m) {}

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct HomeRequest_
} // namespace serialization
} // namespace ros

namespace ros {
namespace serialization {

template <class ContainerAllocator>
struct Serializer<amtec::HomeResponse_<ContainerAllocator> > {
  template <typename Stream, typename T>
  inline static void allInOne(Stream &stream, T m) {}

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct HomeResponse_
} // namespace serialization
} // namespace ros

namespace ros {
namespace service_traits {
template <> struct MD5Sum<amtec::Home> {
  static const char *value() { return "d41d8cd98f00b204e9800998ecf8427e"; }

  static const char *value(const amtec::Home &) { return value(); }
};

template <> struct DataType<amtec::Home> {
  static const char *value() { return "amtec/Home"; }

  static const char *value(const amtec::Home &) { return value(); }
};

template <class ContainerAllocator>
struct MD5Sum<amtec::HomeRequest_<ContainerAllocator> > {
  static const char *value() { return "d41d8cd98f00b204e9800998ecf8427e"; }

  static const char *value(const amtec::HomeRequest_<ContainerAllocator> &) {
    return value();
  }
};

template <class ContainerAllocator>
struct DataType<amtec::HomeRequest_<ContainerAllocator> > {
  static const char *value() { return "amtec/Home"; }

  static const char *value(const amtec::HomeRequest_<ContainerAllocator> &) {
    return value();
  }
};

template <class ContainerAllocator>
struct MD5Sum<amtec::HomeResponse_<ContainerAllocator> > {
  static const char *value() { return "d41d8cd98f00b204e9800998ecf8427e"; }

  static const char *value(const amtec::HomeResponse_<ContainerAllocator> &) {
    return value();
  }
};

template <class ContainerAllocator>
struct DataType<amtec::HomeResponse_<ContainerAllocator> > {
  static const char *value() { return "amtec/Home"; }

  static const char *value(const amtec::HomeResponse_<ContainerAllocator> &) {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // AMTEC_SERVICE_HOME_H
