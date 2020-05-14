/**
* dynmon API generated from dynmon.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */



#include "DataplaneMetricsOpenMetricsMetadataLabelsJsonObject.h"
#include <regex>

namespace polycube {
namespace service {
namespace model {

DataplaneMetricsOpenMetricsMetadataLabelsJsonObject::DataplaneMetricsOpenMetricsMetadataLabelsJsonObject() {
  m_nameIsSet = false;
  m_valueIsSet = false;
}

DataplaneMetricsOpenMetricsMetadataLabelsJsonObject::DataplaneMetricsOpenMetricsMetadataLabelsJsonObject(const nlohmann::json &val) :
  JsonObjectBase(val) {
  m_nameIsSet = false;
  m_valueIsSet = false;


  if (val.count("name")) {
    setName(val.at("name").get<std::string>());
  }

  if (val.count("value")) {
    setValue(val.at("value").get<std::string>());
  }
}

nlohmann::json DataplaneMetricsOpenMetricsMetadataLabelsJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();
  if (!getBase().is_null()) {
    val.update(getBase());
  }

  if (m_nameIsSet) {
    val["name"] = m_name;
  }

  if (m_valueIsSet) {
    val["value"] = m_value;
  }

  return val;
}

std::string DataplaneMetricsOpenMetricsMetadataLabelsJsonObject::getName() const {
  return m_name;
}

void DataplaneMetricsOpenMetricsMetadataLabelsJsonObject::setName(std::string value) {
  m_name = value;
  m_nameIsSet = true;
}

bool DataplaneMetricsOpenMetricsMetadataLabelsJsonObject::nameIsSet() const {
  return m_nameIsSet;
}



std::string DataplaneMetricsOpenMetricsMetadataLabelsJsonObject::getValue() const {
  return m_value;
}

void DataplaneMetricsOpenMetricsMetadataLabelsJsonObject::setValue(std::string value) {
  m_value = value;
  m_valueIsSet = true;
}

bool DataplaneMetricsOpenMetricsMetadataLabelsJsonObject::valueIsSet() const {
  return m_valueIsSet;
}

void DataplaneMetricsOpenMetricsMetadataLabelsJsonObject::unsetValue() {
  m_valueIsSet = false;
}


}
}
}
