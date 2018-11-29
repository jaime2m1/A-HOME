#include "SoftwareSerial.h"
int RST=23;
int botn=3;
int bot;
int al=2;
int alr;

const int PIRPin1= 52;
const int PIRPin2= 53;
const int PIRPin3= 51;
const int PIRPin4= 50;
const int PIRPin5= 49;
const int PIRPin6= 48;

SoftwareSerial receptor(8, 9); //  definimos los pines Rx, Tx
void setup()
{
  
  pinMode(al,OUTPUT);
  pinMode(RST,OUTPUT);
  
  
  
  pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);
  
  
  
  pinMode(PIRPin1, INPUT);
  pinMode(PIRPin2, INPUT);
  pinMode(PIRPin3, INPUT);
  pinMode(PIRPin4, INPUT);
  pinMode(PIRPin5, INPUT);
  pinMode(PIRPin6, INPUT);
  
  Serial.begin(9600); // Abre la comunicación con el monitor serie
  receptor.begin(9600);
}
void loop()
{
  digitalWrite(botn,HIGH);
  
  
  
int led0;
led0 = analogRead (0);

int led1;
led1 = analogRead (1);

int led2;
led2 = analogRead (2);

int led3;
led3 = analogRead (3);

  
  
  int value1= digitalRead(PIRPin1);
  int value2= digitalRead(PIRPin2);
  int value3= digitalRead(PIRPin3);
  int value4= digitalRead(PIRPin4);
  int value5= digitalRead(PIRPin5);
  int value6= digitalRead(PIRPin6);
  
  if (Serial.available() > 0)  // Solo hará algo cuando haya datos disponibles desde el monitor serie
  {
    int recept=receptor.read();
    int dato = Serial.read(); // Almacena el valor del dato recibido en dato
    /*
    ////////////////////////////////////////////////////////////////CANCIONES/////////////////////////////////////////////////////////////////////////
    */
    if (dato == '1')  // Si se recibe R, se enciende el LED rojo
    {
      emisor.write('1');
      Serial.println("PLAY HARRY POTTER");
    }
    if (dato == '2')  // Si se recibe R, se enciende el LED rojo
    {
      emisor.write('2');
      Serial.println("PLAY STAR WARS");
    }
    if (dato == '3')  // Si se recibe R, se enciende el LED rojo
    {
      emisor.write('3');
      Serial.println("PLAY MARCHA IMPERIAL");
    }
    if (dato == '4')  // Si se recibe R, se enciende el LED rojo
    {
      emisor.write('4');
      Serial.println("PLAY ENTRE DOS AGUAS");
    }
    /*
    /////////////////////////////////////////////////////////////CaNcIoNeS//////////////////////////////////////////////////////////////////////////
    */
    /*
    //////////////////////////////////////////////////////BADBADBADBADBADBADBAD//////////////////////////////////////////////////////////////////////
    /*/
    if (recept == 'B')//si se pasa una targeta invalida suma un 1 a los fallidos
    {
      Serial.println("--ACCESO DENEGADO--");
      alr=alr+1;
      digitalWrite(al,HIGH);//da un toque la alarma
      delay(100);
      digitalWrite(al,LOW);//da un toque la alarma
    }
    /*
    //////////////////////////////////////////////////////BaDBaDBaDBaDBaDBaDBaD/////////////////////////////////////////////////////////////////
    */
    /*
    //////////////////////////////////////////////////////GOODGOODGOODGOODGOOD/////////////////////////////////////////////////////////////////////////
    */
    if (recept==('G'){//-------------------------Si se pasa una targeta valida-----------------------------------------------------------------------
      Serial.println("++ACCESO GARANTIZADO++");
      bot=bot+1;//añade un usuario a bot
      
    }
    /*
    /////////////////////////////////////////////////////GoOdGoOdGoOdGoOdGoOd///////////////////////////////////////////////////////////////////////
    */
    if (al>=3){ //si al>=3 enciende la alarma
      digitalWrite(al,HIGH);
      if(dato==('0'){//dato=0 apaga la alarma
        al=0;
    }
    }
    if (al==0){
    digitalWrite(al,LOWdigitalWrite(al,HIGH););
    }
    if (bot>=1){//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      if(digitalRead(botn)==HIGH){//si se pulsa el boton resta un usuario
      receptor.write('O');
      bot=bot-1;
      }
      
      
      else{
                  //------------------LUCES-----------------------
                  if (led1 < val) {
                    digitalWrite (8,HIGH);
                    digitalWrite (9,HIGH);
                    digitalWrite (10,HIGH);
                    delay (10); }
                  else {
                    digitalWrite (8,LOW);
                    digitalWrite (9,LOW);
                    digitalWrite (10,LOW);
                    delay (10);
                  }

                  if (led0 < val) {
                    digitalWrite (12,HIGH);
                    digitalWrite (11,HIGH);
                    delay (10);
                  }
                  else {
                    digitalWrite (12,LOW);
                    digitalWrite (11,LOW);
                    delay (10);
  
                  }
                  if (led2 < val) {
                    digitalWrite (7,HIGH);
                    digitalWrite (6,HIGH);
                  delay (10);
                  }
                  else {
                    digitalWrite (7,LOW);
                    digitalWrite (6,LOW);
                    delay (10);
                  }
                  if (led3 < val) {
                    digitalWrite (5,HIGH);
                    delay (10);
                  }
                  else {
                    digitalWrite (5,LOW);
                    delay (10);
                  }//----------------------LUCES---------------------------if (value1 == HIGH)//--------------------------------------1
  
      }
      
      
    }//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    
    if (bot==0){//si no hay nadie se activa la alarma
      if (value1 == HIGH)//--------------------------------------1
  {
    digitalWrite(al, HIGH);
    delay(50);
    digitalWrite(al, LOW);
    delay(50);
  }
  else if (value2 == HIGH)//--------------------------------------2
  {
    digitalWrite(al, HIGH);
    delay(50);
    digitalWrite(al, LOW);
    delay(50);
  }
  else if (value3 == HIGH)//--------------------------------------3
  {
    digitalWrite(al, HIGH);
    delay(50);
    digitalWrite(al, LOW);
    delay(50);
  }
  else if (value4 == HIGH)//--------------------------------------4
  {
    digitalWrite(al, HIGH);
    delay(50);
    digitalWrite(al, LOW);
    delay(50);
  }
  else if (value5 == HIGH)//--------------------------------------5
  {
    digitalWrite(al, HIGH);
    delay(50);
    digitalWrite(al, LOW);
    delay(50);
  }
  else if (value6 == HIGH)//--------------------------------------6
  {
    digitalWrite(al, HIGH);
    delay(50);
    digitalWrite(al, LOW);
    delay(50);
  }
  else
  {
    digitalWrite(al, LOW);
  }
  if(dato==('R'){
  digitalWrite(RST,HIGH);
  delay(100);
  digitalWrite(RST,LOW);
  }
  }
}
}
