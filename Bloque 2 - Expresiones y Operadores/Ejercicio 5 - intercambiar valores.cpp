/*9. Escriba un fragmento de programa que intercambie los valores de dos 
variables.*/

******
#include <Arduino.h> 

float n1,n2,n3;
  
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

  n1=n2;
  Serial.println("El nuevo valor del numero #1 es " + String(n1));
  n2=n3;
  Serial.println("El nuevo valor del numero #2 es " + String(n2));
  n3=n1;
  Serial.println("El nuevo valor del numero #3 es " + String(n3));
  Serial.println("");
}

void loop() {
  divi();
}


