/*47. Desarrolle un programa que lea de la entrada estándar un vector de enteros 
y determine el mayor elemento del vector.*/

#include <arduino.h>

int num[100];
int n,mayor=0;

void setup()
{
  Serial.begin(9600);

         Serial.println("Digite el numero de elementos: ");
         while(!Serial.available()){}
         n=Serial.parseFloat();
         Serial.println(String(n));

         
    for(int i=0;i<n;i++){
         Serial.println("Digite el numero");   
         while(!Serial.available()){}
         num[i]=Serial.parseFloat();
         Serial.println(String(num[i]));//Guardamos los elementos en el arreglo

         if(num[i] > mayor){ //Detrerminamos el mayor elemento en cada repetecion de bucle
            mayor = num[i];
        }
}
         Serial.println("El mayor elemento del vector es: "+String(mayor));   
}
void loop(){

}