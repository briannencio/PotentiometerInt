int pot1;

void setup() {
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  // Reads the amount of bits it receives, 1023 bits is its max
  pot1 = analogRead(A0);

  // 1023 is included since its the max, and pot1 between 4 since analogWrite max is 255
  pot1 > 511 && pot1 <= 1023 ? analogWrite(3, pot1 / 4) : analogWrite(3, 0);
}

