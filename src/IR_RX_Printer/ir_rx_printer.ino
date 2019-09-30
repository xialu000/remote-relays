/**
 * Basic IR receiver printer.
 * Simply polls receiver for any values and prints them out.
 */

#include <RobotIRremote.h>

int ir_pin = 9;
IRrecv irrecv(ir_pin);
decode_results signals;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // enable input from IR receiver
}

void loop()
{
  if (irrecv.decode(&signals))
  {
    Serial.println(signals.value, HEX);
    irrecv.resume(); // get the next signal
  }
}
