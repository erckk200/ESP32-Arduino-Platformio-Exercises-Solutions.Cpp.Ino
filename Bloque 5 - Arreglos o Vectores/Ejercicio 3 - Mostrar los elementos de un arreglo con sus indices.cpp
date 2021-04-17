/*45. Escribe un programa que lea de la entrada estándar un vector de números 
y muestre en la salida estándar los números del vector con sus índices 
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
