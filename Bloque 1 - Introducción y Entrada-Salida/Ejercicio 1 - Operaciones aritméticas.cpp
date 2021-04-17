/*1. Escribe un programa que lea de la entrada estándar dos números y muestre 
en la salida estándar su suma, resta, multiplicación y división.*/

//1.Librerias
//2.Declaracion de variables
//3.Iniciamos el void setup
//4.Comunicacion con el controlador
//5.Se crea la funcion donde va a ir el codigo "operaciones"
//6.La funcion operaciones se ingresa dentro del loop para que se repita indefinidamente

#include <Arduino.h> 

  int n1,n2, sum=0,res=0,mul=0,divi=0;

void setup(){

    Serial.begin(9600);
}

void operaciones() {

  Serial.println("");
  Serial.println("Ingrese un numero: ");
  while(!Serial.available()){}
  n1=Serial.parseInt();
  Serial.println(String(n1));
  
  Serial.println("Ingrese otro numero: ");
  while(!Serial.available()){}
  n2=Serial.parseInt();
  Serial.println(String(n2));
  
  sum=n1+n2;
  res=n1-n2;
  mul=n1*n2;
  divi=n1/n2;

  Serial.println("La suma es: " + String(sum));
  Serial.println("La resta es: " + String(res));
  Serial.println("La smultiplicacion es: " + String(mul));
  Serial.println("La divison es: " + String(divi));
  Serial.println("");

}

void loop() {
  operaciones();
}