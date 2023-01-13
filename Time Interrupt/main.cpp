#define led1 8
#define led2 9
boolean toggle = LOW;
int x = 0;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

  cli();
  TCCR1A = 0;
  TCCR1B = 0;
  TCNT1 = 0;
  OCR1A = 15624;
  TCCR1B |= (1 << WGM12);
  TCCR1B |= (1 << CS12) | (1 << CS10);
  TIMSK1 |= (1 << OCIE1A);
  sei();
}

ISR(TIMER1_COMPA_vect) {
  x++;
  if(x == 10) {
  	toggle = !toggle;
  	digitalWrite(led2, toggle);
  }
}

void loop()
{
  digitalWrite(led1, HIGH);
  delay(10000);
  digitalWrite(led1, LOW);
  delay(10000);
}
