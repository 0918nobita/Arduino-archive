const int SENSOR = 0; // 抵抗型のセンサがつながっているピン
int val = 0;          // センサからの値を記憶する変数

void setup() {
  Serial.begin(9600);
}

void loop() {
  val = analogRead(SENSOR);
  Serial.println(val);
  delay(100);
}

