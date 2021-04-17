/*54. Hacer una matriz preguntando al usuario el numero de filas y columnas,llenarla de
números aleatorios, copiar el contenido a otra matriz y por último mostrarla en 
pantalla.*/

#include <arduino.h>
#include <time.h>

  int matriz[15][15],filas,columnas;
  int matriz2[15][15],dato=0;

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

        srand(time(NULL));

    for(int i=0;i<filas;i++){
      for(int j=0;j<columnas;j++){
      dato = 1+rand()%(100); //numeros aleatorios de 1 a 100
      matriz[i][j] = dato;
    }
  }

  //Copiando el contenido a una nueva matriz
  for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
      matriz2[i][j] = matriz[i][j];
    }
  }

  //Mostrando en pantalla la nueva matriz
  for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
      Serial.print(matriz2[i][j]);
      }
    Serial.println("\n");
  }
}
void loop(){
}

