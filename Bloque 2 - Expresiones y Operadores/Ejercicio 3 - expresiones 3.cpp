//7. Escribe la siguiente expresión como expresión en C++: (a+(b/c))/(d+(e/f))


#include <Arduino.h> 

float n1,n2,n3,n4,n5,n6,operacion;
  
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
  
  Serial.println("Ingrese numero #5: ");
  while(!Serial.available()){}
  n5=Serial.parseFloat();
  Serial.println(String(n5));

  Serial.println("Ingrese numero #6: ");
  while(!Serial.available()){}
  n6=Serial.parseFloat();
  Serial.println(String(n6));


  operacion=(n1+(n2/n3))/(n4+(n5/n6));

  Serial.println("La operacion es: " + String(operacion));
  Serial.println("");
}

void loop() {
  divi();
}
