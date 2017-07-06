//Comentario

#define PIN_LDR A1
int maximo = 0;
int minimo = 1023;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int temperatura = analogRead(PIN_LDR);
  maximo = max(maximo, temperatura);
  minimo = min(minimo, temperatura);
  Serial.print(temperatura);
  Serial.print(",");
  Serial.print(maximo);
  Serial.print(",");
  Serial.println(minimo);
}
