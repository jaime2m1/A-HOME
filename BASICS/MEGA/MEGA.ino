//                                 Programa para la Arduino UNO Emisora
#include "SoftwareSerial.h"

SoftwareSerial emisor(8, 9); //  definimos los pines Rx, Tx
void setup()
{
  Serial.begin(9600); // Abre la comunicación con el monitor serie
  emisor.begin(9600);
}
void loop()
{
  if (Serial.available() > 0)  // Solo hará algo cuando haya datos disponibles desde el monitor serie
  {
    int dato = Serial.read(); // Almacena el valor del dato recibido en dato
    if (dato == 'R')  // Si se recibe R, se enciende el LED rojo
    {
      emisor.write('P');
      Serial.println("LED ROJO ON ENVIADA ORDEN");
    }
    else if (dato == 'r')
    {
      emisor.write('O');
      Serial.println("LED ROJO OFF ENVIADA ORDEN");
    }
  }  
  delay(1000);
}

