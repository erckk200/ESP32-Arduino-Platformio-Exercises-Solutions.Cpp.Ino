/*Ejercicio 76: Escriba una función llamada mult() que acepte dos números 
en punto flotante como parámetros, multiplique estos dos números y 
despliegue el resultado.*/

#include <arduino.h>

//Prototipo de Funcion
void mult(float x,float y);
void pedirDatos();
float n1,n2;

void setup()
{
  Serial.begin(9600);
}


void pedirDatos(){  
Serial.println("Digite 2 numeros: ");
    while(!Serial.available()){}
    n1=Serial.parseFloat();
    Serial.println(String(n1));
    while(!Serial.available()){}
    n2=Serial.parseFloat();
    Serial.println(String(n2));
 }


 void multi(float x,float y){
   float multiplicacion = x * y;

Serial.println("La multiplicacion es: "+String(multiplicacion));
}
  

void loop(){
  pedirDatos();
  multi(n1,n2);
}
