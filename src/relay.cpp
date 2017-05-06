#include "relay.h"
const int relayWait = 1000;
Relay::Relay(int pin)
{
  relayPin = pin;
  pinMode(relayPin, OUTPUT);
   state = false;
}

void Relay::TurnOn()
{
  if(state)
    return;
  digitalWrite(relayPin, LOW);
  state = true;
}

void Relay::TurnOff()
{
  if(!state)
    return;

    digitalWrite(relayPin, HIGH);
    state = false;
}

void Relay::Toggle(int wait)
{
  for(int i = 0; i < 2; i++)
  {
    if(isOn())
    {
      TurnOff();
    }
    else
    {
      TurnOn();
       delay(wait);
    }
  }
}

bool Relay::isOn(){
    return state;
}
