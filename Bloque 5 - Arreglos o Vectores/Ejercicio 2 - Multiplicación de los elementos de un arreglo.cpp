/*44. Escribe un programa que defina un vector de números y calcule la 
multiplicación acumulada de sus elementos.*/

#include <arduino.h>

int n [5]={1,2,3,4,5};
int multi=1;

void setup()
{
  Serial.begin(9600);

   for(int i=0;i<5;i++){
    multi *=n[i];  //Utilizamos una suma que se repite
   }
    Serial.println("La multiplicacion de los elementos del arreglo es: " + String(multi));

}
void loop(){

}