// C++ code
//
void setup()
{
  pinMode(10, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(10, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(2, HIGH);
  digitalWrite(10, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
}
