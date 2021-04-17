/*53. Hacer una matriz de tipo entera de 2 * 2, llenarla de números y luego copiar todo
su contenido hacia otra matriz.*/

#include <arduino.h>

  int matriz1[2][2] = {{1,2},{3,4}};
  int matriz2[2][2];

void setup()
{
  Serial.begin(9600);

   Serial.println("Mostrando Matriz completa\n"); 
  //Copiando el contenido de la matriz1 hacia matriz2
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      matriz2[i][j]=matriz1[i][j];
    }
  }

  //Mostrando matriz2
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      Serial.println(matriz2[i][j]);
      }
   Serial.println("\n");
  }
}
void loop(){
}