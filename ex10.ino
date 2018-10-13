int rl = 10;
int yl = 9;
int gl = 8;
int rp = 7;
int yp = 6;
int gp = 5;
int r, y, g;

void setup() {
  // put your setup code here, to run once:
  pinMode(rl, OUTPUT);
  pinMode(yl, OUTPUT);
  pinMode(gl, OUTPUT);
  pinMode(rp, INPUT);
  pinMode(yp, INPUT);
  pinMode(gp, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(rl, digitalRead(rp));
  digitalWrite(yl, digitalRead(yp));
  digitalWrite(gl, digitalRead(gp));
}
