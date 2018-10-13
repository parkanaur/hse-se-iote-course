int x = 0;
int y = 1;
int z = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(x, INPUT);
  pinMode(y, INPUT);
  pinMode(z, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int nx, ny, nz;
  nx = analogRead(x);
    ny = analogRead(y);
  nz = digitalRead(z);
  Serial.print (nx, DEC); Serial.print (","); Serial.print (ny, DEC); Serial.print (","); Serial.println (nz, DEC); delay (100);

}
