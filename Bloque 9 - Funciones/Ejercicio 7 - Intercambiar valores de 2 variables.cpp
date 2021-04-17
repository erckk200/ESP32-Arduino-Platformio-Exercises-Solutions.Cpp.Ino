/*Ejercicio 82: Intercambiar el valor de 2 variables utilizando paso de parámetros por
referencia.*/

#include <arduino.h>

void intercambio(int&, int&);
  int num1=10,num2=15;

void setup()
{
  Serial.begin(9600);

Serial.println("El valor almacenado en num1 es: " +String(num1));
Serial.println("El valor almacenado en num2 es: " +String(num2));
  
  intercambio(num1,num2);
Serial.println("Ahora el nuevo valor de num1 es: " +String(num1));
Serial.println("Ahora el nuevo valor de num2 es: " +String(num2)); 
}

void intercambio(int& num1, int& num2){
  int aux;
  //Intercambiamos ambos valores de las variables num1 y num2
  aux = num1;
  num1 = num2;
  num2 = aux;
}

 void loop()
 {
 }
