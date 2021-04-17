/*60. Pedir al usuario una cadena de caracteres, almacenarla en un arreglo 
 y copiar todo su contenido hacia otro arreglo de caracteres.*/

#include <arduino.h>

char frase[10];
char frase2[10];
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
 
 strcpy(frase2,frase);

Serial.println(frase2);
Serial.println("Frase almacenada correctamente en frase 2");

 Serial.println(" ");
 delay(100);
 }
