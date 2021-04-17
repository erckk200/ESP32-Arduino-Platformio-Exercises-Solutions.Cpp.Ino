/*Ejercicio 81: Escriba una plantilla de funci�n llamada maximo() que devuelva el valor 
m�ximo de tres argumentos que se transmitan a la funci�n cuando sea llamada.
Suponga que los tres argumentos ser�n del mismo tipo de datos.*/

#include <arduino.h>


template <class T>
T maximo(T dato1, T dato2, T dato3);
char dato1='e',dato2='f',dato3='a';

void setup()
{
  Serial.begin(9600);
  Serial.println("El maximo valor es: "+String((maximo)(dato1,dato2,dato3)));

}

template <class T>
T maximo(T dato1, T dato2, T dato3){
  T max;
  
  if((dato1 > dato2) && (dato1 > dato3)){
    max = dato1;
  }
  else{
     if((dato2>dato1) && (dato2>dato3)){
      max = dato2;
    }
    else{
      max = dato3;
    }
  }
  return max;
}

 void loop()
 {
 }
