//botón
const int BOTON=22;
int val;
int x=0;
//alarma
const int LEDPin= 4;
const int PIRPin1= 52;
const int PIRPin2= 53;
const int PIRPin3= 51;
const int PIRPin4= 50;
const int PIRPin5= 49;
const int PIRPin6= 48;
const int PIRPin7= 47;

void setup(){
//botón
//alarma
pinMode(LEDPin, OUTPUT);
  pinMode(PIRPin1, INPUT);
  pinMode(PIRPin2, INPUT);
  pinMode(PIRPin3, INPUT);
  pinMode(PIRPin4, INPUT);
  pinMode(PIRPin5, INPUT);
  pinMode(PIRPin6, INPUT);
  pinMode(PIRPin7, INPUT);
}
void loop(){
val=digitalRead(BOTON);
while(x<10000000000){
 if(val==HIGH){
  x=x+100000000001;
 }
 else{
  
 digitalWrite(LEDPin, HIGH);
 }
 x++;
 }
 digitalWrite(LEDPin, LOW);
}
