//Ejercicio02

#define LDR A1
int maximo = 0;
int minimo = 1023;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(LDR);
  Serial.print ("Valor actual ");
  Serial.print (sensorValue);
  maximo = max(maximo, sensorValue);
  minimo = min(minimo, sensorValue);
  Serial.print(", Maximo " + (String)maximo);
  Serial.println(", Minimo " + (String)minimo);
  Serial.println("     ");
  delay (500);

}
