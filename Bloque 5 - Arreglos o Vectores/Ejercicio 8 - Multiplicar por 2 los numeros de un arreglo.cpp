/*50. Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo 
multiplicados por 2 y muestre el segundo arreglo.*/

#include <arduino.h>

  int numeros[5],numeros2[5];

void setup()
{
  Serial.begin(9600);

  //Primero vamos a pedir los 5 numeros del primer arreglo
  for(int i=0;i<5;i++){
       Serial.println(String(i+1)+ "  Digite un numero: " );
       while(!Serial.available()){}
       numeros[i]=Serial.parseInt();
       Serial.println(String(numeros[i]));
  }

  //Ahora, vamos a multiplicar por 2 los elementos del primer arreglo
  for(int i=0;i<5;i++){
    numeros2[i] = numeros[i]*2;
  }

  Serial.println("Mostrando numeros multiplicados por 2: ");
  
  //Luego mostramos el segundo arreglo
  for(int i=0;i<5;i++){
       Serial.println(String(numeros2[i]));
  }
}

void loop(){

}
