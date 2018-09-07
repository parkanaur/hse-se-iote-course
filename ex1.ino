int val;
int ledpin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
}

void loop() {
  val = Serial.read();
  if (val == 'R') {
    Serial.println("aaaa");
    for (int i = 0; i < 5; ++i) {
      digitalWrite(ledpin, HIGH);
      delay(100);
      digitalWrite(ledpin, LOW);
      delay(100);
    }
  }
}
