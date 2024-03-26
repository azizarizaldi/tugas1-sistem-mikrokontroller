int ledMerah = 11;
int LedHijau = 10;
int ledBiru = 9;

void setup() {
  pinMode(ledMerah, OUTPUT);
  pinMode(LedHijau, OUTPUT);
  pinMode(ledBiru, OUTPUT);
}

/*
  Keterangan : 
  - DigitalWrite digunakan untuk mengontrol pin digital pada arduino (HIGH = menyala, LOW = mati)
  - Delay digunakan untuk memberika jeda (1000 ms = 1 detik)

*/
void loop() {
  digitalWrite(ledMerah, HIGH);
  digitalWrite(LedHijau, LOW);
  digitalWrite(ledBiru, LOW);
  delay(1000);

  digitalWrite(ledMerah, LOW);
  digitalWrite(LedHijau, HIGH);
  digitalWrite(ledBiru, LOW);
  delay(1000);

  digitalWrite(ledMerah, LOW);
  digitalWrite(LedHijau, LOW);
  digitalWrite(ledBiru, HIGH);
  delay(1000);
}