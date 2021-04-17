/*42. Realice un programa que calcule la descomposición en factores primos de 
un número entero.

Por ejemplo: 20 = 2*2*5.
*/

#include <arduino.h>

int n;

void setup()
{
  Serial.begin(9600);

    Serial.println("Digite un numero: ");
      while(!Serial.available()){}
      n=Serial.parseInt();
      Serial.println(n);
      
    Serial.println("Descompononiendo en factores primos: ");
    for(int i=2;n>1;i++){
      while(n%i==0){
        Serial.println(String(i)+" ");
        n/=i;
      }
      
}
}
void loop(){

}