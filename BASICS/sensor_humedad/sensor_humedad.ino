#include <DHT11.h>

int pin=7;
DHT11 dht11(pin);

void setup()
   {
       Serial.begin(9600);
   }

void loop()
   {
       int err;
       float temp, hum;
       if((err = dht11.read(hum, temp)) == 0)    
          {
             Serial.print("Temperatura: ");
             Serial.print(temp);
             Serial.print(" Humedad: ");
             Serial.print(hum);
             Serial.println();
          }
       else
          {
             Serial.println();
             Serial.print("Error Num :");
             Serial.print(err);
             Serial.println();
          }
       delay(1000);            
   }
