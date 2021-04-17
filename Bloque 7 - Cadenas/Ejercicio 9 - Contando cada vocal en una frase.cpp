/*67. Realice un programa que lea una cadena de caracteres de la entrada 
estándar y muestre en la salida estándar cuántas ocurrencias de cada 
vocal existen en la cadena.*/


#include <arduino.h>

  char palabra[20];
  int cont=0;
  int elementos=0;
  int vocal_a=0,vocal_e=0,vocal_i=0,vocal_o=0,vocal_u=0;


void setup()
{
  Serial.begin(9600);
}
void loop(){

  Serial.println("\nIngrese una frase ");
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


  for(int i=0;i<30;i++){
    switch(palabra[i]){
      
      case 'a': vocal_a++; break;
      case 'e': vocal_e++; break;
      case 'i': vocal_i++; break;
      case 'o': vocal_o++; break;
      case 'u': vocal_u++; break;
      }
    }
   Serial.println("\n Contador de vocales");
   Serial.println("Vocal a: "+ String(vocal_a));
   Serial.println("Vocal e: "+ String(vocal_e));
   Serial.println("Vocal i: "+ String(vocal_i));
   Serial.println("Vocal o: "+ String(vocal_o));
   Serial.println("Vocal u: "+ String(vocal_u));  


 Serial.println(" ");
 delay(100);
 }
