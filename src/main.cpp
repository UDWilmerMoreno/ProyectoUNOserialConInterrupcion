#include <Arduino.h>
int TiempoEjecucion = 1000;
char dato;

void serialEvent()
{
  while (Serial.available())
  {
    dato = Serial.read();
  }
}

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  delay(250);
  switch (dato)
    {
    case 'w':
      Serial.println("Posicion: w= Adelante");
      delay(TiempoEjecucion);
      break;
    case 's':
      Serial.println("Posicion: s= Atras");
      delay(TiempoEjecucion);
      break;
    case 'd':
      Serial.println("Posicion: d= Derecha");
      delay(TiempoEjecucion);
      break;
    case 'a':
      Serial.println("Posicion: a= Izquierda");
      delay(TiempoEjecucion);
      break;
    case 'q':
      Serial.println("Posicion: q= Parar");
      delay(500);
      break;
    case 'z':
      Serial.println("TiempoDeEjecucion: z= 1s");
      TiempoEjecucion = 1000;
      break;
    case 'x':
      Serial.println("TiempoDeEjecucion: x= 2s");
      TiempoEjecucion = 2000;
      break;
    case 'c':
      Serial.println("TiempoDeEjecucion: c= 3s");
      TiempoEjecucion = 3000;
      break;
    case 'v':
      Serial.println("TiempoDeEjecucion: v= 4s");
      TiempoEjecucion = 4000;
      break;
    case 'b':
      Serial.println("TiempoDeEjecucion: b= 5s");
      TiempoEjecucion = 5000;
      break;
    case 'n':
      Serial.println("TiempoDeEjecucion: n= 6s");
      TiempoEjecucion = 6000;
      break;
    case 'm':
      Serial.println("TiempoDeEjecucion: m= 7s");
      TiempoEjecucion = 7000;
      break;
    default:
      Serial.println("Caracter no reconocido");
      break;
    }
}