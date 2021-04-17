/*Ejercicio 94: Realice una funci�n recursiva que sume los primeros n enteros positivos. 
Nota: para plantear la funci�n recursiva tenga en cuenta que la suma puede expresarse 
mediante la siguiente recurrencia:

  suma(n) = 1            , si n=1
        n+suma(n-1)  , si n>1
*/


#include <arduino.h>

//Prototipo de Funci�n
int sumar(int n);
int numero;

void setup() {
  Serial.begin(9600);

}


//Definici�n de Funci�n
int sumar(int n){
  int suma=0;
  
  if(n==1){//Caso base
    suma = 1;
  }
  else{//Caso general
    suma = n + sumar(n-1);
  }
  
  return suma;
}     



void loop() {
  
  //Pedimos un numero hasta que sea entero positivo numero > 0
  do{
    Serial.println("Digite un numero: ");
    while(!Serial.available()){}
    numero=Serial.parseFloat();
    Serial.println(String(numero));
  }while(numero<=0);
  
  //Mandamos llamar a la funcion recursiva sumar
    Serial.println("La suma es: "+ String(sumar(numero)));

}