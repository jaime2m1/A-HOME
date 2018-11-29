
#include "SoftwareSerial.h"

int pinLed = 2;
SoftwareSerial receptor(4,5);       // Rx, Tx del puerto Serial SW

void setup()
{
  pinMode(pinLed, OUTPUT);
  receptor.begin(9600);            // Configuración e inicio de comunicación con el Serial SW
}
void loop()
{
  int lectura =0;

  if(receptor.available() > 0)     // Si no hay datos enviados (4,5) no hace nada
    {
      lectura = receptor.read();
       if (lectura == 'P')
         {
           digitalWrite(pinLed, HIGH);
         }
      
       if (lectura == 'O')
         {
           digitalWrite (pinLed, LOW);
         }
    }
  delay(1000);      
}

