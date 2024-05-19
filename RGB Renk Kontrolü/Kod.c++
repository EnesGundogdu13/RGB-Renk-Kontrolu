int R=2,G=3,B=4;
int pot1,pot2,pot3;
void setup()
{
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT);
}

void loop()
{
  pot1 = analogRead(A0);
  pot2 = analogRead(A1);
  pot3 = analogRead(A2);
  pot1 = map(pot1,0,1023,0,255);
  pot2 = map(pot2,0,1023,0,255);
  pot3 = map(pot3,0,1023,0,255);
  analogWrite(R,pot1);
  analogWrite(G,pot2);
  analogWrite(B,pot3);
}