/**
 * Basic IR receiver toggler.
 * Simply polls receiver for any values and sets output based on them.
 */

#include <RobotIRremote.h>

int ir_pin = 9;
int output_pin_1 = 4;
int output_pin_2 = 5;
int output_pin_3 = 6;

IRrecv irrecv(ir_pin);
decode_results signals;



void setup()
{
  pinMode(output_pin_1, OUTPUT);
  pinMode(output_pin_2, OUTPUT);
  pinMode(output_pin_3, OUTPUT);
  
  Serial.begin(9600);
  irrecv.enableIRIn(); // enable input from IR receiver
}

void loop()
{
  if (irrecv.decode(&signals))
  {
    switch(signals.value)
    {
      default:
        // Do nothing.
        break;
    }
    irrecv.resume(); // get the next signal
  }
}
