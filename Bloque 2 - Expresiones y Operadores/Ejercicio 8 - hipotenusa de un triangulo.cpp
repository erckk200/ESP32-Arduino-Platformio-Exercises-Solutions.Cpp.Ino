/*12. Escriba un programa que lea de la entrada estándar los dos catetos 
  de un triángulo rectángulo y escriba en la salida estándar su hipotenusa.*/

#include <arduino.h>
#include <math.h>

float cat1,cat2,hip;

void setup(){
  Serial.begin(9600);
}

void hipotenusa(){

  Serial.println("");
  Serial.println("Ingresa cateto 1");
    while(!Serial.available()){}
    cat1=Serial.parseFloat();
    Serial.println(String(cat1));

  Serial.println("Ingresa cateto 2");
    while(!Serial.available()){}
    cat2=Serial.parseFloat();
    Serial.println(String(cat2));

    hip=sqrt(pow(cat1,2)+pow(cat2,2));

  Serial.println("La hipotenusa es: "+String(hip));
  Serial.println("");
}

void loop(){
  hipotenusa();
}
