#include "DigiKeyboard.h"

const int inputButton = 0;
const int outputLed = 1;
bool outputState = true;

void setup() {
  pinMode (inputButton, INPUT);
  pinMode(outputLed, OUTPUT);
}

void loop(){
  if (digitalRead(inputButton) == HIGH){
    digitalWrite(outputLed, HIGH);
    if (!outputState) {
      outputState = true;
      DigiKeyboard.sendKeyStroke(0);
      DigiKeyboard.println("Hello!");
    }
  } else {
    digitalWrite(outputLed, LOW);
    outputState = false;
  }
  DigiKeyboard.delay(10);
}
