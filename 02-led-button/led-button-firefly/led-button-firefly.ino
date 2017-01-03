const int inputButton = 0;
const int outputLed = 1;

int i = 0;

void setup() {
  pinMode (inputButton, INPUT);
  pinMode(outputLed, OUTPUT);
}

void loop(){
  if (digitalRead(inputButton) == 1){
    int val = i*10<=255 ? i*10 : 510-i*10;
    analogWrite(outputLed, val);
    
    if (i<51) {
      i++;      
    } else {
      i = 0;
    }

    delay(20);
  } else {
    analogWrite(outputLed, 0);
    i = 0;
  }
}
