int flame = A5;
int beep = 8;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(beep, OUTPUT);
  pinMode(flame, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(flame);
  Serial.println(val);
  if (val >= 1000) {
    digitalWrite(beep, HIGH);
  }
  else {
    digitalWrite(beep, LOW);
  }
}
