/**
* k8sfilter API
* Kubernetes Traffic Filtering Service
*
* OpenAPI spec version: 2.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */



#include "K8sfilterJsonObject.h"
#include <regex>

namespace io {
namespace swagger {
namespace server {
namespace model {

K8sfilterJsonObject::K8sfilterJsonObject() : 
  m_nameIsSet(false),
  m_uuidIsSet(false),
  m_type(CubeType::TC),
  m_typeIsSet(true),
  m_loglevel(K8sfilterLoglevelEnum::INFO),
  m_loglevelIsSet(true),
  m_portsIsSet(false),
  m_nodeportRange("30000-32767"),
  m_nodeportRangeIsSet(true) { }

K8sfilterJsonObject::K8sfilterJsonObject(nlohmann::json &val) : 
  m_nameIsSet(false),
  m_uuidIsSet(false),
  m_typeIsSet(false),
  m_loglevelIsSet(false),
  m_portsIsSet(false),
  m_nodeportRangeIsSet(false) { 
  if (val.count("name")) {
    setName(val.at("name").get<std::string>());
  }

  if (val.count("uuid")) {
    setUuid(val.at("uuid").get<std::string>());
  }

  if (val.count("type")) {
    setType(string_to_CubeType(val.at("type").get<std::string>()));
  }

  if (val.count("loglevel")) {
    setLoglevel(string_to_K8sfilterLoglevelEnum(val.at("loglevel").get<std::string>()));
  }

  m_ports.clear();
  for (auto& item : val["ports"]) { 
    PortsJsonObject newItem { item };
    m_ports.push_back(newItem);
  }
  m_portsIsSet = !m_ports.empty();
  

  if (val.count("nodeport-range")) {
    setNodeportRange(val.at("nodeport-range").get<std::string>());
  }
}

nlohmann::json K8sfilterJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();

  if (m_nameIsSet) {
    val["name"] = m_name;
  }

  if (m_uuidIsSet) {
    val["uuid"] = m_uuid;
  }

  if (m_typeIsSet) {
    val["type"] = CubeType_to_string(m_type);
  }

  if (m_loglevelIsSet) {
    val["loglevel"] = K8sfilterLoglevelEnum_to_string(m_loglevel);
  }

  {
    nlohmann::json jsonArray;
    for (auto& item : m_ports) {
      jsonArray.push_back(JsonObjectBase::toJson(item));
    }
    if (jsonArray.size() > 0) {
      val["ports"] = jsonArray;
    }
  }
  if (m_nodeportRangeIsSet) {
    val["nodeport-range"] = m_nodeportRange;
  }


