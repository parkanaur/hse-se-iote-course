int ledpin = 11;
int inpin = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);
  pinMode(inpin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledpin, digitalRead(inpin));
}
