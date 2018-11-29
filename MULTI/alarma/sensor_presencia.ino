const int LEDPin= 4;
const int PIRPin1= 52;
const int PIRPin2= 53;
const int PIRPin3= 51;
const int PIRPin4= 50;
const int PIRPin5= 49;
const int PIRPin6= 48;
const int PIRPin7= 47;
 
void setup()
{
  pinMode(LEDPin, OUTPUT);
  pinMode(PIRPin1, INPUT);
  pinMode(PIRPin2, INPUT);
  pinMode(PIRPin3, INPUT);
  pinMode(PIRPin4, INPUT);
  pinMode(PIRPin5, INPUT);
  pinMode(PIRPin6, INPUT);
  pinMode(PIRPin7, INPUT);
}
 
void loop()
{
  int value1= digitalRead(PIRPin1);
  int value2= digitalRead(PIRPin2);
  int value3= digitalRead(PIRPin3);
  int value4= digitalRead(PIRPin4);
  int value5= digitalRead(PIRPin5);
  int value6= digitalRead(PIRPin6);
  int value7= digitalRead(PIRPin7);
 
  if (value1 == HIGH)//--------------------------------------1
  {
    digitalWrite(LEDPin, HIGH);
    delay(50);
    digitalWrite(LEDPin, LOW);
    delay(50);
  }
  else if (value2 == HIGH)//--------------------------------------2
  {
    digitalWrite(LEDPin, HIGH);
    delay(50);
    digitalWrite(LEDPin, LOW);
    delay(50);
  }
  else if (value3 == HIGH)//--------------------------------------3
  {
    digitalWrite(LEDPin, HIGH);
    delay(50);
    digitalWrite(LEDPin, LOW);
    delay(50);
  }
  else if (value4 == HIGH)//--------------------------------------4
  {
    digitalWrite(LEDPin, HIGH);
    delay(50);
    digitalWrite(LEDPin, LOW);
    delay(50);
  }
  else if (value5 == HIGH)//--------------------------------------5
  {
    digitalWrite(LEDPin, HIGH);
    delay(50);
    digitalWrite(LEDPin, LOW);
    delay(50);
  }
  else if (value6 == HIGH)//--------------------------------------6
  {
    digitalWrite(LEDPin, HIGH);
    delay(50);
    digitalWrite(LEDPin, LOW);
    delay(50);
  }
  else if (value7 == HIGH)//--------------------------------------7
  {
    digitalWrite(LEDPin, HIGH);
    delay(50);
    digitalWrite(LEDPin, LOW);
    delay(50);
  }
  else
  {
    digitalWrite(LEDPin, LOW);
  }
  }
