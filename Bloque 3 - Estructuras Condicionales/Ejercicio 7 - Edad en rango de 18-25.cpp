/*21. Escriba un programa que solicite una edad (un entero) e indique en la 
salida estándar si la edad introducida está en el rango [18-25].*/

#include <arduino.h>

int n1;

void setup(){
  Serial.begin(9600);
}

void numero(){

    Serial.println("");
    Serial.println("Digita tu edad");
    while(!Serial.available()){}
    n1=Serial.parseInt();
    Serial.println(String(n1));

    if((n1>=18)&&(n1<=25)){
       Serial.println("Tu edad esta entre 18 y 25");
    }
    else{
       Serial.println("Su edad esta fuera del rango");
    }
}
void loop(){
  numero();
}
