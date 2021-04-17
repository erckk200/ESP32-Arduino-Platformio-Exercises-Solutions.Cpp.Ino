//34. Escriba un programa que calcule el valor de: 1+3+5+...+2n-1

#include <arduino.h>

int n1,suma=0;

void setup()
{
  Serial.begin(9600);
}

void sum(){
  

    Serial.println("Digita la cantidad de elementos que desea sumar: ");
      while(!Serial.available()){}
      n1=Serial.parseInt();
      Serial.println(n1);
      Serial.println("");  

      for(int i=1;i<=2*n1-1;i+=2){
        suma=suma+i;
      }

    Serial.println("La suma es: "+ String(suma));
    Serial.println("");
}
void loop(){
  sum();
}
