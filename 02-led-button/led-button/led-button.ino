const int inputButton = 0;
const int outputLed = 1;

void setup() {
  pinMode (inputButton, INPUT);
  pinMode(outputLed, OUTPUT);
}

void loop(){
  if (digitalRead(inputButton) == 0){
    digitalWrite(outputLed,1);
  } else {
    digitalWrite(outputLed,0);
  }
}
