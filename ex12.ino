int speaker = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(speaker, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (1) {
    for (int i = 0; i < 100; ++i) {
      digitalWrite(speaker, HIGH);
      delay(1);
      digitalWrite(speaker, LOW);
      delay(1);
    }
  }
}