  return val;
}

nlohmann::json K8sfilterJsonObject::helpKeys() {
  nlohmann::json val = nlohmann::json::object();

  val["name"]["name"] = "name";
  val["name"]["type"] = "key";
  val["name"]["simpletype"] = "string";
  val["name"]["description"] = R"POLYCUBE(Name of the k8sfilter service)POLYCUBE";
  val["name"]["example"] = R"POLYCUBE(k8sfilter1)POLYCUBE";

  return val;
}

nlohmann::json K8sfilterJsonObject::helpElements() {
  nlohmann::json val = nlohmann::json::object();

  val["uuid"]["name"] = "uuid";
  val["uuid"]["type"] = "leaf"; // Suppose that type is leaf
  val["uuid"]["simpletype"] = "string";
  val["uuid"]["description"] = R"POLYCUBE(UUID of the Cube)POLYCUBE";
  val["uuid"]["example"] = R"POLYCUBE()POLYCUBE";
  val["type"]["name"] = "type";
  val["type"]["type"] = "leaf"; // Suppose that type is leaf
  val["type"]["simpletype"] = "string";
  val["type"]["description"] = R"POLYCUBE(Type of the Cube (TC, XDP_SKB, XDP_DRV))POLYCUBE";
  val["type"]["example"] = R"POLYCUBE(TC)POLYCUBE";
  val["loglevel"]["name"] = "loglevel";
  val["loglevel"]["type"] = "leaf"; // Suppose that type is leaf
  val["loglevel"]["simpletype"] = "string";
  val["loglevel"]["description"] = R"POLYCUBE(Defines the logging level of a service instance, from none (OFF) to the most verbose (TRACE))POLYCUBE";
  val["loglevel"]["example"] = R"POLYCUBE(INFO)POLYCUBE";
  val["ports"]["name"] = "ports";
  val["ports"]["type"] = "leaf"; // Suppose that type is leaf
  val["ports"]["type"] = "list";
  val["ports"]["description"] = R"POLYCUBE(Entry of the ports table)POLYCUBE";
  val["ports"]["example"] = R"POLYCUBE()POLYCUBE";
  val["nodeport-range"]["name"] = "nodeport-range";
  val["nodeport-range"]["type"] = "leaf"; // Suppose that type is leaf
  val["nodeport-range"]["simpletype"] = "string";
  val["nodeport-range"]["description"] = R"POLYCUBE(Port range used for NodePort services)POLYCUBE";
  val["nodeport-range"]["example"] = R"POLYCUBE(30000-32767)POLYCUBE";

  return val;
}

nlohmann::json K8sfilterJsonObject::helpWritableLeafs() {
  nlohmann::json val = nlohmann::json::object();

  val["loglevel"]["name"] = "loglevel";
  val["loglevel"]["simpletype"] = "string";
  val["loglevel"]["description"] = R"POLYCUBE(Defines the logging level of a service instance, from none (OFF) to the most verbose (TRACE))POLYCUBE";
  val["loglevel"]["example"] = R"POLYCUBE(INFO)POLYCUBE";
  val["nodeport-range"]["name"] = "nodeport-range";
  val["nodeport-range"]["simpletype"] = "string";
  val["nodeport-range"]["description"] = R"POLYCUBE(Port range used for NodePort services)POLYCUBE";
  val["nodeport-range"]["example"] = R"POLYCUBE(30000-32767)POLYCUBE";

  return val;
}

nlohmann::json K8sfilterJsonObject::helpComplexElements() {
  nlohmann::json val = nlohmann::json::object();

  val["ports"]["name"] = "ports";
  val["ports"]["type"] = "list";
  val["ports"]["description"] = R"POLYCUBE(Entry of the ports table)POLYCUBE";
  val["ports"]["example"] = R"POLYCUBE()POLYCUBE";

  return val;
}

std::vector<std::string> K8sfilterJsonObject::helpActions() {
  std::vector<std::string> val;
  return val;
}

std::string K8sfilterJsonObject::getName() const {
  return m_name;
}

void K8sfilterJsonObject::setName(std::string value) {
  m_name = value;
  m_nameIsSet = true;
}

bool K8sfilterJsonObject::nameIsSet() const {
  return m_nameIsSet;
}





std::string K8sfilterJsonObject::getUuid() const {
  return m_uuid;
}

void K8sfilterJsonObject::setUuid(std::string value) {
  m_uuid = value;
  m_uuidIsSet = true;
}

bool K8sfilterJsonObject::uuidIsSet() const {
  return m_uuidIsSet;
}

void K8sfilterJsonObject::unsetUuid() {
  m_uuidIsSet = false;
}



CubeType K8sfilterJsonObject::getType() const {
  return m_type;
}

void K8sfilterJsonObject::setType(CubeType value) {
  m_type = value;
  m_typeIsSet = true;
}

bool K8sfilterJsonObject::typeIsSet() const {
  return m_typeIsSet;
}

void K8sfilterJsonObject::unsetType() {
  m_typeIsSet = false;
}

std::string K8sfilterJsonObject::CubeType_to_string(const CubeType &value){
  switch(value){
    case CubeType::TC:
      return std::string("tc");
    case CubeType::XDP_SKB:
      return std::string("xdp_skb");
    case CubeType::XDP_DRV:
      return std::string("xdp_drv");
    default:
      throw std::runtime_error("Bad K8sfilter type");
  }
}

CubeType K8sfilterJsonObject::string_to_CubeType(const std::string &str){
  if (JsonObjectBase::iequals("tc", str))
    return CubeType::TC;
  if (JsonObjectBase::iequals("xdp_skb", str))
    return CubeType::XDP_SKB;
  if (JsonObjectBase::iequals("xdp_drv", str))
    return CubeType::XDP_DRV;
  throw std::runtime_error("K8sfilter type is invalid");
}


K8sfilterLoglevelEnum K8sfilterJsonObject::getLoglevel() const {
  return m_loglevel;
}

void K8sfilterJsonObject::setLoglevel(K8sfilterLoglevelEnum value) {
  m_loglevel = value;
  m_loglevelIsSet = true;
}

bool K8sfilterJsonObject::loglevelIsSet() const {
  return m_loglevelIsSet;
}

void K8sfilterJsonObject::unsetLoglevel() {
  m_loglevelIsSet = false;
}

std::string K8sfilterJsonObject::K8sfilterLoglevelEnum_to_string(const K8sfilterLoglevelEnum &value){
  switch(value){
    case K8sfilterLoglevelEnum::TRACE:
      return std::string("trace");
    case K8sfilterLoglevelEnum::DEBUG:
      return std::string("debug");
    case K8sfilterLoglevelEnum::INFO:
      return std::string("info");
    case K8sfilterLoglevelEnum::WARN:
      return std::string("warn");
    case K8sfilterLoglevelEnum::ERR:
      return std::string("err");
    case K8sfilterLoglevelEnum::CRITICAL:
      return std::string("critical");
    case K8sfilterLoglevelEnum::OFF:
      return std::string("off");
    default:
      throw std::runtime_error("Bad K8sfilter loglevel");
  }
}

K8sfilterLoglevelEnum K8sfilterJsonObject::string_to_K8sfilterLoglevelEnum(const std::string &str){
  if (JsonObjectBase::iequals("trace", str))
    return K8sfilterLoglevelEnum::TRACE;
  if (JsonObjectBase::iequals("debug", str))
    return K8sfilterLoglevelEnum::DEBUG;
  if (JsonObjectBase::iequals("info", str))
    return K8sfilterLoglevelEnum::INFO;
  if (JsonObjectBase::iequals("warn", str))
    return K8sfilterLoglevelEnum::WARN;
  if (JsonObjectBase::iequals("err", str))
    return K8sfilterLoglevelEnum::ERR;
  if (JsonObjectBase::iequals("critical", str))
    return K8sfilterLoglevelEnum::CRITICAL;
  if (JsonObjectBase::iequals("off", str))
    return K8sfilterLoglevelEnum::OFF;
  throw std::runtime_error("K8sfilter loglevel is invalid");
}

