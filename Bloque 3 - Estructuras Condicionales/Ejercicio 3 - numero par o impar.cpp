/*17. Realice un programa que lea un valor entero y determine si se trata de un 
número par o impar.*/

#include <arduino.h>

int n1,n2,n3;

void setup(){
  Serial.begin(9600);
}

void par(){

    Serial.println("");
    Serial.println("Digita 1 numero");
    while(!Serial.available()){}
    n1=Serial.parseFloat();
    Serial.println(String(n1));
    
    if(n1==0){
      Serial.println("El numero es cero");      
    }
    else if(n1%2==0){
      Serial.println("El numero es par");
    }
    else{
      Serial.println("El numero es impar");  
    }
}
void loop(){
  par();
}