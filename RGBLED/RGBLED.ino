int r=11;
int b=10;
int g=9;

byte fenyEro=0;
byte irany=1;

int poti=0;

int kapcs=2;

bool mukodik=true;

void setup() {
  pinMode(r,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(g,OUTPUT);
  
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(kapcs, INPUT_PULLUP);
  
  Serial.begin(9600);

  digitalWrite(r,1);   delay(500);

  digitalWrite(r,0);
  digitalWrite(b,1);   delay(500);

  digitalWrite(b,0);
  digitalWrite(g,1);   delay(500);

  digitalWrite(r,0);
  digitalWrite(g,0);
  digitalWrite(b,0);

 /* analogWrite(r,0);
  analogWrite(g,0);
  analogWrite(b,255);*/


}

void loop() {
  if (mukodik){
    poti=analogRead(A0); //0-1023
    fenyEro=map(poti,0,1023,0,255);
    analogWrite(r,fenyEro);
  
    poti=analogRead(A1); //0-1023
    fenyEro=map(poti,0,1023,0,255);
    analogWrite(g,fenyEro);
  
    poti=analogRead(A2); //0-1023
    fenyEro=map(poti,0,1023,0,255);
    analogWrite(b,fenyEro);
  }
  else
  {
    digitalWrite(r,0);
    digitalWrite(g,0);
    digitalWrite(b,0);
  }
  
  if (digitalRead(kapcs)==0)
  {
    delay(100);
    if (digitalRead(kapcs)==0){
      
      mukodik=!mukodik;
      Serial.println(mukodik);
      }
  }
  
/*  Serial.print("Analóg érték: ");
  Serial.print(poti);
  Serial.print("; Fényerő: ");
  Serial.println(fenyEro);*/
    
   //fenyEro 0-255
  /*if (fenyEro==255) {irany=-1;}
  if (fenyEro==0) irany=1;
  fenyEro=fenyEro+irany;
  delay(10); */
  
}
