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



#include "ApiResponse.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace io {
namespace swagger {
namespace server {
namespace model {

ApiResponse::ApiResponse()
{
    m_Code = 0;
    m_Type = "";
    m_Message = "";
    
}

ApiResponse::~ApiResponse()
{
}

std::string ApiResponse::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Code", m_Code);
	pt.put("Type", m_Type);
	pt.put("Message", m_Message);
	write_json(ss, pt, false);
	return ss.str();
}

void ApiResponse::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Code = pt.get("Code", 0);
	m_Type = pt.get("Type", "");
	m_Message = pt.get("Message", "");
}

int32_t ApiResponse::getCode() const
{
    return m_Code;
}
void ApiResponse::setCode(int32_t value)
{
    m_Code = value;
}
std::string ApiResponse::getType() const
{
    return m_Type;
}
void ApiResponse::setType(std::string value)
{
    m_Type = value;
}
std::string ApiResponse::getMessage() const
{
    return m_Message;
}
void ApiResponse::setMessage(std::string value)
{
    m_Message = value;
}

}
}
}
}

