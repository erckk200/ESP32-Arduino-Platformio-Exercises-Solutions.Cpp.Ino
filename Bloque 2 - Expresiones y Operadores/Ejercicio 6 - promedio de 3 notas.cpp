/*10. Escriba un programa que lea las tres notas de un alumno y calcule la 
nota final media de dicho alumno*/

#include <arduino.h>

float n1,n2,n3,prom;

void setup(){
  Serial.begin(9600);
}

void promedio(){
    Serial.println("Buenos dias, ingresa las 3 notas");
    Serial.println("Ingrese nota #1: ");
    while(!Serial.available()){}
    n1=Serial.parseFloat();
    Serial.println(String(n1));

    Serial.println("Ingrese nota #2: ");
    while(!Serial.available()){}
    n2=Serial.parseFloat();
    Serial.println(String(n2));

    Serial.println("Ingrese nota #3: ");
    while(!Serial.available()){}
    n3=Serial.parseFloat();
    Serial.println(String(n3));

    prom=(n1+n2+n3)/3;

    Serial.println("El resultado de tus notas es: "+String(prom));
    
  }

void loop(){
  promedio();
  
}
