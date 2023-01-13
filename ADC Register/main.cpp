void setup()
{
  	ADMUX = (1 << REFS0);
  	ADMUX = (ADMUX | 0x05);
  	DDRD = 0xFC;
  	DDRB = 0x0F;
}

void loop()
{
  ADCSRA |= (1 << ADEN) | (1 << ADFS2) | (1 << ADFS1) | (1 << ADFS0);
  ADCSRA |= (1 << ADSC);
  while(ADCSRA & (1 << ADSC) >> 6);


  PORTD &= 0xFC;
  PORTD |= (ADCL << 2);
  PORTB &= 0x0F;
  PORTB |= (ADCL >> 6);
  PORTB |= (ADCH << 2);
}
