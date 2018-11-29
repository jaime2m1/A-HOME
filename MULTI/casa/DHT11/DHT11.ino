#include <DHT.h>
DHT sensorDHT11;


void setup() {

 Serial.begin(9600);
 sensorDHT11.setup(7);
 pinMode(10,OUTPUT);
 pinMode(9,OUTPUT);

}

void loop() {

  int humidity, temperature;
  delay(2000);
  humidity = sensorDHT11.getHumidity();
  temperature = sensorDHT11.getTemperature();
  delay(5000);
  Serial.println("Estado\tHumedad (%)\tTemperatura (C)\t");
  Serial.print(" ");
  Serial.print(sensorDHT11.getStatusString());
  Serial.print("\t");
  Serial.print(humidity);
  Serial.print("\t\t");
  Serial.print(temperature);
  Serial.print("\t\n");

}
