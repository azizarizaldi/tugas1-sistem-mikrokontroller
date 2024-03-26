const int LEDPin = 8;
const int POTPin = A0;

int nilaiPotensiometer = 0;
int nilaiOutput = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LEDPin, OUTPUT);
  pinMode(POTPin, INPUT);
}

void loop() {
  nilaiPotensiometer = analogRead(POTPin);

  nilaiOutput = map(nilaiPotensiometer, 0, 1023, 0, 255);
  analogWrite(LEDPin, nilaiOutput);

  Serial.print("\nNilai analog potensiometer (0-1023) = ");
  Serial.print(nilaiPotensiometer);
  Serial.print("\nOutput tingkat kecerahan (0-255) = ");
  Serial.print(nilaiOutput);

  delay(10);
}