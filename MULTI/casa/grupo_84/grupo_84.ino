void setup() {
  // put your setup code here, to run once:
  pinMode (7,INPUT);
  pinMode (3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int luz;
luz=digitalRead(3);

if (luz==HIGH)
{
 digitalWrite(3,HIGH);
}
else
  {
  digitalWrite(3,LOW);
  }
}


