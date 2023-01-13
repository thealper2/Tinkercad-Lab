int i;
int j;
void setup(){
    DDRD = DDRD | 0xFC;
}
void loop(){
    for (i=0; i<64; i++){
        PORTD = PORTD & 0x03;
        j = (i << 2);
        PORTD = PORTD | j;
        delay(2000);
    }
}
