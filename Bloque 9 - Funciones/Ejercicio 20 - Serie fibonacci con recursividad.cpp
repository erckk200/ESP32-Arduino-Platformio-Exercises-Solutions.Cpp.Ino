/*Ejercicio 95: Realice una función recursiva para la serie Fibonacci 
Nota: La serie de Fibonacci está formada por la secuencia de números: 
0, 1, 1, 2, 3, 5, 8, 13, 21, 34... 

  fibonacci(n) = n                              , si n<2
           fibonacci(n-1)+fibonacci(n-2)  , si n>=2

*/

#include <arduino.h>

int fibonacci(int n);
int nElementos;


void setup() {
  Serial.begin(9600);

}

int fibonacci(int n){
  if(n<2){//Caso base
    return n;
  }
  else{//Caso general
    return fibonacci(n-1)+fibonacci(n-2);
  }
}



void loop() {

    //Pedimos un numero entero positivo
  do{
    Serial.println("Digite el numero de elementos: ");
    while(!Serial.available()){}
    nElementos=Serial.parseFloat();
    Serial.println(String(nElementos));
  }while(nElementos <= 0);
  
  //Mandamos llamar a la funcion pero de forma iterativa para imprimir todos los elementos
    Serial.println("Serie Fibonacci: ");
  for(int i=0;i<nElementos;i++){
    Serial.print((String(fibonacci(i))+" , "));  
  }
}
