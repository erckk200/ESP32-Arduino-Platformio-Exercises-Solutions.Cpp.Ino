//6. Escribe la siguiente expresión como expresión en C++: (a+b)/(c+d) 

#include <Arduino.h> 

float n1,n2,n3,n4,operacion;
  
void setup(){
    Serial.begin(9600);
}

void divi() {


  Serial.println("");
  Serial.println("Ingrese numero #1: ");
  while(!Serial.available()){}
  n1=Serial.parseFloat();
  Serial.println(String(n1));
  
  Serial.println("Ingrese numero #2: ");
  while(!Serial.available()){}
  n2=Serial.parseFloat();
  Serial.println(String(n2));

  Serial.println("Ingrese numero #3: ");
  while(!Serial.available()){}
  n3=Serial.parseFloat();
  Serial.println(String(n3));
  
  Serial.println("Ingrese numero #4: ");
  while(!Serial.available()){}
  n4=Serial.parseFloat();
  Serial.println(String(n4));
  
  operacion=(n1+n2)/(n3+n4);

  Serial.println("La operacion es: " + String(operacion));
  Serial.println("");
}

void loop() {
  divi();
}

