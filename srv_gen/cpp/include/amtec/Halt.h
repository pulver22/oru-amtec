/* Auto-generated by genmsg_cpp for file
 * /home/administrator/ros/amtec/srv/Halt.srv */
#ifndef AMTEC_SERVICE_HALT_H
#define AMTEC_SERVICE_HALT_H
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
template <class ContainerAllocator> struct HaltRequest_ {
  typedef HaltRequest_<ContainerAllocator> Type;

  HaltRequest_() {}

  HaltRequest_(const ContainerAllocator &_alloc) {}

  typedef boost::shared_ptr<amtec::HaltRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr<amtec::HaltRequest_<ContainerAllocator> const>
      ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct HaltRequest
typedef ::amtec::HaltRequest_<std::allocator<void> > HaltRequest;

typedef boost::shared_ptr<amtec::HaltRequest> HaltRequestPtr;
typedef boost::shared_ptr<amtec::HaltRequest const> HaltRequestConstPtr;

template <class ContainerAllocator> struct HaltResponse_ {
  typedef HaltResponse_<ContainerAllocator> Type;

  HaltResponse_() {}

  HaltResponse_(const ContainerAllocator &_alloc) {}

  typedef boost::shared_ptr<amtec::HaltResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr<amtec::HaltResponse_<ContainerAllocator> const>
      ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct HaltResponse
typedef ::amtec::HaltResponse_<std::allocator<void> > HaltResponse;

typedef boost::shared_ptr<amtec::HaltResponse> HaltResponsePtr;
typedef boost::shared_ptr<amtec::HaltResponse const> HaltResponseConstPtr;

struct Halt {

  typedef HaltRequest Request;
  typedef HaltResponse Response;
  Request request;
  Response response;

  typedef Request RequestType;
  typedef Response ResponseType;
}; // struct Halt
} // namespace amtec

namespace ros {
namespace message_traits {
template <class ContainerAllocator>
struct IsMessage<amtec::HaltRequest_<ContainerAllocator> > : public TrueType {
};
template <class ContainerAllocator>
struct IsMessage<amtec::HaltRequest_<ContainerAllocator> const>
    : public TrueType {};
template <class ContainerAllocator>
struct MD5Sum<amtec::HaltRequest_<ContainerAllocator> > {
  static const char *value() { return "d41d8cd98f00b204e9800998ecf8427e"; }

  static const char *value(const ::amtec::HaltRequest_<ContainerAllocator> &) {
    return value();
  }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template <class ContainerAllocator>
struct DataType<amtec::HaltRequest_<ContainerAllocator> > {
  static const char *value() { return "amtec/HaltRequest"; }

  static const char *value(const ::amtec::HaltRequest_<ContainerAllocator> &) {
    return value();
  }
};

template <class ContainerAllocator>
struct Definition<amtec::HaltRequest_<ContainerAllocator> > {
  static const char *value() {
    return "\n\
";
  }

  static const char *value(const ::amtec::HaltRequest_<ContainerAllocator> &) {
    return value();
  }
};

template <class ContainerAllocator>
struct IsFixedSize<amtec::HaltRequest_<ContainerAllocator> >
    : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros {
namespace message_traits {
template <class ContainerAllocator>
struct IsMessage<amtec::HaltResponse_<ContainerAllocator> > : public TrueType {
};
template <class ContainerAllocator>
struct IsMessage<amtec::HaltResponse_<ContainerAllocator> const>
    : public TrueType {};
template <class ContainerAllocator>
struct MD5Sum<amtec::HaltResponse_<ContainerAllocator> > {
  static const char *value() { return "d41d8cd98f00b204e9800998ecf8427e"; }

  static const char *value(const ::amtec::HaltResponse_<ContainerAllocator> &) {
    return value();
  }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template <class ContainerAllocator>
struct DataType<amtec::HaltResponse_<ContainerAllocator> > {
  static const char *value() { return "amtec/HaltResponse"; }

  static const char *value(const ::amtec::HaltResponse_<ContainerAllocator> &) {
    return value();
  }
};

template <class ContainerAllocator>
struct Definition<amtec::HaltResponse_<ContainerAllocator> > {
  static const char *value() {
    return "\n\
";
  }

  static const char *value(const ::amtec::HaltResponse_<ContainerAllocator> &) {
    return value();
  }
};

template <class ContainerAllocator>
struct IsFixedSize<amtec::HaltResponse_<ContainerAllocator> >
    : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros {
namespace serialization {

template <class ContainerAllocator>
struct Serializer<amtec::HaltRequest_<ContainerAllocator> > {
  template <typename Stream, typename T>
  inline static void allInOne(Stream &stream, T m) {}

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct HaltRequest_
} // namespace serialization
} // namespace ros

namespace ros {
namespace serialization {

template <class ContainerAllocator>
struct Serializer<amtec::HaltResponse_<ContainerAllocator> > {
  template <typename Stream, typename T>
  inline static void allInOne(Stream &stream, T m) {}

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct HaltResponse_
} // namespace serialization
} // namespace ros

namespace ros {
namespace service_traits {
template <> struct MD5Sum<amtec::Halt> {
  static const char *value() { return "d41d8cd98f00b204e9800998ecf8427e"; }

  static const char *value(const amtec::Halt &) { return value(); }
};

template <> struct DataType<amtec::Halt> {
  static const char *value() { return "amtec/Halt"; }

  static const char *value(const amtec::Halt &) { return value(); }
};

template <class ContainerAllocator>
struct MD5Sum<amtec::HaltRequest_<ContainerAllocator> > {
  static const char *value() { return "d41d8cd98f00b204e9800998ecf8427e"; }

  static const char *value(const amtec::HaltRequest_<ContainerAllocator> &) {
    return value();
  }
};

template <class ContainerAllocator>
struct DataType<amtec::HaltRequest_<ContainerAllocator> > {
  static const char *value() { return "amtec/Halt"; }

  static const char *value(const amtec::HaltRequest_<ContainerAllocator> &) {
    return value();
  }
};

template <class ContainerAllocator>
struct MD5Sum<amtec::HaltResponse_<ContainerAllocator> > {
  static const char *value() { return "d41d8cd98f00b204e9800998ecf8427e"; }

  static const char *value(const amtec::HaltResponse_<ContainerAllocator> &) {
    return value();
  }
};

template <class ContainerAllocator>
struct DataType<amtec::HaltResponse_<ContainerAllocator> > {
  static const char *value() { return "amtec/Halt"; }

  static const char *value(const amtec::HaltResponse_<ContainerAllocator> &) {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // AMTEC_SERVICE_HALT_H
