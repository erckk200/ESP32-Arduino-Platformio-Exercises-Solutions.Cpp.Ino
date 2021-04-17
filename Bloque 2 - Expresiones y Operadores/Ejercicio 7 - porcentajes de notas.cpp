/*11.La calificación final de un estudiante es el promedio de tres notas:
la nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta
un 60% y la nota de participación que cuenta el 10% restante. Escriba un
programa que lea las tres notas del alumno y escriba su nota final.*/

#include <arduino.h>

float prac,teor,parti,prom;

void setup(){
  Serial.begin(9600);
}

void promedio(){

  Serial.println("");
  Serial.println("Buenos dias estudiante");
  Serial.println("Ingresa tus notas");

  Serial.println("Ingresa nota practica");
    while(!Serial.available()){}
    prac=Serial.parseFloat();
    Serial.println(String(prac));

  Serial.println("Ingresa nota teorica");
    while(!Serial.available()){}
    teor=Serial.parseFloat();
    Serial.println(String(teor));

  Serial.println("Ingresa nota participacion");
    while(!Serial.available()){}
    parti=Serial.parseFloat();
    Serial.println(String(parti));

    prom=((prac*0.30)+(teor*0.60)+(parti*0.10))/3;

    Serial.println("Su promedio es de: "+ String(prom));
} 

void loop(){
  promedio();
}
