/*61. Pedir al usuario que digite 2 cadenas de caracteres, e indicar si 
ambas cadenas son iguales, en caso de no serlo, indicar cual es mayor 
alfabeticamente.*/

#include <arduino.h>

char palabra[20];
char palabra2[20];
int cont=0;
int elementos=0;


void setup()
{
  Serial.begin(9600);
}
void loop(){

  //Palabara 1
  Serial.println("\nIngrese frase #1");
 do{
  if(Serial.available()!=0){
    palabra[cont]=Serial.read();
    cont+=1;
  }
 }while(cont<20&&palabra[cont-1]!='.');
 cont=0;


elementos=sizeof(palabra)/sizeof(char);
 for(int i=0;i<elementos; i++){
  Serial.print(palabra[i]);
  palabra[i]= ' ';

 }


//Palabra 2
  Serial.println("\nIngrese frase #2 ");
 do{
  if(Serial.available()!=0){
    palabra2[cont]=Serial.read();
    cont+=1;
  }
 }
 while(cont<20&&palabra2[cont-1]!='.');
 cont=0;

elementos=sizeof(palabra2)/sizeof(char);
 for(int i=0;i<elementos; i++){
  Serial.print(palabra2[i]);
  palabra2[i]= ' ';
 
 }

     if(strcmp(palabra,palabra2)==0){
          Serial.println("Ambas cadenas son iguales");
     }
     else if(strcmp(palabra,palabra2)>0){
         Serial.println(String(palabra)+ "La palabra 1 Es mayor alfabeticamente");
     }
    else{
        Serial.println(String(palabra2)+ "La palabra 2 Es mayor alfabeticamente");
    }

 Serial.println(" ");
 delay(100);
 }
