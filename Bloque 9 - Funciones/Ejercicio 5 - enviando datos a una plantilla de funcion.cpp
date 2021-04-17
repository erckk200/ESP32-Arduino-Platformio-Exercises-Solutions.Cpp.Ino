/*Ejercicio 80: Escriba una plantilla de función llamada despliegue() que despliegue el valor
del argumento único que se le transmite cuando es invocada la función.*/


#include <arduino.h>


template <class TIPOD>
void despliegue(TIPOD dato);
  int dato1 = 4;
  float dato2 = 5.678;
  double dato3 = 15.6789;
  char dato4 = 'a';

void loop(){
  
}
void setup()
{
  Serial.begin(9600);
   despliegue(dato1);
  despliegue(dato2);
  despliegue(dato3);
  despliegue(dato4);
}


template <class TIPOD>
void despliegue(TIPOD dato){
Serial.println("El dato es: "+ String(dato));
Serial.println("");
}
