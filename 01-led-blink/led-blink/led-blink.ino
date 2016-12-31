bool led_stat = false;

void setup(){
  pinMode(1, true);
}

void loop(){
  digitalWrite(1, !led_stat);
  led_stat ^= true;
  delay(500);
}
