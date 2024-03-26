int ledPinMerah = 8;
int ledPinKuning = 9;
int ledPinHijau = 10;

int buttonPinMerah = 11;
int buttonPinKuning = 12;
int buttonPinHijau = 13;

void setup() {
  pinMode(ledPinMerah, OUTPUT);
  pinMode(ledPinKuning, OUTPUT);
  pinMode(ledPinHijau, OUTPUT);

  digitalWrite(ledPinMerah, LOW);
  digitalWrite(ledPinKuning, LOW);
  digitalWrite(ledPinHijau, LOW);

  pinMode(buttonPinMerah, INPUT);
  pinMode(buttonPinKuning, INPUT);
  pinMode(buttonPinHijau, INPUT);
}

void loop() {
  if (digitalRead(buttonPinMerah) == HIGH) {
    digitalWrite(ledPinMerah, HIGH);
  } else {
    digitalWrite(ledPinMerah, LOW);
  }

  if (digitalRead(buttonPinKuning) == HIGH) {
    digitalWrite(ledPinKuning, HIGH);
  } else {
    digitalWrite(ledPinKuning, LOW);
  }

  if (digitalRead(buttonPinHijau) == HIGH) {
    digitalWrite(ledPinHijau, HIGH);
  } else {
    digitalWrite(ledPinHijau, LOW);
  }
}