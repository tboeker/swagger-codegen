/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.1.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * ApiResponse.h
 *
 * Describes the result of uploading an image resource
 */

#ifndef ApiResponse_H_
#define ApiResponse_H_



#include <string>
#include <memory>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// Describes the result of uploading an image resource
/// </summary>
class  ApiResponse
{
public:
    ApiResponse();
    virtual ~ApiResponse();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ApiResponse members
    
    /// <summary>
    /// 
    /// </summary>
    int32_t getCode() const;
    void setCode(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::string getType() const;
    void setType(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getMessage() const;
    void setMessage(std::string value);

protected:
    int32_t m_Code;
    std::string m_Type;
    std::string m_Message;
};

}
}
}
}

#endif /* ApiResponse_H_ */