  polycube::LogLevel K8sfilterJsonObject::getPolycubeLoglevel() const {
    switch(m_loglevel) {
      case K8sfilterLoglevelEnum::TRACE:
        return polycube::LogLevel::TRACE;
      case K8sfilterLoglevelEnum::DEBUG:
        return polycube::LogLevel::DEBUG;
      case K8sfilterLoglevelEnum::INFO:
        return polycube::LogLevel::INFO;
      case K8sfilterLoglevelEnum::WARN:
        return polycube::LogLevel::WARN;
      case K8sfilterLoglevelEnum::ERR:
        return polycube::LogLevel::ERR;
      case K8sfilterLoglevelEnum::CRITICAL:
        return polycube::LogLevel::CRITICAL;
      case K8sfilterLoglevelEnum::OFF:
        return polycube::LogLevel::OFF;
    }
  }
const std::vector<PortsJsonObject>& K8sfilterJsonObject::getPorts() const{
  return m_ports;
}

void K8sfilterJsonObject::addPorts(PortsJsonObject value) {
  m_ports.push_back(value);
}


bool K8sfilterJsonObject::portsIsSet() const {
  return m_portsIsSet;
}

void K8sfilterJsonObject::unsetPorts() {
  m_portsIsSet = false;
}



std::string K8sfilterJsonObject::getNodeportRange() const {
  return m_nodeportRange;
}

void K8sfilterJsonObject::setNodeportRange(std::string value) {
  m_nodeportRange = value;
  m_nodeportRangeIsSet = true;
}

bool K8sfilterJsonObject::nodeportRangeIsSet() const {
  return m_nodeportRangeIsSet;
}

void K8sfilterJsonObject::unsetNodeportRange() {
  m_nodeportRangeIsSet = false;
}




}
}
}
}

