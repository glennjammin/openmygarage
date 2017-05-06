

#ifndef Relay_h
#define Relay_h
#include "application.h"

class Relay {

 public:

  Relay(int pin);

  void TurnOn();
  void TurnOff();
  void Toggle(int wait = 1000);
  bool  isOn();
 private:
   int relayPin;
   bool state;
};


#endif Relay_h
