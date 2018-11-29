int pir1;
int pir2;
int pir3;
int pir4;
int pir5;
int pir6;
int pir7;

void setup() {
pinMode(52,INPUT);
pinMode(50,INPUT);
pinMode(48,INPUT);
pinMode(46,INPUT);
pinMode(53,INPUT);
pinMode(51,INPUT);
pinMode(49,INPUT);

pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);

}

void loop() {
pir1 = digitalRead(52);
pir2 = digitalRead(50);
pir3 = digitalRead(48);
pir4 = digitalRead(46);
pir5 = digitalRead(53);
pir6 = digitalRead(51);
pir7 = digitalRead(49);

if(pir1 == 1){
digitalWrite(12,HIGH);
pir1 = 0;
digitalWrite(12,LOW);
}

if(pir2 == 1){
digitalWrite(11,HIGH);

pir2 = 0;
digitalWrite(11,LOW);
}

if(pir3 == 1){
digitalWrite(10,HIGH);

pir3 = 0;
digitalWrite(10,LOW);
}

if(pir4 == 1){
digitalWrite(9,HIGH);

pir4 = 0;
digitalWrite(9,LOW);
}

if(pir5 == 1){
digitalWrite(8,HIGH);

pir5 = 0;
digitalWrite(8,LOW);
}

if(pir6 == 1){
digitalWrite(7,HIGH);

pir6 = 0;
digitalWrite(7,LOW);
}

if(pir7 == 1){
digitalWrite(6,HIGH);
digitalWrite(5,HIGH);

pir7 = 0;
digitalWrite(6,LOW);
digitalWrite(5,LOW);
}

}
