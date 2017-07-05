void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int lectura;
  lectura = analogRead(A1);
  Serial.println(lectura);
  delay(500);
}
