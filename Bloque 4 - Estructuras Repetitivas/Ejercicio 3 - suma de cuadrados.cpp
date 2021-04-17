/*29. Realice un programa que calcule y muestre en la salida estándar la suma de 
los cuadrados de los 10 primeros enteros mayores que cero.*/

#include <arduino.h>

int cuadrado,suma=0;

void setup()
{
  Serial.begin(9600);


  for(int i=1;i<=10;i++){
    cuadrado= i * i;
    suma+=cuadrado;
  }

  Serial.println("La suma de los cuadrados es: " + String(suma));
 

}
void loop(){

}
