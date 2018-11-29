
  int p=7;
  int o=8;
  
  int v1;
  int v2;
  
  int led1=12;//discapacitado
  int led2=11;//discapacitado normal
  int led3=10;//discapacitado

  int usr1;//normal
  int usr2;//discapacitado
  
void setup() {
  pinMode(p,INPUT);
  pinMode(o,INPUT);
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
}

void loop() {
  digitalWrite(p,HIGH);
  digitalWrite(o,HIGH);
  
    v1=digitalRead (p);
    v2=digitalRead (o); 
    
   
    
  
  if(v1 == LOW){
    digitalWrite (led1,HIGH);
    digitalWrite (led2,HIGH);
    digitalWrite (led3,LOW);
    delay(10000);
  }
  if (v2 == LOW){
    usr1=1;
  } 
  
  if (usr1==1){
    if (v2 == HIGH){
    digitalWrite (led3,HIGH);
    digitalWrite (led2,HIGH);
    digitalWrite (led1,LOW);
  } 
  else{
    usr1=usr1+1;
  }
  }
  else{
  digitalWrite (led1,LOW);
    digitalWrite (led2,LOW);
    digitalWrite (led3,LOW);
}}
