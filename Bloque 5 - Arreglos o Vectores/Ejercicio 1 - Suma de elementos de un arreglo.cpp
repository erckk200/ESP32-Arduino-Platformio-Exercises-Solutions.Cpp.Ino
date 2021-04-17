/*43. Escribe un programa que defina un vector de números y calcule la suma de 
sus elementos.*/

#include <arduino.h>

int n [5]={1,2,3,4,5};
int suma=0;

void setup()
{
  Serial.begin(9600);

   for(int i=0;i<5;i++){
    suma +=n[i];  //Utilizamos una suma que se repite
   }
    Serial.println("La suma de los elementos del arreglo es: " + String(suma));

}
void loop(){

}