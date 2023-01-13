#define led1 4
#define led2 5
#define led3 6
#define led4 7
#define led5 8
#define led6 9
#define led7 10
#define buton1 2
#define buton2 3
int zaman = 50;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(buton1, INPUT);
  pinMode(buton2, INPUT);
  attachInterrupt(0, artir, RISING);
  attachInterrupt(1, azalt, RISING);
}

void loop()
{
 digitalWrite(led1, 1);
 delay(zaman);
 digitalWrite(led2, 1);
 delay(zaman);
 digitalWrite(led3, 1);
 delay(zaman);
 digitalWrite(led4, 1);
 delay(zaman);
 digitalWrite(led5, 1);
 delay(zaman);
 digitalWrite(led6, 1);
 delay(zaman);
 digitalWrite(led7, 1);
 delay(zaman);
 digitalWrite(led7, 0);
 delay(zaman);
 digitalWrite(led6, 0);
 delay(zaman);
 digitalWrite(led5, 0);
 delay(zaman);
 digitalWrite(led4, 0);
 delay(zaman);
 digitalWrite(led3, 0);
 delay(zaman);
 digitalWrite(led2, 0);
 delay(zaman);
 digitalWrite(led1, 0);
 delay(zaman);
}

void artir() {
  zaman = zaman + 50;
}

void azalt() {
  zaman = zaman - 50;
  if(zaman <= 50)
    zaman = 50;
}
