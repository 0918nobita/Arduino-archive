const int LED = 13;
const int BUTTON = 7;

int val = 0;
int old_val = 0;
boolean state = false;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  val = digitalRead(BUTTON);
  if ((val == HIGH) && (old_val == LOW)) {
    state = !state;
    delay(10);
  }
  old_val = val;
  digitalWrite(LED, state ? HIGH : LOW);
}

