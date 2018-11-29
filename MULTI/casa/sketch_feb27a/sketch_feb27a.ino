void setup()
{
 pinMode(9,INPUT); //HUMEDAD
 pinMode(8, INPUT); //LUZ 1=
 pinMode(13,OUTPUT); //LED

}

void loop()
{

  int LUZ, HUMEDAD; 

  LUZ = digitalRead(9);
  HUMEDAD = digitalRead(8);

     digitalWrite(9,HIGH);
digitalWrite(8,HIGH);

if(LUZ == HIGH)
{
    if(HUMEDAD == HIGH)
    {
    digitalWrite(13,HIGH);
    }
    else
    {
    digitalWrite(13,LOW);
    }
}
else
{
    if(HUMEDAD == LOW)
    {
    digitalWrite(13,HIGH);
    }
    else
    {
    digitalWrite(13,LOW);
    }
}

}
