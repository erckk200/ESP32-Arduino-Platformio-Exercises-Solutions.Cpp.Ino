/*65. Pedir su nombre al usuario en MAYÚSCULA, si su nombre comienza por la letra A, 
convertir su nombre a minusculas, caso contrario no convertirlo.*/

#include <arduino.h>

char palabra[20];
int cont=0;
int elementos=0;


void setup()
{
  Serial.begin(9600);
}
void loop(){

  //Palabara 1
  Serial.println("\n Digite su nombre en mayuscula");
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

if(strncmp(palabra,"A",1)==0){
    strlwr(palabra);
    Serial.println(String(palabra)); 
}
  else{
        Serial.println("Su nombre no comienza por A"); 
  }

 Serial.println(" ");
 delay(100);
 }
