/**
* nat API
* NAT Service
*
* OpenAPI spec version: 1.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */



#include "RuleDnatEntryJsonObject.h"
#include <regex>

namespace io {
namespace swagger {
namespace server {
namespace model {

RuleDnatEntryJsonObject::RuleDnatEntryJsonObject() : 
  m_idIsSet(false),
  m_externalIpIsSet(false),
  m_internalIpIsSet(false) { }

RuleDnatEntryJsonObject::RuleDnatEntryJsonObject(nlohmann::json &val) : 
  m_idIsSet(false),
  m_externalIpIsSet(false),
  m_internalIpIsSet(false) { 
  if (val.count("id")) {
    setId(val.at("id").get<uint32_t>());
  }

  if (val.count("external-ip")) {
    setExternalIp(val.at("external-ip").get<std::string>());
  }

  if (val.count("internal-ip")) {
    setInternalIp(val.at("internal-ip").get<std::string>());
  }
}

nlohmann::json RuleDnatEntryJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();

  if (m_idIsSet) {
    val["id"] = m_id;
  }

  if (m_externalIpIsSet) {
    val["external-ip"] = m_externalIp;
  }

  if (m_internalIpIsSet) {
    val["internal-ip"] = m_internalIp;
  }


  return val;
}

nlohmann::json RuleDnatEntryJsonObject::helpKeys() {
  nlohmann::json val = nlohmann::json::object();

  val["id"]["name"] = "id";
  val["id"]["type"] = "key";
  val["id"]["simpletype"] = "integer";
  val["id"]["description"] = R"POLYCUBE(Rule identifier)POLYCUBE";
  val["id"]["example"] = R"POLYCUBE()POLYCUBE";

  return val;
}

nlohmann::json RuleDnatEntryJsonObject::helpElements() {
  nlohmann::json val = nlohmann::json::object();

  val["external-ip"]["name"] = "external-ip";
  val["external-ip"]["type"] = "leaf"; // Suppose that type is leaf
  val["external-ip"]["simpletype"] = "string";
  val["external-ip"]["description"] = R"POLYCUBE(External destination IP address)POLYCUBE";
  val["external-ip"]["example"] = R"POLYCUBE(8.8.8.8)POLYCUBE";
  val["internal-ip"]["name"] = "internal-ip";
  val["internal-ip"]["type"] = "leaf"; // Suppose that type is leaf
  val["internal-ip"]["simpletype"] = "string";
  val["internal-ip"]["description"] = R"POLYCUBE(Internal destination IP address)POLYCUBE";
  val["internal-ip"]["example"] = R"POLYCUBE(10.0.0.1)POLYCUBE";

  return val;
}

nlohmann::json RuleDnatEntryJsonObject::helpWritableLeafs() {
  nlohmann::json val = nlohmann::json::object();

  val["external-ip"]["name"] = "external-ip";
  val["external-ip"]["simpletype"] = "string";
  val["external-ip"]["description"] = R"POLYCUBE(External destination IP address)POLYCUBE";
  val["external-ip"]["example"] = R"POLYCUBE(8.8.8.8)POLYCUBE";
  val["internal-ip"]["name"] = "internal-ip";
  val["internal-ip"]["simpletype"] = "string";
  val["internal-ip"]["description"] = R"POLYCUBE(Internal destination IP address)POLYCUBE";
  val["internal-ip"]["example"] = R"POLYCUBE(10.0.0.1)POLYCUBE";

  return val;
}

nlohmann::json RuleDnatEntryJsonObject::helpComplexElements() {
  nlohmann::json val = nlohmann::json::object();


  return val;
}

std::vector<std::string> RuleDnatEntryJsonObject::helpActions() {
  std::vector<std::string> val;
  return val;
}

uint32_t RuleDnatEntryJsonObject::getId() const {
  return m_id;
}

void RuleDnatEntryJsonObject::setId(uint32_t value) {
  m_id = value;
  m_idIsSet = true;
}

bool RuleDnatEntryJsonObject::idIsSet() const {
  return m_idIsSet;
}





std::string RuleDnatEntryJsonObject::getExternalIp() const {
  return m_externalIp;
}

void RuleDnatEntryJsonObject::setExternalIp(std::string value) {
  m_externalIp = value;
  m_externalIpIsSet = true;
}

bool RuleDnatEntryJsonObject::externalIpIsSet() const {
  return m_externalIpIsSet;
}





std::string RuleDnatEntryJsonObject::getInternalIp() const {
  return m_internalIp;
}

void RuleDnatEntryJsonObject::setInternalIp(std::string value) {
  m_internalIp = value;
  m_internalIpIsSet = true;
}

bool RuleDnatEntryJsonObject::internalIpIsSet() const {
  return m_internalIpIsSet;
}






}
}
}
}

