/*66. Pedir al usuario 2 cadenas de caracteres de numeros, uno entero 
y el otro real,convertirlos a sus respectivos valores y por ultimo sumarlos.*/

#include <arduino.h>

  char palabra[20];
  char palabra2[20];
  int valorEntero;
  float valorFlotante;
  int cont=0;
  int elementos=0;


void setup()
{
  Serial.begin(9600);
}
void loop(){


  //Numero entero
  Serial.println("\nIngrese numeros enteros #1");
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


//Numero decimal
  Serial.println("\nIngrese numeros decimales ");
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

  //Transformamos las cadenas a numeros
  valorEntero = atoi(palabra);
  valorFlotante = atof(palabra2);

  //Por ultimo los sumamos
  Serial.println("\n La suma es: "+ String(valorEntero+valorFlotante));


 Serial.println(" ");
 delay(100);
 }
