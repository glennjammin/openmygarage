/*
 * Project openmygarage
 * Description:
 * Author:
 * Date:
 */

#include "GOpener.h"

GOpener garage;

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  garage.begin();
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  if(garage.isOpen()){    // myRelays.isOn(1) will return TRUE if relay 1 on and FALSE if it's off
      garage.Close();     // myRelays.off(#) will switch relay # off
  }

  // If it wasn't already on, then turn it on
  else{
      garage.Open();      // myRelays.on(#) will switch relay # on
  }
  delay(1000);  // Change it once a second

}
