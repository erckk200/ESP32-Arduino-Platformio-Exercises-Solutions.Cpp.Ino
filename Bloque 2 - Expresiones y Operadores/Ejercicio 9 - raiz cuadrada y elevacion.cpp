/*13. Realice un programa que calcule el valor que toma la siguiente función 
para unos valores dados de x e y: f(x,y) = sqrt(x) / (pow(y,2)-1)*/

#include <arduino.h>
#include <math.h>

double x,y,resul;

void setup(){
  Serial.begin(9600);
}

void funcion(){

    Serial.println("");
    Serial.println("Digita valor de x");
    while(!Serial.available()){}
    x=Serial.parseFloat();
    Serial.println(String(x));

    Serial.println("Digita valor de y");
    while(!Serial.available()){}
    y=Serial.parseFloat();
    Serial.println(String(y));

    resul=sqrt(x)/(pow(y,2)-1);

  Serial.println("El resultado es: "+String(resul));
  Serial.println("");
}

void loop(){
  funcion();
}