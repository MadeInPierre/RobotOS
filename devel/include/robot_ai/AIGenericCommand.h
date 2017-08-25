// Generated by gencpp from file robot_ai/AIGenericCommand.msg
// DO NOT EDIT!


#ifndef ROBOT_AI_MESSAGE_AIGENERICCOMMAND_H
#define ROBOT_AI_MESSAGE_AIGENERICCOMMAND_H

#include <ros/service_traits.h>


#include <robot_ai/AIGenericCommandRequest.h>
#include <robot_ai/AIGenericCommandResponse.h>


namespace robot_ai
{

struct AIGenericCommand
{

typedef AIGenericCommandRequest Request;
typedef AIGenericCommandResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct AIGenericCommand
} // namespace robot_ai


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::robot_ai::AIGenericCommand > {
  static const char* value()
  {
    return "486981db1cfa05f3d7fa6076f176b704";
  }

  static const char* value(const ::robot_ai::AIGenericCommand&) { return value(); }
};

template<>
struct DataType< ::robot_ai::AIGenericCommand > {
  static const char* value()
  {
    return "robot_ai/AIGenericCommand";
  }

  static const char* value(const ::robot_ai::AIGenericCommand&) { return value(); }
};


// service_traits::MD5Sum< ::robot_ai::AIGenericCommandRequest> should match 
// service_traits::MD5Sum< ::robot_ai::AIGenericCommand > 
template<>
struct MD5Sum< ::robot_ai::AIGenericCommandRequest>
{
  static const char* value()
  {
    return MD5Sum< ::robot_ai::AIGenericCommand >::value();
  }
  static const char* value(const ::robot_ai::AIGenericCommandRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::robot_ai::AIGenericCommandRequest> should match 
// service_traits::DataType< ::robot_ai::AIGenericCommand > 
template<>
struct DataType< ::robot_ai::AIGenericCommandRequest>
{
  static const char* value()
  {
    return DataType< ::robot_ai::AIGenericCommand >::value();
  }
  static const char* value(const ::robot_ai::AIGenericCommandRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::robot_ai::AIGenericCommandResponse> should match 
// service_traits::MD5Sum< ::robot_ai::AIGenericCommand > 
template<>
struct MD5Sum< ::robot_ai::AIGenericCommandResponse>
{
  static const char* value()
  {
    return MD5Sum< ::robot_ai::AIGenericCommand >::value();
  }
  static const char* value(const ::robot_ai::AIGenericCommandResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::robot_ai::AIGenericCommandResponse> should match 
// service_traits::DataType< ::robot_ai::AIGenericCommand > 
template<>
struct DataType< ::robot_ai::AIGenericCommandResponse>
{
  static const char* value()
  {
    return DataType< ::robot_ai::AIGenericCommand >::value();
  }
  static const char* value(const ::robot_ai::AIGenericCommandResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOT_AI_MESSAGE_AIGENERICCOMMAND_H