/*Ejercicio 89: Realiza una función que tome como parámetros un vector de enteros y su
tamaño e imprima un vector con los elementos impares del vector recibido.*/

#include <arduino.h>



void pedirDatos();
void impares(int veci[],int);
int tam,veci[100];

  
void setup()
{

  Serial.begin(9600);
  
  pedirDatos();
  impares(veci,tam);
}


void pedirDatos(){

    Serial.println("Digite el tamanio del vector: : ");
    while(!Serial.available()){}
    tam=Serial.parseFloat();
    Serial.println(String(tam));

    for(int i=0;i<tam;i++){
    Serial.println((i+1)+ "     Digite un numero: ");
    while(!Serial.available()){}
    veci[i]=Serial.parseInt();
    Serial.println(String(veci[i]));
  }
}

void impares(int veci[],int tam){
  int vecImpares[100];
  int j=0;
  for(int i=0;i<tam;i++){
    if(veci[i]%2!=0){
      vecImpares[j] = veci[i];
      j++;
    }
  }
  
    Serial.println("\nImprimiendo los elementos impares del vector: ");
  for(int i=0;i<j;i++){
    Serial.println(String((vecImpares[i])+"  "));
  }
}


 void loop()
 {
 }
