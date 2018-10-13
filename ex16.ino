int potPin = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val;
  int dat;
  val = analogRead(potPin);
  dat = val * (5.0 / 1023.0 * 100);
  Serial.print("temp: ");
  Serial.print(dat);
  Serial.println("C");
  delay(500);
}
