/*55. Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta. 
La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz 
original.

|1 2 3|       |1 4 7|
|4 5 6|  -->  |2 5 8|
|7 8 9|       |3 6 9|

*/

#include <arduino.h>

  int numeros[3][3];

void setup()
{
  Serial.begin(9600);

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
     Serial.println("Digite un numero ["+String(i)+"]["+String(j)+"]: ");
      while(!Serial.available()){}
      numeros[i][j]=Serial.parseInt();
      Serial.println(numeros[i][j]); 
    }
  } 
    Serial.println("\nMatriz Normal\n");;
      for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
  Serial.print(String(numeros[i][j])+" ");
    }
    Serial.println("\n");
      }
 
  Serial.println("\nMatriz Transpuesta\n");
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
  Serial.print(String(numeros[j][i])+" ");
    }
    Serial.println("\n");
    }     
}
void loop(){
}
