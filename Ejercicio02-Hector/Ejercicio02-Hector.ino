void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(analogRead(A1));
  Serial.print(",");
  Serial.print(max(1023,analogRead(A1)));
  Serial.print(",");
  Serial.println(min(0,analogRead(A1)));
  delay(500);
}
