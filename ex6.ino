int red = 10;
int yellow = 8;
int green = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  digitalWrite(red, HIGH);
  delay(2000);
  digitalWrite(yellow, HIGH);
  delay(500);
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  delay(2000);
  for (int i = 0; i < 4; ++i) {
    digitalWrite(green, LOW);
    delay(300);
    digitalWrite(green, HIGH);
    delay(300);
  }
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(500);
  digitalWrite(yellow, LOW);
}
