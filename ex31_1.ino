int val = 0;
void setup() {
  pinMode(7, INPUT);
  Serial.begin(9600);
}
void loop() {
  val = analogRead(0);
  Serial.print("X: ");
  Serial.print(val, DEC);
  val = analogRead(1);
  Serial.print(" | Y: ");
  Serial.print(val, DEC);
  val = digitalRead(7);
  Serial.print(" | Z: ");
  Serial.println(val, DEC);
  delay(100);
}
