// C++ code
//

int pinNumber = 13;
void setup()
{
  pinMode(pinNumber, OUTPUT);
}

void loop()
{
  digitalWrite(pinNumber, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(pinNumber, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
