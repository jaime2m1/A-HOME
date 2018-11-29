void setup()
{
 pinMode(9,INPUT); //HUMEDAD A
 pinMode(8, INPUT); //LUZ B
 pinMode(13,OUTPUT); //LED
 pinMode(7,INPUT); //PIR C
}

void loop()
{

  int LUZ, HUMEDAD, PIR; 

  LUZ = digitalRead(8);
  HUMEDAD = digitalRead(9);
  PIR = digitalRead(7);

     digitalWrite(9,HIGH);
     digitalWrite(8,HIGH);

if(HUMEDAD == HIGH)
{
    if(LUZ == HIGH)
    {
          digitalWrite(13,HIGH);
    }
    else
    {
          if(PIR == HIGH)
          {
           digitalWrite(13,LOW); 
          }
          else
          {
           digitalWrite(13,HIGH);  
          }
    }
}
else
{
digitalWrite(13,LOW); 
}
}
