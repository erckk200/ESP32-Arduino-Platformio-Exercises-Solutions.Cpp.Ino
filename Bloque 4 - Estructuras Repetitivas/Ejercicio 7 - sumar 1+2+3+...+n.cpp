//33. Escriba un programa que calcule el valor de: 1+2+3+...+n


#include <arduino.h>

int n1,suma=0;

void setup()
{
  Serial.begin(9600);
}

void sum(){
  

    Serial.println("Digita el total de numeros a sumar: ");
      while(!Serial.available()){}
      n1=Serial.parseInt();
      Serial.println(n1);
      Serial.println("");  

      for(int i=1;i<=n1;i++){
        suma=suma+i;
      }

    Serial.println("La suma es: "+ String(suma));
    Serial.println("");
}
void loop(){
  sum();
}
