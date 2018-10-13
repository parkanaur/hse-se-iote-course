float temp;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int V1 = analogRead(A0);
  float vol = V1 * (5.0 / 1023.0);
  if (vol == temp) {
    temp = vol;
  }
  else {
    Serial.print(vol);
    Serial.println("V");
    temp = vol;
    delay(1000);
  }
}
