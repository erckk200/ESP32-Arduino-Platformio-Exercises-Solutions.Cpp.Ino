/*28. Realice un programa que lea de la entrada est�ndar n�meros hasta que se 
introduzca un cero. En ese momento el programa debe terminar y mostrar en la 
salida est�ndar el n�mero de valores mayores que cero le�dos.*/

#include <arduino.h>

int n1,cont=0;

void setup()
{
  Serial.begin(9600);
}

void conteo(){

  do{
      Serial.println("");
      Serial.println("Digita un numero");
      while(!Serial.available()){}
      n1=Serial.parseInt();
      Serial.println(n1);
      Serial.println("");

         if(n1>0){
            cont++;
         }
   }
  while(n1!=0);
    Serial.println("El total de numero mayores que 0 es: " +String(cont));
 
}
void loop(){
  conteo();
}