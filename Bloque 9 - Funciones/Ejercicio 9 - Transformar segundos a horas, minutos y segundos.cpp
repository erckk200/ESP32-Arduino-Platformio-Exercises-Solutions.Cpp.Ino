/*Ejercicio 84: Escriba una función nombrada tiempo() que tenga un parámetro en número 
entero llamado totalSeg y tres parámetros de referencia enteros nombrados horas, min
y seg. La función es convertir el número de segundos transmitido en un número 
equivalente de horas, minutos y segundos.*/

#include <arduino.h>

  void tiempo(int,int&,int&,int&);
  int totalseg,horas,minu,seg;

  
void setup()
{
  Serial.begin(9600);

    Serial.println("Digita la cantidad de segundos: ");
    while(!Serial.available()){}
    totalseg=Serial.parseFloat();
    Serial.println(String(totalseg));
       
    tiempo(totalseg,horas,minu,seg);

    Serial.println("\nHoras: " + String(horas));
    Serial.println("Minutos: " + String(minu));
    Serial.println("Segundos: " + String(seg));
}

void tiempo(int totalseg,int& horas,int& minu,int& seg){  
  horas = totalseg/3600;
  totalseg %= 3600;
  minu = totalseg/60;
  seg = totalseg%60; 
}


 void loop()
 {
 }
