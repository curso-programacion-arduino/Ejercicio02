int maximo;
int minimo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A1, OUTPUT);
  int lectura = analogRead(A1);
  maximo = lectura;
  minimo = lectura;
}

void loop() {
  // put your main code here, to run repeatedly:
  int lectura = analogRead(A1);
  if (lectura < minimo) {
    minimo = lectura;
  }
  if (lectura > maximo) {
    maximo = lectura;
  }
    Serial.print(minimo);
    Serial.print("  ");
    Serial.print(lectura);
    Serial.print("  ");
    Serial.println(maximo);
  delay (1000);
  }
