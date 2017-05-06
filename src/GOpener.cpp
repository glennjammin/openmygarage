#include "GOpener.h"
const int relayWait = 1000;
GOpener::GOpener()
{
  state = CLOSE;
  relayPin = D0;
  relay = 0;
}

GOpener::~GOpener()
{
  delete relay;
  relay = 0;
}

void GOpener::begin()
{
    relay = new Relay(relayPin);
}

void GOpener::Open()
{
  if(state == OPEN)
    return;

  relay->Toggle(200);

  state = OPEN;
}

void GOpener::Close()
{
  if(state == CLOSE)
    return;
  relay->Toggle(200);

  state = CLOSE;
}

GOpener::GarageState GOpener::isOpen()
{
   return state;
}

void GOpener::SetRelayPin(int pin)
{
  relayPin = pin;
}

int GOpener::GetRelayPin()
{
  return relayPin;
}
