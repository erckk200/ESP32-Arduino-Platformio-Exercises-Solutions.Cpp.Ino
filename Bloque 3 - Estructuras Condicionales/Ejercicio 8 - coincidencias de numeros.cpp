/*22. Escribe un programa que lea de la entrada estándar tres números. 
 Después debe leer un cuarto número e indicar si el número coincide con
 alguno de los introducidos con anterioridad.*/


#include <arduino.h>

int n1,n2,n3,n4;

void setup(){
  Serial.begin(9600);
}

void numero(){

    Serial.println("");
    Serial.println("Digita 3 numeros");
    while(!Serial.available()){}
    n1=Serial.parseInt();
    Serial.println(String(n1));
    while(!Serial.available()){}
    n2=Serial.parseInt();
    Serial.println(String(n2));
    while(!Serial.available()){}
    n3=Serial.parseInt();
    Serial.println(String(n3));

    Serial.println("Digita un nuevo numero");
    while(!Serial.available()){}
    n4=Serial.parseInt();
    Serial.println(String(n4));

    if((n1==n4)||(n2==n4)||(n3==n4)){
       Serial.println("El ultimo numero coincide con alguno de los 3 digitados anteriormente");
    }
    else{
       Serial.println("El numero no coincide con alguno de los 3 digitados anteriormente");
    }
}
void loop(){
  numero();
}