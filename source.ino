int bPins[3] = {2, 3, 4}, bStatuses[4], i;

void setup () {
  for (i = 0; i <= 2; i++) {
    pinMode(bPins[i], INPUT);
  }
  pinMode(8, OUTPUT);
}

void loop() {
  for (i = 0; i <= 2; i++) {
    bStatuses[i] = digitalRead(bPins[i]);
  }

  if (bStatuses[0] == HIGH) {
    tone(buzzPin, 1000, 300);
  }
  else if (bStatuses[1] == HIGH) {
    tone(buzzPin, 1100, 300);
  }
  else if (bStatuses[2] == HIGH) {
    tone(buzzPin, 1800, 300);
  }
  delay(50);

}