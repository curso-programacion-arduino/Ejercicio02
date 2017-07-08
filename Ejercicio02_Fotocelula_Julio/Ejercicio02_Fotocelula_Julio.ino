
/*
  Ejercicio02

  Uso de la fotocelula.

  Sobre el codigo de jecrespo:
  https://github.com/curso-programacion-arduino/Ejercicio02/blob/master/Ejercicio02-Enrique/Ejercicio02-Enrique.ino

  /* el define hace que el compilador entienda "A1"
  cuando se encuentra en el codigo un "PIN_LDR"
  de esta forma el programador entiende mejor el codigo
  y el compilador "sabe de lo que estamos hablando"
  */

#define PIN_LDR A1 // ojo: al usar "#" no necesitamos ";" al final...

int maximo = 0;
int minimo = 1023;

void setup()
{
  Serial.begin(9600);
  // velocidad de comunicacion en baudios con el puerto serie
}

void loop()
{
  int sensorValue = analogRead(PIN_LDR);
  /* la variable "sensorValue" toma valor con el contenido de
    la lectura del pin analogico A1 "analogRear"...
  */
  maximo = max(maximo, sensorValue);
  // Ver la explicacion: https://www.arduino.cc/en/Reference/Max
  minimo = min(minimo, sensorValue);

  /* Presentamos en el monitor serie los tres datos:
      El maximo, minimo y las sucesivas lecturas del analogRead:
  */
  Serial.print(sensorValue);
  Serial.print(",");
  Serial.print(maximo);
  Serial.print(",");
  Serial.println(minimo);
  delay(100);
}
