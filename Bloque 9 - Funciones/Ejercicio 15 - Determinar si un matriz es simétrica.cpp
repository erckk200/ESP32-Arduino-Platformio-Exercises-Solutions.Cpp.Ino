/*Ejercicio 90: Desarrollar una función que determine si una matriz es simétrica o no.

Una matriz es simetrica: A = A^t

- La matriz debe ser cuadrada. _--
- Aij = Aji 

|2  5  9|      |2  5  9|
|5  8 -1|     ->    |5  8 -1|
|9 -1 10|     |9 -1 10|

*/

#include <arduino.h>


void pedirDatos();
void comprobarSimetria(int m[][8],int,int);
int m[8][8],nfilas,ncol;

  
void setup()
{

  Serial.begin(9600);
  
  pedirDatos();
  comprobarSimetria(m,nfilas,ncol);
}


void pedirDatos(){

    Serial.println("Digite el numero de filas: ");
    while(!Serial.available()){}
    nfilas=Serial.parseFloat();
    Serial.println(String(nfilas));
    
    Serial.println("Digite el numero de columnas ");
    while(!Serial.available()){}
    ncol=Serial.parseFloat();
    Serial.println(String(ncol));

  //Pedimos todos los elementos de la matriz
  for(int i=0;i<nfilas;i++){
    for(int j=0;j<ncol;j++){
    Serial.println("Digite m ["+String(i)+"]["+String(j)+"]: ");
      while(!Serial.available()){}
      m[i][j]=Serial.parseInt();
      Serial.println(m[i][j]); 
    }
  }
}


void comprobarSimetria(int m[][100],int nfilas,int ncol){
  int cont = 0;
  
  //Si es cuadrada
  if(nfilas==ncol){
    //y ademas si Aij = Aji
    for(int i=0;i<nfilas;i++){
      for(int j=0;j<ncol;j++){
        if(m[i][j]==m[j][i]){
          cont++;//El conteo debe ser igual al numero de elementos de la matriz
        }
      }
    }
  }
  
  if(cont == nfilas*ncol){
    Serial.println("\nLa matriz es Simetrica");
  }
  else{
    Serial.println("\nLa matriz NO es simetrica");
  }
}

 void loop()
 {
 }