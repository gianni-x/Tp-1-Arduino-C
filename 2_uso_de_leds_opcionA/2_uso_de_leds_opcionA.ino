const int ledPin0 = 3;
const int ledPin1 = 4;
const int ledPin2 = 5;

void setup() {
  pinMode(ledPin0, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  digitalWrite(ledPin0, 0);
  digitalWrite(ledPin1, 0);
  digitalWrite(ledPin2, 0);
  delay(200);
  digitalWrite(ledPin0, 0);
  digitalWrite(ledPin1, 0);
  digitalWrite(ledPin2, 1);
  delay(200);
  digitalWrite(ledPin0, 0);
  digitalWrite(ledPin1, 1);
  digitalWrite(ledPin2, 1);
  delay(200);
  digitalWrite(ledPin0, 1);
  digitalWrite(ledPin1, 1);
  digitalWrite(ledPin2, 1);
  delay(200);
  digitalWrite(ledPin0, 1);
  digitalWrite(ledPin1, 1);
  digitalWrite(ledPin2, 0);
  delay(200);
  digitalWrite(ledPin0, 1);
  digitalWrite(ledPin1, 0);
  digitalWrite(ledPin2, 0);
  delay(200);
}
