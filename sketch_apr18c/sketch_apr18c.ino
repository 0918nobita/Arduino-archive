const int LED = 9, BUTTON = 7;

int val = 0,
    old_val = 0,
    brightness = 128;
boolean state = false;
unsigned long startTime = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  val = digitalRead(BUTTON);
  if ((val == HIGH) && (old_val == LOW)) {
    state = !state;
    startTime = millis();
    delay(10);
  }
  if ((val == HIGH) && (old_val == HIGH) && state && (millis() - startTime) > 500) {
    brightness++;
    delay(10);
    if (brightness > 255) brightness = 0;
  }
  old_val = val;
  analogWrite(LED, state ? brightness : 0);
}

