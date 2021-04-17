/*49. Realiza un programa que defina dos vectores de caracteres y después 
almacene el contenido de ambos vectores en un nuevo vector, situando en 
primer lugar los elementos del primer vector seguido por los elementos del 
segundo vector. Muestre el contenido del nuevo vector en la salida estándar.*/

#include <arduino.h>

  char letras1[] = {'a','b','c','d','e'};
  char letras2[] = {'f','g','h','i','j'};
  char letras3[10];

void setup()
{
  Serial.begin(9600);

  //Copiando el contenido de letras1 hacia letras3
  for(int i=0;i<5;i++){
    letras3[i] = letras1[i]; 
  }

  //Copiando el contenido de letras2 hacia letras3
  for(int i=5;i<10;i++){
    letras3[i] = letras2[i-5];
  }
  
  //Imprimiento el numero vector con todos los elementos
  Serial.println("El nuevo vector estara conformado por: ");
  for(int i=0;i<10;i++){
   Serial.println(String(letras3[i]));
  }
}

void loop(){

}

