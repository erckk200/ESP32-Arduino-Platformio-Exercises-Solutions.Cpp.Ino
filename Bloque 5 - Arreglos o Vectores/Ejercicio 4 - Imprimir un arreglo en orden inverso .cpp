/*46. Escribe un programa que defina un vector de n�meros y muestre en la salida 
est�ndar el vector en orden inverso�del �ltimo al primer elemento.*/

#include <arduino.h>

int n[5]={1,2,3,4,5};

void setup()
{
  Serial.begin(9600);

         Serial.println("El orden inverso es: ");
    for(int i=4;i>=0;i--){
         Serial.println(String(n[i]));  //Impresion en orden inverso              
        }
}

void loop(){

}