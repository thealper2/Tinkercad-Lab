#define ledPin 13 // LED 13 nolu pine bağlı

void setupTimer1() {

noInterrupts();  // Kesmeler devre dışı

// Clear registers

TCCR1A = 0;

TCCR1B = 0;

TCNT1 = 0;

OCR1A = 15624;      // 1 Hz (16000000/((15624+1)*1024))

TCCR1B |= (1 << WGM12);   // CTC (Timer on Compare –Timer karşılaştırma Modu) OCR1A ile karşılaştırılır

TCCR1B |= (1 << CS12) | (1 << CS10);  // Prescaler 1024

TIMSK1 |= (1 << OCIE1A);  // Output Compare Match A Interrupt Enable

interrupts(); // Kesmelere izin veriliyor

}

ISR(TIMER1_COMPA_vect) { //Karşılaştırma kesmesi (TCNT1==OCR1A)

digitalWrite(ledPin, digitalRead(ledPin) ^ 1); //LED’in durumunu değiştir. Yanıyorsa söndür, sönükse yak

}

void setup() {

pinMode(ledPin, OUTPUT);  // ledPin çıkış olarak tanımlandı

setupTimer1();

}

void loop() {

}
