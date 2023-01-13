int x=0;
volatile bool state = RISING;
void setup()
{
  DDRD |= (1 << 6) | (1 << 7);
  DDRB |= (1 << 0) | (1 << 1) | (1 << 2) | (1 << 3) | (1 << 4) | (1 << 5);
  PORTD |= (3 << 2); // pullup pini tanimlandi
  cli(); // Kesmeleri kapat
  EIMSK |= (1 << INT0);
  EIMSK |= (1 << INT1);
  EICRA |= (1 << ISC00);
  EICRA |= (1 << ISC01); // Rising modu icin pinler ayarlandi
  EICRA |= (1 << ISC10);
  EICRA |= (1 << ISC11);
  sei(); // Kesmeleri ac
}

void loop() {

}
// Sag
ISR (INT0_vect){
 x++; // Sayaci artir
 PORTD &= 0x3F; // Pin leri sifirlama
 PORTB &= 0x00; //
 PORTB |= (x >> 2); // Sayactaki degeri pinlere  ata
 PORTD |= (x << 6); //

}
// Sol
ISR (INT1_vect){
 x--; // Sayaci azalt
 PORTD &= 0x3F; // Pin leri sifirlama
 PORTB &= 0x00;
 PORTB |= (x >> 2); // Sayactaki degeri pinlere ata
 PORTD |= (x << 6);

}
