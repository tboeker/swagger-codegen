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



#include "Pet.h"

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

Pet::Pet()
{
    m_Id = 0L;
    m_Name = "";
    m_Status = "";
    
}

Pet::~Pet()
{
}

std::string Pet::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Id", m_Id);
	pt.put("Name", m_Name);
	pt.put("Status", m_Status);
	write_json(ss, pt, false);
	return ss.str();
}

void Pet::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Id = pt.get("Id", 0L);
	m_Name = pt.get("Name", "");
	m_Status = pt.get("Status", "");
}

int64_t Pet::getId() const
{
    return m_Id;
}
void Pet::setId(int64_t value)
{
    m_Id = value;
}
std::shared_ptr<Category> Pet::getCategory() const
{
    return m_Category;
}
void Pet::setCategory(std::shared_ptr<Category> value)
{
    m_Category = value;
}
std::string Pet::getName() const
{
    return m_Name;
}
void Pet::setName(std::string value)
{
    m_Name = value;
}
std::vector<std::string> Pet::getPhotoUrls() const
{
    return m_PhotoUrls;
}
void Pet::setPhotoUrls(std::vector<std::string> value)
{
    m_PhotoUrls = value;
}
std::vector<std::shared_ptr<Tag>> Pet::getTags() const
{
    return m_Tags;
}
void Pet::setTags(std::vector<std::shared_ptr<Tag>> value)
{
    m_Tags = value;
}
std::string Pet::getStatus() const
{
    return m_Status;
}
void Pet::setStatus(std::string value)
{
    m_Status = value;
}

}
}
}
}

