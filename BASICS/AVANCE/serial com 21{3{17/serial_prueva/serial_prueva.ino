int a;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  a=Serial.read();
  if(a=='b'){
    Serial.println("recibido");
  }
  else{
    Serial.println("nada");
  }
}
