/**
* pbforwarder API
* Policy-Based Forwarder Service
*
* OpenAPI spec version: 2.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* RulesInterface.h
*
*
*/

#pragma once

#include "../serializer/RulesJsonObject.h"


using namespace io::swagger::server::model;

class RulesInterface {
public:

  virtual void update(const RulesJsonObject &conf) = 0;
  virtual RulesJsonObject toJsonObject() = 0;

  /// <summary>
  /// Rule Identifier
  /// </summary>
  virtual uint32_t getId() = 0;

  /// <summary>
  /// VLAN Identifier
  /// </summary>
  virtual uint32_t getVlan() = 0;
  virtual void setVlan(const uint32_t &value) = 0;

  /// <summary>
  /// Source MAC Address in the form AA:BB:CC:DD:EE:FF
  /// </summary>
  virtual std::string getSrcMac() = 0;
  virtual void setSrcMac(const std::string &value) = 0;

  /// <summary>
  /// Destination MAC Address in the form AA:BB:CC:DD:EE:FF
  /// </summary>
  virtual std::string getDstMac() = 0;
  virtual void setDstMac(const std::string &value) = 0;

  /// <summary>
  /// Source IP Address in the form AA.BB.CC.DD
  /// </summary>
  virtual std::string getSrcIp() = 0;
  virtual void setSrcIp(const std::string &value) = 0;

  /// <summary>
  /// Destination IP Address in the form AA.BB.CC.DD
  /// </summary>
  virtual std::string getDstIp() = 0;
  virtual void setDstIp(const std::string &value) = 0;

  /// <summary>
  /// Level 4 Protocol (i.e. UDP, TCP)
  /// </summary>
  virtual RulesL4ProtoEnum getL4Proto() = 0;
  virtual void setL4Proto(const RulesL4ProtoEnum &value) = 0;

  /// <summary>
  /// Source L4 Port
  /// </summary>
  virtual uint16_t getSrcPort() = 0;
  virtual void setSrcPort(const uint16_t &value) = 0;

  /// <summary>
  /// Destination L4 Port
  /// </summary>
  virtual uint16_t getDstPort() = 0;
  virtual void setDstPort(const uint16_t &value) = 0;

  /// <summary>
  /// Ingress port
  /// </summary>
  virtual std::string getInPort() = 0;
  virtual void setInPort(const std::string &value) = 0;

  /// <summary>
  /// Output port (used only when action is FORWARD)
  /// </summary>
  virtual std::string getOutPort() = 0;
  virtual void setOutPort(const std::string &value) = 0;

  /// <summary>
  /// Action associated to the rule(i.e., DROP, SLOWPATH, or FORWARD; default: DROP)
  /// </summary>
  virtual RulesActionEnum getAction() = 0;
  virtual void setAction(const RulesActionEnum &value) = 0;
};

