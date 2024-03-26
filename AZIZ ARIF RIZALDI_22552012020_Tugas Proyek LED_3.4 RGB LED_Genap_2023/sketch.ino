int pinMerah = 8;
int pinHijau = 9;
int pinBiru = 10;

void setup() {
  pinMode(pinMerah, OUTPUT);
  pinMode(pinHijau, OUTPUT);
  pinMode(pinBiru, OUTPUT);
}

void loop() {
  aturWarna(255, 0, 0);
  delay(1000);

  aturWarna(0, 255, 0);
  delay(1000);

  aturWarna(0, 0, 255);
  delay(1000);

  aturWarna(255, 255, 255);
  delay(1000);

  aturWarna(170, 0, 255);
  delay(1000);
}

void aturWarna(int nilaiMerah, int nilaiHijau, int nilaiBiru) {
  analogWrite(pinMerah, nilaiMerah);
  analogWrite(pinHijau, nilaiHijau);
  analogWrite(pinBiru, nilaiBiru);
}