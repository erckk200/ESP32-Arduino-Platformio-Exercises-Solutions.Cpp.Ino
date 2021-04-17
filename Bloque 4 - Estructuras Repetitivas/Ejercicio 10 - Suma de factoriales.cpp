/*36. Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! 
(suma de factoriales).*/

#include <arduino.h>

int n,suma=0,factorial=1;

void setup()
{
  Serial.begin(9600);

    Serial.println("Digita el total de elementos a sumar: ");
      while(!Serial.available()){}
      n=Serial.parseInt();
      Serial.println(n);
      Serial.println("");  

      for(int i=1;i<=n;i++){
        factorial*=i; //Primero sacamos los factoriales
        suma+=factorial; //Luego los sumamos
      }

    Serial.println("La suma de factoriales es: "+ String(factorial));
    Serial.println("");
}
void loop(){

}