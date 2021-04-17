/*57. Desarrollar un programa que determine si una matriz es simétrica o no. Una matriz
es simétrica si es cuadrada y si es igual a su matriz transpuesta.


|8 1 3|        |8 1 3|
|1 7 4|  -->   |1 7 4| 
|3 4 9|        |3 4 9|

*/

#include <arduino.h>

  int numeros[15][15],filas,columnas;
  char band='F';

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

  //Rellenando matriz
    for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
      Serial.println("Digite un numero ["+String(i)+"]["+String(j)+"]: ");
      while(!Serial.available()){}
      numeros[i][j]=Serial.parseInt();
      Serial.println(numeros[i][j]); 
    }
}
  //Comprobemos si es simetrica
  if(filas==columnas){
    for(int i=0;i<filas;i++){
      for(int j=0;j<columnas;j++){
        if(numeros[i][j] == numeros[j][i]){
          band='V';
        }
      }
    }
  }
   if(band=='V'){
  Serial.println("Es una matriz simetrica");
  }
  else{
  Serial.println("No es una matriz simetrica");
  }
}
void loop(){
}
