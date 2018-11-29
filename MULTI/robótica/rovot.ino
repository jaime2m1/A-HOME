void setup()

{

pinMode(13, OUTPUT);

Serial.begin(9600);

while (!Serial);

Serial.println("Input 1 to Turn LED on and 2 to off");

}

void loop() {

if (Serial.available())

{

int state = Serial.read();

if (state == '1'+'1')

{

digitalWrite(13, HIGH);

Serial.println("Command completed LED turned ON");

}

if (state == '4')

{

digitalWrite(13, LOW);

Serial.println("mmmmmm me da que no");

}

}

}
