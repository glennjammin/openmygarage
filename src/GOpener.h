
#ifndef GOpener_h
#define GOpener_h
#include "application.h"
#include "relay.h"

class GOpener
{

 public:
  enum GarageState {CLOSE,OPEN};
  GOpener();
  ~GOpener();
  void  begin();
  void  Open();
  void  Close();
  GarageState  isOpen();
  void SetRelayPin(int pin);
  int GetRelayPin();

 private:
   GarageState state;
   int relayPin;
   Relay *relay;

};


#endif GOpener_h
