/**
* packetcapture API generated from packetcapture.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


#pragma once


#include "../base/PacketBase.h"


class Packetcapture;

using namespace polycube::service::model;

class Packet : public PacketBase {
 public:
  Packet(Packetcapture &parent, const PacketJsonObject &conf);
  virtual ~Packet();

  /// <summary>
  /// Capture length
  /// </summary>
  uint32_t getCapturelen() override;
  void setCapturelen(const uint32_t &value) override;

  /// <summary>
  /// Packet length
  /// </summary>
  uint32_t getPacketlen() override;
  void setPacketlen(const uint32_t &value) override;

  /// <summary>
  /// timestamp - seconds
  /// </summary>
  uint32_t getTimestampSeconds() override;
  void setTimestampSeconds(const uint32_t &value) override;

  /// <summary>
  /// timestamp - microseconds
  /// </summary>
  uint32_t getTimestampMicroseconds() override;
  void setTimestampMicroseconds(const uint32_t &value) override;
};