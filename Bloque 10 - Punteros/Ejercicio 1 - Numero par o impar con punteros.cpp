/*Ejercicio 98: Comprobar si un n�mero es par o impar, y se�alar la posicion de memoria 
donde se est� guardando el n�mero. Con punteros.*/

#include <arduino.h>


  int numero, *dir_numero;

void setup() {
  Serial.begin(9600);

  
//Pedimos el numero al usuario
Serial.println("Digite un numero: ");
    while(!Serial.available()){}
    numero=Serial.parseFloat();
    Serial.println(String(numero));
  
  dir_numero = &numero;
  
  if(*dir_numero%2==0){
Serial.println("El numero: "+ String(*dir_numero) + " es par");
Serial.println("Posicion: ");Serial.println(&dir_numero);
  }
  else{
Serial.println("El numero: ");Serial.println((*dir_numero)+" es impar");

Serial.print("Posicion: ");Serial.println(&dir_numero);
  }
}


void loop() {


}