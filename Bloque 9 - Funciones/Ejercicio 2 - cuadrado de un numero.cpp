/*Ejercicio 77: Escriba una funci�n llamada al_cuadrado() que calcule el cuadrado del 
valor que se le transmite y despliegue el resultado. La funci�n deber� ser capaz de
elevar al cuadrado n�meros flotantes*/

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