/*15. Escriba un programa que lea dos números y determine cuál de ellos es 
el mayor.*/

#include <arduino.h>

float n1,n2;

void setup(){
  Serial.begin(9600);
}

void comparacion(){

    Serial.println("");
    Serial.println("Digita 2 numeros");
    while(!Serial.available()){}
    n1=Serial.parseFloat();
    Serial.println(String(n1));
    while(!Serial.available()){}
    n2=Serial.parseFloat();
    Serial.println(String(n2));

    if(n1==n2){
      Serial.println("Los numeros son iguales");
    }
    else if(n1>n2){
      Serial.println("El mayor es " + String(n1));      
    }
    else{
      Serial.println("El mayor es " + String(n2)); 
    }
}

void loop(){
  comparacion();
}
