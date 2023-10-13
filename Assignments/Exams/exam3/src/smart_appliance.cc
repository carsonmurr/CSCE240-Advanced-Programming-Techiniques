// Copyright 2022 Carson Murray
#include <exam3/inc/smart_appliance.h>

namespace exam3 {

namespace problem3 {

  SmartAppliance::~SmartAppliance() {
    return;
  }

  const std::string SmartLight::Activate() {
    if (activated_ == ON) {
      activated_ = true;
      const std::string ret = "{\"active\": true, \"previous\": true}";
      return ret;
    } else {
      activated_ = true;
      const std::string ret = "{\"active\": true, \"previous\": false}";
      return ret;
    }
  }

  const std::string SmartLight::Deactivate() {
    if (activated_ == ON) {
      activated_ = false;
      light_ = false;
      const std::string ret = "{\"active\": false, \"previous\": false}";
      return ret;
    } else {
      activated_ = false;
      light_ = false;
      const std::string ret = "{\"active\": false, \"previous\": true}";
      return ret;
    }
  }
  const std::string SmartLight::Set(unsigned int setting) {
    if (activated_ == false) {
      const std::string ret = "{\"active\": false}";
      return ret;
    } else if (setting == 1 && light_ == false) {
      light_ = true;
      const std::string ret = "{\"active\": true,  \"on\": true}";
//   SmartThermostat thermo;
//   std::cout << thermostat.Activate() << '\n';
//   std::cout << thermostat.Set(70) << '\n';
//
//   SmartAppliance *appliance = &thermostat;
//   std::cout << appliance->Set(25) << '\n';
//   std::cout << appliance->Deactivate() << std::endl;


// SmartLight
// Extends the SmartAppliance. A light is off when deactivated and remains so
// until set using the Set method.
//
//  Activate: (1) Object is inactive, activates light and returns the string
//                  { "active": true, "previous": false };
//            (2) Object is active, returns the string
//                  { "active": true, "previous": true };
//
//  Deactivate: (1) Object is inactive, does nothing and returns the string
//                    { "active": false, "previous": false }
//              (2) Object is active, deactivates light and returns string
//                    { "active": false, "previous": true };
//




//  Set: (1) Object is inactive, setting parameter is ignored and returns the
//           string
//             { "active": false }
//       (2) Object is active:
//           (a) Setting parameter is 1(ON) and light is off, turns light on
//               and returns string:
      return ret;
    } else if (setting == 1 && light_ == true) {
      light_ = true;
      const std::string ret = "{\"active\":true,\"on\":true,\"previous\":true}";
      return ret;
    } else if (setting == 0 && light_ == true) {
      light_ = 0;
      const std::string ret = "{\"active\":true,\"on\":false}";
      return ret;
    } else {
      light_ = 0;
      const std::string ret = "{\"active\":true,\"on\":true}";
      return ret;
    }
  }
  SmartLight::~SmartLight() {
    return;
  }

  const std::string SmartThermostat::Activate() {
    if (activated_ == ON) {
      activated_ = true;
      const std::string ret = "{\"active\": true, \"previous\": true}";
      return ret;
    } else {
      activated_ = true;
      const std::string ret = "{\"active\": true, \"previous\": false}";
      return ret;
    }
  }

  const std::string SmartThermostat::Deactivate() {
    if (ON) {
      activated_ = false;
      const std::string ret = "{\"active\": false, \"previous\": false}";
      return ret;
    } else {
      activated_ = false;
      const std::string ret = "{\"active\": false, \"previous\": true}";
      return ret;
    }
  }
  const std::string SmartThermostat::Set(unsigned int setting) {
    const std::string test = "";
    return test;
  }

  SmartThermostat::~SmartThermostat() {
    return;
  }
}  // namespace problem3
}  // namespace exam3
