volatile bool state = RISING;
int x=0;
void setup(){
 DDRD |= 0x80;
 PORTD = (1 << 2);
 EICRA |= (1 << ISC00);
 EIMSK |= (1 << INT0);
 sei();
}
void loop(){
}
ISR (INT0_vect){
 state = !state;
 x++;
 if(x % 2 == 0) {
  PORTD &= 0x7F;
  PORTD |= (state << 7);
 }
}
