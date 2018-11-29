  int bot1=A0;//normal
  int bot2=A1;//discapacitado

  int v1;
  int v2;
  
  int led1=12;//discapacitado
  int led2=11;//discapacitado normal
  int led3=10;//discapacitado

  int usr1;//normal
  int usr2;//discapacitado
  
void setup() {
 pinMode(bot1,INPUT);
 pinMode(bot2,INPUT);
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
}

void loop() {
  analogRead bot1=v1;
  analogRead bot2=v2;
  
  if(v1>20){
    digitalWrite (led1,HIGH);
    digitalWrite (led2,HIGH);
  }
  else if (v2>20){
    digitalWrite (led3,HIGH);
    digitalWrite (led2,HIGH);
  }
}
