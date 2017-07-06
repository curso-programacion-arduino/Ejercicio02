int maximo = 0;
int minimo = 1023;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  maximo = max(maximo,analogRead(A1));
  minimo = max(minimo,analogRead(A1));
  Serial.print(analogRead(A1));
  Serial.print(",");
  Serial.print(maximo);
  Serial.print(",");
  Serial.println(minimo);
  delay(500);
}
