#define led1 8
#define led2 9
#define buton 2
boolean degistir = LOW;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(buton, INPUT);
  attachInterrupt(0, led_degistir, CHANGE);
}

void loop()
{
  digitalWrite(led1, HIGH);
  delay(5000);
  digitalWrite(led2, LOW);
  delay(5000);
}

void led_degistir() {
	degistir = !degistir;
 	digitalWrite(led1, degistir);
  	digitalWrite(led2, degistir);
}
