/*Ejercicio 97: Escriba una función escribeNumeros(int ini, int fin) que devuelva 
en la salida estándar los números del ini al fin. Escriba una versión que escriba los 
números en orden ascendente.

    escribeNumeros(ini,fin) = ini                             , si ini=fin
                  escribeNumeros(ini,fin-1)       , si fin>ini
*/

#include <arduino.h>


//Prototipo de Funcion
int escribeNumeros(int,int);
int ini,fin;

void setup() {
  Serial.begin(9600);

}


int escribeNumeros(int ini,int fin){
  if(ini==fin){//Caso base
    return ini;
  }
  else{//Caso general
    return escribeNumeros(ini,fin-1);
  }
}


void loop() {



  //Pedimos los datos al usuario
    Serial.println("Escriba el inicio: ");
    while(!Serial.available()){}
    ini=Serial.parseFloat();
    Serial.println(String(ini));
 
    Serial.println("Escriba el fin: "); 
    while(!Serial.available()){}
    fin=Serial.parseFloat();
    Serial.println(String(fin));

  
  //Llamamos a la funcion de forma iterativa para mostrar todos los elementos
  for(int i=ini;i<=fin;i++){
    Serial.print(String(escribeNumeros(i,fin)+ " "));
  } 

}