#include <DigiKeyboard.h>
#define KEY_ESCAPE 0x29

const int inputButton = 0;
const int outputLed = 1;
bool outputState = true;

void setup() {
  pinMode (inputButton, INPUT);
  pinMode(outputLed, OUTPUT);
}

void loop() {
  if (digitalRead(inputButton) == HIGH) {
    digitalWrite(outputLed, 1);
    if (!outputState) {
      outputState = true;
      DigiKeyboard.update();
      DigiKeyboard.sendKeyStroke(KEY_ESCAPE, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
    }
  } else {
    digitalWrite(outputLed, 0);
    outputState = false;
  }
  DigiKeyboard.delay(10);
}
