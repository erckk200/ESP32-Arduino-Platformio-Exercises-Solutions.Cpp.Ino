/*45. Escribe un programa que lea de la entrada est�ndar un vector de n�meros 
y muestre en la salida est�ndar los n�meros del vector con sus �ndices 
asociados.*/

#include <arduino.h>

int n,num [100];

void setup()
{
  Serial.begin(9600);


  Serial.println("Digite el numero de elementos");
    while(!Serial.available()){}
    n=Serial.parseFloat();
    Serial.println(String(n));

   for(int i=0;i<n;i++){
      Serial.println("Digite un numero: ");
      while(!Serial.available()){}
      num [i]=Serial.parseFloat();
      Serial.println(String(num [i])); //Guardamos los numeros en el arreglo

      //Ahora, vamos a mostrar los numeros con sus indices asociados

        for(int i=0;i<n;i++){
         Serial.println(String(i)+ " -> " + String(num[i] ));  //Mostrando los numeros               
        }
}
}
void loop(){

}
