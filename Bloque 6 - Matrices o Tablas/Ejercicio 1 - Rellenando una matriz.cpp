/*51. Hacer un programa para rellenar una matriz pidiendo al usuario 
el número de filas y columnas, Posteriormente mostrar la matriz en pantalla.*/

#include <arduino.h>

  int numeros[15][15],filas,columnas;

void setup()
{
  Serial.begin(9600);


    Serial.println("Digite el numero de filas: " );
       while(!Serial.available()){}
       filas=Serial.parseInt();
       Serial.println(String(filas));
    Serial.println("Digite el numero de Columnas: " );
       while(!Serial.available()){}
       columnas=Serial.parseInt();
       Serial.println(String(columnas));

  //Rellenando la matriz  
  for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
      Serial.println("Digite un numero ["+String(i)+"]["+String(j)+"]: ");
      while(!Serial.available()){}
      numeros[i][j]=Serial.parseInt();
      Serial.println(numeros[i][j]); 
    }
  } 

   Serial.println("\nMostrando matriz\n\n");
    for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
  Serial.println(String(numeros[i][j]));
    }
  Serial.println("\n");
  }
 
}
void loop(){

}
