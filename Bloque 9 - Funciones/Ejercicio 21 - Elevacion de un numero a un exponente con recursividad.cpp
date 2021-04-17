/*Ejercicio 96: Escriba una función recursiva que calcule un número elevado a una 
potencia entera mayor o igual que cero: x^y. 

  potencia(x,y) = x                  , y=1
            x*potencia(x,y-1)  , y>1
*/
#include <arduino.h>

int potencia(int,int);
int base,exponente;


void setup() {
  Serial.begin(9600);

}


int potencia(int x,int y){
  int pot;
  if(y==1){//Caso base
    pot = x;
  }
  else{//Caso general
    pot = x*potencia(x,y-1);
  }
  return pot;
}


void loop() {


  //Pedimos los datos al usuario
    Serial.println("Digite numero base: ");
    while(!Serial.available()){}
    base=Serial.parseFloat();
    Serial.println(String(base));


    Serial.println("Digite exponente: ");
        while(!Serial.available()){}
    exponente=Serial.parseFloat();
    Serial.println(String(exponente));
  
  //Mostramos el resultado
    Serial.println("\nResultado: "+ String(potencia(base,exponente)));  
 
}
