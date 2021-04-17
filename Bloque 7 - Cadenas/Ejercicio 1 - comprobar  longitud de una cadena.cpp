/*59. Hacer un programa que pida al usuario que digite una cadena de 
caracteres, luego verificar la longitud de la cadena, y si ésta supera a
10 caracteres mostrarla en pantalla, caso contrario no mostrarla.*/

#include <arduino.h>

char frase[50];
int cont=0;
int elementos=0;


void setup()
{
  Serial.begin(9600);
}
void loop(){
  Serial.println("\nIngrese una frase");

 do{
  if(Serial.available()!=0){
    frase[cont]=Serial.read();
    cont+=1;
  }
 }while(cont<10&&frase[cont-1]!='.');
 cont=0;


elementos=sizeof(frase)/sizeof(char);
 for(int i=0;i<elementos; i++){
  Serial.print(frase[i]);
  frase[i]= ' ';

 }
   if(strlen(frase)>10){
    Serial.print(frase);
  }
  else{
    Serial.print("La cadena no supera los 10 caracteres");
  }
 
 Serial.println(" ");
 delay(100);
 }