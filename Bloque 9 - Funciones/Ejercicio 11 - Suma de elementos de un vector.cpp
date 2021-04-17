/*Ejercicio 86: Realice una función que tome como parámetros un vector de números enteros
y devuelva la suma de sus elementos.*/

#include <arduino.h>


  void pedirDatos();
  int calcularSuma(int veci[],int);
  int veci[100],tam;

  
void setup()
{

  Serial.begin(9600);

  pedirDatos();
  
    Serial.println("\n La suma es: "+ String(calcularSuma(veci,tam)));
    
}


void pedirDatos(){

    Serial.println("Digite el numero de elementos del arreglo: ");
    while(!Serial.available()){}
    tam=Serial.parseFloat();
    Serial.println(String(tam));
  
  for(int i=0;i<tam;i++){

    Serial.println((i+1)+ "   Digite un numero: ");
    while(!Serial.available()){}
    veci[i]=Serial.parseInt();
    Serial.println(String(veci[i]));
  }
}

int calcularSuma(int veci[],int tam){
  int suma=0;
  
  for(int i=0;i<tam;i++){
    suma += veci[i];
  }
  return suma;
}

 void loop()
 {
 }