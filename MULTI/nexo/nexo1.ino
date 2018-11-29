int jaime;
int A;
void setup() {
  Serial.begin(9600);
  pinMode(52,OUTPUT);
  pinMode(53,OUTPUT);
}
void loop () {
  jaime=(Serial.read());
 A=(53,LOW);
  if (jaime=='1') {
    digitalWrite (52,HIGH);
    
    }
    if (jaime=='2') {
      digitalWrite (53,HIGH);
  }  
   if (jaime=='3') {
      digitalWrite (52,LOW);
    }
    if (jaime=='4') {

}}

