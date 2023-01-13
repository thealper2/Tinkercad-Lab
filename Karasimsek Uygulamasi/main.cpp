// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);

}

void loop()
{
  for(int i=13;i>7;--i)
  {
    digitalWrite(i, HIGH);
  	delay(100);
  	digitalWrite(i, LOW);
  	delay(100);
  }
  for(int i=8;i<14;++i)
  {
    digitalWrite(i, HIGH);
  	delay(100);
  	digitalWrite(i, LOW);
  	delay(100);
  }
}
