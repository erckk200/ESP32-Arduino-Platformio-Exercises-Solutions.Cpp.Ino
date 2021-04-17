//5. Escribe la siguiente expresión como expresión en C++: (a/b) + 1



#include <Arduino.h> 

float n1,n2,operacion;
  
void setup(){
    Serial.begin(9600);
}

void divi() {


  Serial.println("");
  Serial.println("Ingrese un numero: ");
  while(!Serial.available()){}
  n1=Serial.parseFloat();
  Serial.println(String(n1));
  
  Serial.println("Ingrese otro numero: ");
  while(!Serial.available()){}
  n2=Serial.parseFloat();
  Serial.println(String(n2));
  
  operacion=(n1/n2)+1;

  Serial.println("La operacion es: " + String(operacion));
  Serial.println("");
}

void loop() {
  divi();
}
