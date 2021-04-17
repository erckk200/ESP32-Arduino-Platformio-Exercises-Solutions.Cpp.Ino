/*64. Convertir dos cadena de minusculas a MAYUSCULAS. Compararlas, y decir si son 
iguales o no.*/

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
 
  strupr(palabra);
  strupr(palabra2);

     if(strcmp(palabra,palabra2)==0){
          Serial.println("Ambas cadenas son iguales");
     }
    else{
          Serial.println("Ambas cadenas no son iguales");
    }

 Serial.println(" ");
 delay(100);
 }
