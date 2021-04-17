/*14. Escriba un programa que calcule las soluciones de una ecuación de 
segundo grado de la forma ax^2 + bx + c = 0, teniendo en cuenta que: 
(-b+sqrt(pow(b,2)-4*a*c))/(2*a) y (-b-sqrt(pow(b,2)-4*a*c))/(2*a)*/

*****
#include <arduino.h>
#include <math.h>

float a,b,c,resul1=0,resul2=0;

void setup(){
  Serial.begin(9600);
}

void ecuacion(){

    Serial.println("");
    Serial.println("Digita valor de 'a'");
    while(!Serial.available()){}
    a=Serial.parseFloat();
    Serial.println(String(a));

    Serial.println("Digita valor de 'b'");
    while(!Serial.available()){}
    b=Serial.parseFloat();
    Serial.println(String(b));

    Serial.println("Digita valor de 'c'");
    while(!Serial.available()){}
    c=Serial.parseFloat();
    Serial.println(String(c));

resul1=(-b+sqrt(pow(b,2)-4*a*c)))/(2*a);
resul2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);

  Serial.println("El resultado positivo es: "+String(resul1));
  Serial.println("El resultado negativo es: "+String(resul2));
  Serial.println("");
}

void loop(){
  ecuacion();
}