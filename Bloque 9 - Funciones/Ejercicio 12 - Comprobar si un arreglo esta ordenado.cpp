/*Ejercicio 87:  Realice una función que tome como parámetros un vector y su tamaño y 
diga si el vector está ordenado crecientemente. Sugerencia: compruebe que para todas 
las posiciones del vector, salvo para la 0, el elemento del vector es mayor o igual que
el elemento que le precede en el vector.*/

#include <arduino.h>


   void pedirDatos();
   void comprobarOrdenamiento(int veci[],int);
   int veci[100],tam;

  
void setup()
{

  Serial.begin(9600);

  pedirDatos();
  comprobarOrdenamiento(veci,tam);  
}


void pedirDatos(){

    Serial.println("Digite el numero de elementos del vector: ");
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

void comprobarOrdenamiento(int veci[],int tam){
  char band = 'F';
  
  //1 2 3 4 5
  int i=0;
  while((band=='F')&&(i<tam-1)){
    if(veci[i]>veci[i+1]){
      band = 'V';
    }
    i++;
  }
  
  if(band == 'F'){
    Serial.println("\nEl arreglo esta ordenado en forma creciente");
  }
  else{
    Serial.println("\nEl arreglo NO esta ordenado");
  }
}


 void loop()
 {
 }

