/*Ejercicio 88: Realiza una función que tome como parámetros un vector de números y su
tamaño y cambie el signo de los elementos del vector.*/

#include <arduino.h>


//Prototipos de Funciones
void pedirDatos();
void cambiarSigno(int veci[],int);
void mostrarVector(int veci[],int);
int tam,veci[100];

  
void setup()
{

  Serial.begin(9600);
  
  //Llamada a las funciones - en orden
  pedirDatos();
  cambiarSigno(veci,tam);  
  mostrarVector(veci,tam);  
}


void pedirDatos(){

    Serial.println("Digite el tamanio del vector: : ");
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

void cambiarSigno(int veci[],int tam){
  for(int i=0;i<tam;i++){
    veci[i] *= -1;
  }
}

void mostrarVector(int veci[],int tam){
    Serial.println("\nMostrando vector con cambio de signo: ");
  for(int i=0;i<tam;i++){
    Serial.println((veci[i])+" ");
  }
}

 void loop()
 {
 }