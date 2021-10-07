int r=11;
int b=10;
int g=9;
void setup() {
  pinMode(r,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(g,OUTPUT);

  digitalWrite(r,1);   delay(500);

  digitalWrite(r,0);
  digitalWrite(b,1);   delay(500);

  digitalWrite(b,0);
  digitalWrite(g,1);   delay(500);

  digitalWrite(r,1);
  digitalWrite(b,1);
}

void loop() {
 
}
