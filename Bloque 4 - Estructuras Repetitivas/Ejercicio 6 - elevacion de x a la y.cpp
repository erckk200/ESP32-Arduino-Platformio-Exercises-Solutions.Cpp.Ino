/*32. Escriba un programa que calcule x^y, donde tanto x como y son enteros 
positivos, sin utilizar la función pow.*/

#include <arduino.h>

int x,y,ope=1;

void setup()
{
  Serial.begin(9600);
}

void potencia(){
  

    Serial.println("Digita el valor de 'x' ");
      while(!Serial.available()){}
      x=Serial.parseInt();
      Serial.println(x);
    Serial.println("Digita el valor de 'y' ");
      while(!Serial.available()){}
      y=Serial.parseInt();
      Serial.println(y);
      Serial.println("");  

      for(int i=1;i<=y;i++){
        ope *=x;
      }

    Serial.println("La potencia es: "+ String(ope));
    Serial.println("");
}
void loop(){
  potencia();
}