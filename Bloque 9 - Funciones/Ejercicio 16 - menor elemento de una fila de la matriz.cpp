/*Ejercicio 91: Realice una función que dada una matriz y un número de fila de la 
matriz devuelva el menor de los elementos almacenados en dicha fila.*/

#include<arduino.h>

void pedirDatos();
int comprobarMenorElemento(int m[][8],int,int);
int m[8][8],nfilas,ncol;



void setup() {

serial.begin(9600);
  pedirDatos();
  
Serial.println("\nEl menor elemento de la fila seleccionada es: " +String((comprobarMenorElemento(m,nfilas,ncol))));

}


void pedirDatos(){
Serial.println("Digite el numero de filas: ");
    while(!Serial.available()){}
    nfilas=Serial.parseFloat();
    Serial.println(String(nfilas));
Serial.println("Digite el numero de columnas: ");
    while(!Serial.available()){}
    ncol=Serial.parseFloat();
    Serial.println(String(ncol));
  
  for(int i=0;i<nfilas;i++){
    for(int j=0;j<ncol;j++){
    Serial.println("Digite m ["+String(i)+"]["+String(j)+"]: ");
      while(!Serial.available()){}
      m[i][j]=Serial.parseInt();
      Serial.println(m[i][j]); 
    }
  }
}


int comprobarMenorElemento(int m[][100],int nfilas,int ncol){
  int fila,menor=99999;
  
Serial.println("\nDigite el numero de fila a comprobar: ");
    while(!Serial.available()){}
    fila=Serial.parseFloat();
    Serial.println(String(fila));
  
  for(int i=0;i<nfilas;i++){
    for(int j=0;j<ncol;j++){
      if(i==fila){
        if(m[i][j] < menor){
          menor = m[i][j];
        }
      }
    }
  }
  
  return menor;
}



void loop() {
  
}