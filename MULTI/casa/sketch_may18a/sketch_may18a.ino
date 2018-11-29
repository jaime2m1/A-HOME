void setup() {
 pinMode(2,INPUT);
 pinMode(3,OUTPUT);
}
void loop() {
   int LDR;
  LDR=digitalRead(2);
  if(LDR==LOW)
    {
  digitalWrite(3,LOW);
 }
   else if(LDR==HIGH)
 {
  digitalWrite(3,HIGH);
 }
}
