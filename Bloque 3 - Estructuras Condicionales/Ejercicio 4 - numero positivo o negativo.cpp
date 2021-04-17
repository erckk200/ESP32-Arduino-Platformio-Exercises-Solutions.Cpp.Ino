//18. Comprobar si un número digitado por el usuario es positivo o negativo.

#include <arduino.h>

int n1;

void setup(){
  Serial.begin(9600);
}

void positivo(){

    Serial.println("");
    Serial.println("Digita 1 numero");
    while(!Serial.available()){}
    n1=Serial.parseFloat();
    Serial.println(String(n1));
    
    if(n1==0){
      Serial.println("El numero es cero");      
    }
    else if(n1>0){
      Serial.println("El numero es positivo");
    }
    else{
      Serial.println("El numero es negativo");  
    }
}
void loop(){
  positivo();
}