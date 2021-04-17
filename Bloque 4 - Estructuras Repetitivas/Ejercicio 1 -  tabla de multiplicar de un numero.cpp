/*27. Realice un programa que solicite de la entrada estándar un entero 
del 1 al 10 y muestre en la salida estándar su tabla de multiplicar.*/

#include <arduino.h>

int n1;


void setup()
{
  Serial.begin(9600);
}

void tabla(){

  do{
  Serial.println("");
  Serial.println("Ingresa un numero entero entre [1-10]");
  while(!Serial.available()){}
  n1=Serial.parseInt();
  Serial.println(n1);
  Serial.println("");
  }
  while((n1<1)||(n1>10));
 
  for(int i=1;i<=20;i++){
    Serial.println(String(n1)+" * "+String(i)+" = "+String(n1*i));
  }
}
void loop(){
  tabla();
}
