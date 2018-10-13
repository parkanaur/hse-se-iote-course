int ledPin = 10;
int redPin = 11;
int greenPin = 13;
int bluePin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  randomSeed(analogRead(0));
}


void color(unsigned char red, unsigned char green, unsigned char blue) {
  digitalWrite(redPin, red);
  digitalWrite(bluePin, blue);
  digitalWrite(greenPin, green);
}

void loop() {
  // put your main code here, to run repeatedly:
  color(255, 0, 0);
  delay(500);
  color(0, 255, 0);
  delay(500);
  color(0, 0, 255);
  delay(500);
  color(255, 255, 0);
  delay(500);
  color(255, 0, 255);
  delay(500);
  color(0, 0, 0);
  delay(500);
}
