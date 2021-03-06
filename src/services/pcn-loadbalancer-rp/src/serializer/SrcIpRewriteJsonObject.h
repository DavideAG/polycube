/**
* lbrp API
* lbrp API generated from lbrp.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* SrcIpRewriteJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"


namespace io {
namespace swagger {
namespace server {
namespace model {


/// <summary>
///
/// </summary>
class  SrcIpRewriteJsonObject : public JsonObjectBase {
public:
  SrcIpRewriteJsonObject();
  SrcIpRewriteJsonObject(const nlohmann::json &json);
  ~SrcIpRewriteJsonObject() final = default;
  nlohmann::json toJson() const final;


  /// <summary>
  /// Range of IP addresses of the clients that must be replaced
  /// </summary>
  std::string getIpRange() const;
  void setIpRange(std::string value);
  bool ipRangeIsSet() const;
  void unsetIpRange();

  /// <summary>
  /// Range of IP addresses of the that must be used to replace client addresses
  /// </summary>
  std::string getNewIpRange() const;
  void setNewIpRange(std::string value);
  bool newIpRangeIsSet() const;
  void unsetNewIpRange();

private:
  std::string m_ipRange;
  bool m_ipRangeIsSet;
  std::string m_newIpRange;
  bool m_newIpRangeIsSet;
};

}
}
}
}

