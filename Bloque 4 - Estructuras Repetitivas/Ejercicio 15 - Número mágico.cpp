/*41. Realice un programa que solicite al usuario que piense un número entero 
entre el 1 y el 100. El programa debe generar un numero aleatorio en ese mismo
rango[1-100],e indicarle al usuario si el numero que digito es menor o mayor 
al numero aleatorio, así hasta que lo adivine. y por ultimo mostrarle el
numero de intentos que le llevo.

variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior);
*/
#include <arduino.h>
#include <time.h>

int n,dato,contador=0;

void setup()
{
  Serial.begin(9600);

   srand(time(NULL));  //Genera un numero aleatorio entre 1-100
   dato= 1+ rand()%(101-1);

   do{
    Serial.println("Digite un numero: ");
      while(!Serial.available()){}
      n=Serial.parseInt();
      Serial.println(n);

      if(n>dato){
           Serial.println("Es un numero menor ");
      }
      else if(n<dato){
           Serial.println("Es un numero mayor ");
      }
      contador++;
   }
   while(n!=dato);
     Serial.println("Felicidades acertaste el numero! ");   
     Serial.println("Numero de intentos: " + String(contador));  
}
void loop(){

}