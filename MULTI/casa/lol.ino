void setup(){
  Serial.begin(9600);
  pinMode(22, INPUT);
}
void loop(){
  Serial.println(digitalRead (22));
  delay(1000);
}

