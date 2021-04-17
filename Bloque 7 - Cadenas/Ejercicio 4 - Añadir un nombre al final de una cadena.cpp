/*62. Crear una cadena que tenga la siguiente frase "Hola que tal", 
luego crear otra cadena para preguntarle al usuario su nombre, por ultimo
añadir el nombre al final de la primera cadena y mostrar el mensaje 
completo "Hola que tal (NombreDelUsuario)".*/


#include <arduino.h>

char frase2[]="Hola que tal";
char frase[20];
int cont=0;
int elementos=0;


void setup()
{
  Serial.begin(9600);
}
void loop(){
  Serial.println("\nDigite su nombre");

 do{
  if(Serial.available()!=0){
    frase[cont]=Serial.read();
    cont+=1;
  }
 }while(cont<20&&frase[cont-1]!='.');
 cont=0;


elementos=sizeof(frase)/sizeof(char);
 for(int i=0;i<elementos; i++){
  Serial.print(frase[i]);
  frase[i]= ' ';
 }
 
 //strcat(frase,frase2);

Serial.println(String(frase2) + String(frase));


 Serial.println(" ");
 delay(100);
 }
