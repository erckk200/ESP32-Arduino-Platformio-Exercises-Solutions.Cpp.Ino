/*19. Escriba un programa que lea de la entrada estándar un carácter e indique 
en la salida estándar si el carácter es una vocal minúscula o no.*/

#include <arduino.h>

char letra;

void setup(){
  Serial.begin(9600);
}

void vocal(){

    Serial.println("");
    Serial.println("Digita un caracter");
    while(!Serial.available()){}
    letra=Serial.read();
    Serial.println(String(letra));

/*
    if(letra=='a'
       || letra=='e'
       || letra=='i'
       || letra=='o'
       || letra=='u'){
       Serial.println("Es una vocal minuscula");
       }
    else{
      Serial.println("No es una vocal minuscula");
    }
*/
    switch(letra){
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
              Serial.println("Es una vocal minuscula");break;
      default:Serial.println("No es una vocal minuscula"); break;
      
    }
}
void loop(){
  vocal();
}