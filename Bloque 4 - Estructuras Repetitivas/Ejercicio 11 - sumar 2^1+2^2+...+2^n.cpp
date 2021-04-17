//37. Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n


#include <arduino.h>

int n,suma=0,pot=1;

void setup()
{
  Serial.begin(9600);


    Serial.println("Digite el numero de terminos a sumar: ");
      while(!Serial.available()){}
      n=Serial.parseInt();
      Serial.println(n);
      Serial.println("");  

      for(int i=1;i<=n;i++){
        pot=pow(2,i);
        suma+=pot;     
      }
    Serial.println("La suma es: "+ String(suma));
    Serial.println("");
}
void loop(){

}