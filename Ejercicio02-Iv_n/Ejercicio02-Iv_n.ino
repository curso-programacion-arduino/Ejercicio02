int maximo = 0;
int minimo = 1023;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int lectura;
  lectura = analogRead(A1);
  
  if (lectura<minimo){
    minimo=lectura;
  }
  if (lectura>maximo){
    maximo=lectura;
  }
  Serial.print(lectura);
  Serial.print(',');
  Serial.print(maximo);
  Serial.print(',');
  Serial.println(minimo);
  delay(50);
}
