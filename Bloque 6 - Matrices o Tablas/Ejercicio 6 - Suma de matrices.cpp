//56. Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.


#include <arduino.h>

  int matriz1[3][3] = {{2,0,1},{3,0,0},{5,1,1}};
  int matriz2[3][3] = {{1,0,1},{1,2,1},{1,1,0}};

void setup()
{
  Serial.begin(9600);

    //Mostrando las 2 matrices
	Serial.println("Matriz 1\n");
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){     
  Serial.print(String(matriz1[i][j])+" ");
    }
     Serial.println("\n")
      }

	Serial.println("Matriz 2\n");
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){    
  Serial.print(String(matriz2[i][j])+" ");
    }
	Serial.println("\n");
      }

  //Sumando matrices
  Serial.println("\nSuma de matrices\n");
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
  Serial.print(String( matriz1[i][j] )+String( matriz2[i][j] ));     
    
       }
       Serial.println("\n");
   }
}
void loop(){
}
