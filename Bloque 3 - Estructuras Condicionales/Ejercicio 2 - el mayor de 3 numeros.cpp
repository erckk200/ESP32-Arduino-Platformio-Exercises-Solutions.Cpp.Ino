/*16. Escriba un programa que lea tres números y determine cuál de ellos es 
el mayor.*/

#include <arduino.h>

float n1,n2,n3;

void setup(){
  Serial.begin(9600);
}

void comparacion(){

    Serial.println("");
    Serial.println("Digita 3 numeros");
    while(!Serial.available()){}
    n1=Serial.parseFloat();
    Serial.println(String(n1));
    while(!Serial.available()){}
    n2=Serial.parseFloat();
    Serial.println(String(n2));
    while(!Serial.available()){}
    n3=Serial.parseFloat();
    Serial.println(String(n3));

    if((n1>n2)&&(n1>n3)){
      Serial.println("El mayor es " + String(n1)); 
    }
    else if((n2>n1)&&(n2>n3)){
      Serial.println("El mayor es " + String(n2)); 
    }
    else{
      Serial.println("El mayor es " + String(n3)); 
    }
}

void loop(){
  comparacion();
}