/**
* helloworld API
* Helloworld Service
*
* OpenAPI spec version: 2.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */


#include "HelloworldApi.h"
#include "HelloworldApiImpl.h"

using namespace io::swagger::server::model;
using namespace io::swagger::server::api::HelloworldApiImpl;

#ifdef __cplusplus
extern "C" {
#endif

Response create_helloworld_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ,
  const char *value) {
  // Getting the path params
  std::string unique_name { name };

  try {
    auto request_body = nlohmann::json::parse(std::string { value });
    // Getting the body param
    HelloworldJsonObject unique_value { request_body };

    unique_value.setName(unique_name);
    create_helloworld_by_id(unique_name, unique_value);
    return { kCreated, nullptr };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response create_helloworld_ports_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ,
  const char *value) {
  // Getting the path params
  std::string unique_name { name };
  std::string unique_portsName;
  for (size_t i = 0; i < num_keys; ++i) {
    if (!strcmp(keys[i].name, "ports_name")) {
      unique_portsName = std::string { keys[i].value.string };
      break;
    }
  }


  try {
    auto request_body = nlohmann::json::parse(std::string { value });
    // Getting the body param
    PortsJsonObject unique_value { request_body };

    unique_value.setName(unique_portsName);
    create_helloworld_ports_by_id(unique_name, unique_portsName, unique_value);
    return { kCreated, nullptr };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response create_helloworld_ports_list_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ,
  const char *value) {
  // Getting the path params
  std::string unique_name { name };
  // Getting the body param
  std::vector<PortsJsonObject> unique_value;

  try {
    auto request_body = nlohmann::json::parse(std::string { value });
    // Getting the body param
    std::vector<PortsJsonObject> unique_value;
    for (auto &j : request_body) {
      PortsJsonObject a { j };
      unique_value.push_back(a);
    }
    create_helloworld_ports_list_by_id(unique_name, unique_value);
    return { kCreated, nullptr };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response delete_helloworld_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ) {
  // Getting the path params
  std::string unique_name { name };

  try {
    delete_helloworld_by_id(unique_name);
    return { kOk, nullptr };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response delete_helloworld_ports_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ) {
  // Getting the path params
  std::string unique_name { name };
  std::string unique_portsName;
  for (size_t i = 0; i < num_keys; ++i) {
    if (!strcmp(keys[i].name, "ports_name")) {
      unique_portsName = std::string { keys[i].value.string };
      break;
    }
  }


  try {
    delete_helloworld_ports_by_id(unique_name, unique_portsName);
    return { kOk, nullptr };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response delete_helloworld_ports_list_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ) {
  // Getting the path params
  std::string unique_name { name };

  try {
    delete_helloworld_ports_list_by_id(unique_name);
    return { kOk, nullptr };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response read_helloworld_action_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ) {
  // Getting the path params
  std::string unique_name { name };

  try {

    auto x = read_helloworld_action_by_id(unique_name);
    nlohmann::json response_body;
    response_body = HelloworldJsonObject::HelloworldActionEnum_to_string(x);
    return { kOk, ::strdup(response_body.dump().c_str()) };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response read_helloworld_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ) {
  // Getting the path params
  std::string unique_name { name };

  try {

    auto x = read_helloworld_by_id(unique_name);
    nlohmann::json response_body;
    response_body = x.toJson();
    return { kOk, ::strdup(response_body.dump().c_str()) };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response read_helloworld_list_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ) {


  try {

    auto x = read_helloworld_list_by_id();
    nlohmann::json response_body;
    for (auto &i : x) {
      response_body += i.toJson();
    }
    return { kOk, ::strdup(response_body.dump().c_str()) };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response read_helloworld_loglevel_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ) {
  // Getting the path params
  std::string unique_name { name };

  try {

    auto x = read_helloworld_loglevel_by_id(unique_name);
    nlohmann::json response_body;
    response_body = HelloworldJsonObject::HelloworldLoglevelEnum_to_string(x);
    return { kOk, ::strdup(response_body.dump().c_str()) };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response read_helloworld_ports_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ) {
  // Getting the path params
  std::string unique_name { name };
  std::string unique_portsName;
  for (size_t i = 0; i < num_keys; ++i) {
    if (!strcmp(keys[i].name, "ports_name")) {
      unique_portsName = std::string { keys[i].value.string };
      break;
    }
  }


  try {

    auto x = read_helloworld_ports_by_id(unique_name, unique_portsName);
    nlohmann::json response_body;
    response_body = x.toJson();
    return { kOk, ::strdup(response_body.dump().c_str()) };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response read_helloworld_ports_list_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ) {
  // Getting the path params
  std::string unique_name { name };

  try {

    auto x = read_helloworld_ports_list_by_id(unique_name);
    nlohmann::json response_body;
    for (auto &i : x) {
      response_body += i.toJson();
    }
    return { kOk, ::strdup(response_body.dump().c_str()) };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response read_helloworld_ports_peer_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ) {
  // Getting the path params
  std::string unique_name { name };
  std::string unique_portsName;
  for (size_t i = 0; i < num_keys; ++i) {
    if (!strcmp(keys[i].name, "ports_name")) {
      unique_portsName = std::string { keys[i].value.string };
      break;
    }
  }


  try {

    auto x = read_helloworld_ports_peer_by_id(unique_name, unique_portsName);
    nlohmann::json response_body;
    response_body = x;
    return { kOk, ::strdup(response_body.dump().c_str()) };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response read_helloworld_ports_status_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ) {
  // Getting the path params
  std::string unique_name { name };
  std::string unique_portsName;
  for (size_t i = 0; i < num_keys; ++i) {
    if (!strcmp(keys[i].name, "ports_name")) {
      unique_portsName = std::string { keys[i].value.string };
      break;
    }
  }


  try {

    auto x = read_helloworld_ports_status_by_id(unique_name, unique_portsName);
    nlohmann::json response_body;
    response_body = PortsJsonObject::PortsStatusEnum_to_string(x);
    return { kOk, ::strdup(response_body.dump().c_str()) };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response read_helloworld_ports_uuid_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ) {
  // Getting the path params
  std::string unique_name { name };
  std::string unique_portsName;
  for (size_t i = 0; i < num_keys; ++i) {
    if (!strcmp(keys[i].name, "ports_name")) {
      unique_portsName = std::string { keys[i].value.string };
      break;
    }
  }


  try {

    auto x = read_helloworld_ports_uuid_by_id(unique_name, unique_portsName);
    nlohmann::json response_body;
    response_body = x;
    return { kOk, ::strdup(response_body.dump().c_str()) };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response read_helloworld_type_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ) {
  // Getting the path params
  std::string unique_name { name };

  try {

    auto x = read_helloworld_type_by_id(unique_name);
    nlohmann::json response_body;
    response_body = HelloworldJsonObject::CubeType_to_string(x);
    return { kOk, ::strdup(response_body.dump().c_str()) };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response read_helloworld_uuid_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ) {
  // Getting the path params
  std::string unique_name { name };

  try {

    auto x = read_helloworld_uuid_by_id(unique_name);
    nlohmann::json response_body;
    response_body = x;
    return { kOk, ::strdup(response_body.dump().c_str()) };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response replace_helloworld_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ,
  const char *value) {
  // Getting the path params
  std::string unique_name { name };

  try {
    auto request_body = nlohmann::json::parse(std::string { value });
    // Getting the body param
    HelloworldJsonObject unique_value { request_body };

    unique_value.setName(unique_name);
    replace_helloworld_by_id(unique_name, unique_value);
    return { kOk, nullptr };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response replace_helloworld_ports_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ,
  const char *value) {
  // Getting the path params
  std::string unique_name { name };
  std::string unique_portsName;
  for (size_t i = 0; i < num_keys; ++i) {
    if (!strcmp(keys[i].name, "ports_name")) {
      unique_portsName = std::string { keys[i].value.string };
      break;
    }
  }


  try {
    auto request_body = nlohmann::json::parse(std::string { value });
    // Getting the body param
    PortsJsonObject unique_value { request_body };

    unique_value.setName(unique_portsName);
    replace_helloworld_ports_by_id(unique_name, unique_portsName, unique_value);
    return { kOk, nullptr };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response replace_helloworld_ports_list_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ,
  const char *value) {
  // Getting the path params
  std::string unique_name { name };
  // Getting the body param
  std::vector<PortsJsonObject> unique_value;

  try {
    auto request_body = nlohmann::json::parse(std::string { value });
    // Getting the body param
    std::vector<PortsJsonObject> unique_value;
    for (auto &j : request_body) {
      PortsJsonObject a { j };
      unique_value.push_back(a);
    }
    replace_helloworld_ports_list_by_id(unique_name, unique_value);
    return { kOk, nullptr };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response update_helloworld_action_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ,
  const char *value) {
  // Getting the path params
  std::string unique_name { name };

  try {
    auto request_body = nlohmann::json::parse(std::string { value });
    HelloworldActionEnum unique_value_ = HelloworldJsonObject::string_to_HelloworldActionEnum(request_body);
    update_helloworld_action_by_id(unique_name, unique_value_);
    return { kOk, nullptr };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response update_helloworld_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ,
  const char *value) {
  // Getting the path params
  std::string unique_name { name };

  try {
    auto request_body = nlohmann::json::parse(std::string { value });
    // Getting the body param
    HelloworldJsonObject unique_value { request_body };

    unique_value.setName(unique_name);
    update_helloworld_by_id(unique_name, unique_value);
    return { kOk, nullptr };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response update_helloworld_list_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ,
  const char *value) {

  // Getting the body param
  std::vector<HelloworldJsonObject> unique_value;

  try {
    auto request_body = nlohmann::json::parse(std::string { value });
    // Getting the body param
    std::vector<HelloworldJsonObject> unique_value;
    for (auto &j : request_body) {
      HelloworldJsonObject a { j };
      unique_value.push_back(a);
    }
    update_helloworld_list_by_id(unique_value);
    return { kOk, nullptr };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response update_helloworld_loglevel_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ,
  const char *value) {
  // Getting the path params
  std::string unique_name { name };

  try {
    auto request_body = nlohmann::json::parse(std::string { value });
    HelloworldLoglevelEnum unique_value_ = HelloworldJsonObject::string_to_HelloworldLoglevelEnum(request_body);
    update_helloworld_loglevel_by_id(unique_name, unique_value_);
    return { kOk, nullptr };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response update_helloworld_ports_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ,
  const char *value) {
  // Getting the path params
  std::string unique_name { name };
  std::string unique_portsName;
  for (size_t i = 0; i < num_keys; ++i) {
    if (!strcmp(keys[i].name, "ports_name")) {
      unique_portsName = std::string { keys[i].value.string };
      break;
    }
  }


  try {
    auto request_body = nlohmann::json::parse(std::string { value });
    // Getting the body param
    PortsJsonObject unique_value { request_body };

    unique_value.setName(unique_portsName);
    update_helloworld_ports_by_id(unique_name, unique_portsName, unique_value);
    return { kOk, nullptr };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response update_helloworld_ports_list_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ,
  const char *value) {
  // Getting the path params
  std::string unique_name { name };
  // Getting the body param
  std::vector<PortsJsonObject> unique_value;

  try {
    auto request_body = nlohmann::json::parse(std::string { value });
    // Getting the body param
    std::vector<PortsJsonObject> unique_value;
    for (auto &j : request_body) {
      PortsJsonObject a { j };
      unique_value.push_back(a);
    }
    update_helloworld_ports_list_by_id(unique_name, unique_value);
    return { kOk, nullptr };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}

Response update_helloworld_ports_peer_by_id_handler(
  const char *name, const Key *keys,
  size_t num_keys ,
  const char *value) {
  // Getting the path params
  std::string unique_name { name };
  std::string unique_portsName;
  for (size_t i = 0; i < num_keys; ++i) {
    if (!strcmp(keys[i].name, "ports_name")) {
      unique_portsName = std::string { keys[i].value.string };
      break;
    }
  }


  try {
    auto request_body = nlohmann::json::parse(std::string { value });
    // The conversion is done automatically by the json library
    std::string unique_value = request_body;
    update_helloworld_ports_peer_by_id(unique_name, unique_portsName, unique_value);
    return { kOk, nullptr };
  } catch(const std::exception &e) {
    return { kGenericError, ::strdup(e.what()) };
  }
}


Response helloworld_by_id_help(
  HelpType type, const char *name,
  const Key *keys, size_t num_keys) {
  // Getting the path params
  std::string unique_name { name };
  nlohmann::json val = nlohmann::json::object();
  switch (type) {
  case HelpType::SHOW:
    val["params"] = HelloworldJsonObject::helpElements();
  break;
  case HelpType::SET:
    val["params"] = HelloworldJsonObject::helpWritableLeafs();
  break;
  case HelpType::NONE:
    val["commands"] = {"set", "show"};
    val["params"] = HelloworldJsonObject::helpComplexElements();
    val["actions"] = HelloworldJsonObject::helpActions();
  break;
  default:
    return { kBadRequest, nullptr };
  }
  return { kOk, ::strdup(val.dump().c_str()) };
}

Response helloworld_list_by_id_help(
  HelpType type, const char *name,
  const Key *keys, size_t num_keys) {

  nlohmann::json val = nlohmann::json::object();
  switch (type) {
  case HelpType::SHOW:
    val["params"] = HelloworldJsonObject::helpKeys();
    val["elements"] = read_helloworld_list_by_id_get_list();
  break;
  case HelpType::ADD:
    val["params"] = HelloworldJsonObject::helpKeys();
    val["optional-params"] = HelloworldJsonObject::helpWritableLeafs();
  break;
  case HelpType::DEL:
    val["params"] = HelloworldJsonObject::helpKeys();
    val["elements"] = read_helloworld_list_by_id_get_list();
  break;
  case HelpType::NONE:
    val["commands"] = {"add", "del", "show"};
    val["params"] = HelloworldJsonObject::helpKeys();
    val["elements"] = read_helloworld_list_by_id_get_list();
  break;
  default:
    return { kBadRequest, nullptr };
  }
  return { kOk, ::strdup(val.dump().c_str()) };
}

Response helloworld_ports_by_id_help(
  HelpType type, const char *name,
  const Key *keys, size_t num_keys) {
  // Getting the path params
  std::string unique_name { name };
  std::string unique_portsName;
  for (size_t i = 0; i < num_keys; ++i) {
    if (!strcmp(keys[i].name, "ports_name")) {
      unique_portsName = std::string { keys[i].value.string };
      break;
    }
  }

  nlohmann::json val = nlohmann::json::object();
  switch (type) {
  case HelpType::SHOW:
    val["params"] = PortsJsonObject::helpElements();
  break;
  case HelpType::SET:
    val["params"] = PortsJsonObject::helpWritableLeafs();
  break;
  case HelpType::NONE:
    val["commands"] = {"set", "show"};
    val["params"] = PortsJsonObject::helpComplexElements();
    val["actions"] = PortsJsonObject::helpActions();
  break;
  default:
    return { kBadRequest, nullptr };
  }
  return { kOk, ::strdup(val.dump().c_str()) };
}

Response helloworld_ports_list_by_id_help(
  HelpType type, const char *name,
  const Key *keys, size_t num_keys) {
  // Getting the path params
  std::string unique_name { name };
  nlohmann::json val = nlohmann::json::object();
  switch (type) {
  case HelpType::SHOW:
    val["params"] = PortsJsonObject::helpKeys();
    val["elements"] = read_helloworld_ports_list_by_id_get_list(unique_name);
  break;
  case HelpType::ADD:
    val["params"] = PortsJsonObject::helpKeys();
    val["optional-params"] = PortsJsonObject::helpWritableLeafs();
  break;
  case HelpType::DEL:
    val["params"] = PortsJsonObject::helpKeys();
    val["elements"] = read_helloworld_ports_list_by_id_get_list(unique_name);
  break;
  case HelpType::NONE:
    val["commands"] = {"add", "del", "show"};
    val["params"] = PortsJsonObject::helpKeys();
    val["elements"] = read_helloworld_ports_list_by_id_get_list(unique_name);
  break;
  default:
    return { kBadRequest, nullptr };
  }
  return { kOk, ::strdup(val.dump().c_str()) };
}

#ifdef __cplusplus
}
#endif

