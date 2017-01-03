#include "DigiKeyboard.h"

const int inputButton = 0;
const int outputLed = 1;
bool outputState = true;

void setup() {
  pinMode (inputButton, INPUT);
  pinMode(outputLed, OUTPUT);
}

void loop(){
  if (digitalRead(inputButton) == 0){
    digitalWrite(outputLed, LOW);
    if (!outputState) {
      outputState = true;
      DigiKeyboard.sendKeyStroke(0);
      DigiKeyboard.println("Hello!");
    }
  } else {
    digitalWrite(outputLed, HIGH);
    outputState = false;
  }
  DigiKeyboard.delay(10);
}
