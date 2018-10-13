int servopin = 9;
int myangle;
int pulsewidth;
int val;
void servopulse(int s, int m) {
  pulsewidth = (m * 11) + 500;
  digitalWrite(s, HIGH);
  delayMicroseconds(pulsewidth);
  digitalWrite (s, LOW) ;// the servo interface level to Low delay (20-pulsewidth/1000);
}

void setup() {
  pinMode(servopin, OUTPUT);
  Serial.begin(9600);
  Serial.println("rdy");
}
void loop() {
  val = Serial.read();
  if (val > '0' && val <= '9') {
    val = val - '0';
    val = val * (180/9);
    Serial.print("moving to ");
    Serial.println(val, DEC);
    for (int i = 0; i <= 50; ++i) {
      servopulse(servopin, val);
    }
  }
}
