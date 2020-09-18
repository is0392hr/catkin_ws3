// Generated by gencpp from file rosapi/GetParamNames.msg
// DO NOT EDIT!


#ifndef ROSAPI_MESSAGE_GETPARAMNAMES_H
#define ROSAPI_MESSAGE_GETPARAMNAMES_H

#include <ros/service_traits.h>


#include <rosapi/GetParamNamesRequest.h>
#include <rosapi/GetParamNamesResponse.h>


namespace rosapi
{

struct GetParamNames
{

typedef GetParamNamesRequest Request;
typedef GetParamNamesResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetParamNames
} // namespace rosapi


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rosapi::GetParamNames > {
  static const char* value()
  {
    return "dc7ae3609524b18034e49294a4ce670e";
  }

  static const char* value(const ::rosapi::GetParamNames&) { return value(); }
};

template<>
struct DataType< ::rosapi::GetParamNames > {
  static const char* value()
  {
    return "rosapi/GetParamNames";
  }

  static const char* value(const ::rosapi::GetParamNames&) { return value(); }
};


// service_traits::MD5Sum< ::rosapi::GetParamNamesRequest> should match
// service_traits::MD5Sum< ::rosapi::GetParamNames >
template<>
struct MD5Sum< ::rosapi::GetParamNamesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rosapi::GetParamNames >::value();
  }
  static const char* value(const ::rosapi::GetParamNamesRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosapi::GetParamNamesRequest> should match
// service_traits::DataType< ::rosapi::GetParamNames >
template<>
struct DataType< ::rosapi::GetParamNamesRequest>
{
  static const char* value()
  {
    return DataType< ::rosapi::GetParamNames >::value();
  }
  static const char* value(const ::rosapi::GetParamNamesRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rosapi::GetParamNamesResponse> should match
// service_traits::MD5Sum< ::rosapi::GetParamNames >
template<>
struct MD5Sum< ::rosapi::GetParamNamesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rosapi::GetParamNames >::value();
  }
  static const char* value(const ::rosapi::GetParamNamesResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosapi::GetParamNamesResponse> should match
// service_traits::DataType< ::rosapi::GetParamNames >
template<>
struct DataType< ::rosapi::GetParamNamesResponse>
{
  static const char* value()
  {
    return DataType< ::rosapi::GetParamNames >::value();
  }
  static const char* value(const ::rosapi::GetParamNamesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROSAPI_MESSAGE_GETPARAMNAMES_H