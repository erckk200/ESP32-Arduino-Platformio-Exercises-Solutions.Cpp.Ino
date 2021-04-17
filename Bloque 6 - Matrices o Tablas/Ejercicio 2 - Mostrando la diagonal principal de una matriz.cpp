/*52. Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que 
muestre la diagonal principal de la matriz.*/

#include <arduino.h>

  int numeros[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

void setup()
{
  Serial.begin(9600);


    Serial.println("Mostrando Matriz completa " );
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
    Serial.println(numeros[i][j]);
    }
    Serial.println("\n");
  }
  
  Serial.println("\n\nMostrando diagonal principal de la matriz\n");
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(i==j){
        Serial.println(numeros[i][j]);
     }
    }
   }
}
void loop(){

}
