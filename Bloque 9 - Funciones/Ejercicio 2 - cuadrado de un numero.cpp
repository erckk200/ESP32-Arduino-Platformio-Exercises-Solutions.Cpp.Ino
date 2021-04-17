/*Ejercicio 77: Escriba una función llamada al_cuadrado() que calcule el cuadrado del 
valor que se le transmite y despliegue el resultado. La función deberá ser capaz de
elevar al cuadrado números flotantes*/

#include <arduino.h>

void pedirDatos();
void al_cuadrado(float n);
float n1;

void setup()
{
  Serial.begin(9600);
}



void pedirDatos(){  
    Serial.println("Digite un numero: ");
    while(!Serial.available()){}
    n1=Serial.parseFloat();
    Serial.println(String(n1));
 }


void al_cuadrado(float n){
    float cuadrado=0;  
    cuadrado = n1*n1;
    Serial.println("El cuadrado del numero es: "+String(cuadrado));
}
  

void loop(){

  pedirDatos(); 
  al_cuadrado(n1);
}