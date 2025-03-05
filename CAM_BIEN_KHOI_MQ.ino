#define cambien A0
#define quat 2
#define coi 3
#define den 4
void setup() {
  pinMode(cambien, INPUT);
  pinMode(quat, OUTPUT);
  pinMode(coi, OUTPUT);
  pinMode(den, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(cambien); //Đọc tín hiệu analog từ chân A0 của cảm biến và chân A0 Arduino
  Serial.println(val);  //hiển thị giá trị lên máy tính qua cổng usb
  if(val >= 50){  //Giá trị ngưỡng có thể điều chỉnh độ nhạy cảm biến từ 0 - 1024
    digitalWrite(quat, HIGH);
    digitalWrite(coi, HIGH);
    digitalWrite(den, HIGH);
  }
  else {
    digitalWrite(quat,LOW);
    digitalWrite(coi, LOW);
    digitalWrite(den, LOW);
  }
  delay(100);
}
