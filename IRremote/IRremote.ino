#include <IRremote.hpp>   // Include the IR Remote library

int receiverPin = 9;      // IR receiver is connected to digital pin 9

void setup()
{
  Serial.begin(9600);     // Start the Serial Monitor

  // Start the IR receiver
  IrReceiver.begin(receiverPin, ENABLE_LED_FEEDBACK);
}

void loop()
{
  // Check if any button on the remote is pressed
  if (IrReceiver.decode())
  {
    // Print the received code in hexadecimal
    Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);

    // Get ready to receive the next button press
    IrReceiver.resume();
  }
}