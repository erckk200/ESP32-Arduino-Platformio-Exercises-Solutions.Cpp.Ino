//35. Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)

#include <arduino.h>

int n,factorial=1;

void setup()
{
  Serial.begin(9600);

    Serial.println("Digita un numero ");
      while(!Serial.available()){}
      n=Serial.parseInt();
      Serial.println(n);
      Serial.println("");  

      for(int i=1;i<=n;i++){
        factorial*=i;
      }

    Serial.println("El factorial del numero es: "+ String(factorial));
    Serial.println("");
}
void loop(){

}