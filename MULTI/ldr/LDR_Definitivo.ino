void setup() {
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

int led0;
led0 = analogRead (0);

int led1;
led1 = analogRead (1);

int led2;
led2 = analogRead (2);

int led3;
led3 = analogRead (3);





if (led1 < 150) {
digitalWrite (8,HIGH);
digitalWrite (9,HIGH);
digitalWrite (10,HIGH);
delay (50); }
else {
digitalWrite (8,LOW);
digitalWrite (9,LOW);
digitalWrite (10,LOW);
delay (50);
}

if (led0 < 50) {
  digitalWrite (12,HIGH);
  digitalWrite (11,HIGH);
  delay (10);
}
else {
  digitalWrite (12,LOW);
  digitalWrite (11,LOW);
  delay (10);
  
}
if (led2 < 50) {
  digitalWrite (7,HIGH);
  digitalWrite (6,HIGH);
  delay (10);
}
else {
  digitalWrite (7,LOW);
  digitalWrite (6,LOW);
  delay (10);
}
if (led3 < 150) {
  digitalWrite (5,HIGH);
  delay (10);
}
else {
  digitalWrite (5,LOW);
  delay (10);
}
  

}
