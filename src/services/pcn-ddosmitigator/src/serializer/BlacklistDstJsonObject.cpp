/**
* ddosmitigator API
* DDoS Mitigator Service
*
* OpenAPI spec version: 2.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */



#include "BlacklistDstJsonObject.h"
#include <regex>

namespace io {
namespace swagger {
namespace server {
namespace model {

BlacklistDstJsonObject::BlacklistDstJsonObject() : 
  m_ipIsSet(false),
  m_dropPktsIsSet(false) { }

BlacklistDstJsonObject::BlacklistDstJsonObject(nlohmann::json &val) : 
  m_ipIsSet(false),
  m_dropPktsIsSet(false) { 
  if (val.count("ip")) {
    setIp(val.at("ip").get<std::string>());
  }

  if (val.count("drop-pkts")) {
    setDropPkts(val.at("drop-pkts").get<uint64_t>());
  }
}

nlohmann::json BlacklistDstJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();

  if (m_ipIsSet) {
    val["ip"] = m_ip;
  }

  if (m_dropPktsIsSet) {
    val["drop-pkts"] = m_dropPkts;
  }


  return val;
}

nlohmann::json BlacklistDstJsonObject::helpKeys() {
  nlohmann::json val = nlohmann::json::object();

  val["ip"]["name"] = "ip";
  val["ip"]["type"] = "key";
  val["ip"]["simpletype"] = "string";
  val["ip"]["description"] = R"POLYCUBE(Destination IP Address)POLYCUBE";
  val["ip"]["example"] = R"POLYCUBE(10.0.0.2)POLYCUBE";

  return val;
}

nlohmann::json BlacklistDstJsonObject::helpElements() {
  nlohmann::json val = nlohmann::json::object();

  val["drop-pkts"]["name"] = "drop-pkts";
  val["drop-pkts"]["type"] = "leaf"; // Suppose that type is leaf
  val["drop-pkts"]["simpletype"] = "integer";
  val["drop-pkts"]["description"] = R"POLYCUBE(Dropped Packets)POLYCUBE";
  val["drop-pkts"]["example"] = R"POLYCUBE()POLYCUBE";

  return val;
}

nlohmann::json BlacklistDstJsonObject::helpWritableLeafs() {
  nlohmann::json val = nlohmann::json::object();


  return val;
}

nlohmann::json BlacklistDstJsonObject::helpComplexElements() {
  nlohmann::json val = nlohmann::json::object();


  return val;
}

std::vector<std::string> BlacklistDstJsonObject::helpActions() {
  std::vector<std::string> val;
  return val;
}

std::string BlacklistDstJsonObject::getIp() const {
  return m_ip;
}

void BlacklistDstJsonObject::setIp(std::string value) {
  m_ip = value;
  m_ipIsSet = true;
}

bool BlacklistDstJsonObject::ipIsSet() const {
  return m_ipIsSet;
}





uint64_t BlacklistDstJsonObject::getDropPkts() const {
  return m_dropPkts;
}

void BlacklistDstJsonObject::setDropPkts(uint64_t value) {
  m_dropPkts = value;
  m_dropPktsIsSet = true;
}

bool BlacklistDstJsonObject::dropPktsIsSet() const {
  return m_dropPktsIsSet;
}

void BlacklistDstJsonObject::unsetDropPkts() {
  m_dropPktsIsSet = false;
}




}
}
}
}

