/*Ejercicio 78: Escriba una funci�n nombrada funpot() que eleve un n�mero entero que 
se le transmita a una potencia en n�mero entero positivo y despliegue el resultado.
El n�mero entero positivo deber� ser el segundo valor transmitido a la funci�n.*/

#include <arduino.h>

void pedirDatos();
void funpot(int x,int y);
int numero,exponente;

void setup()
{
  Serial.begin(9600);
}



void pedirDatos(){  
    Serial.println("");
    Serial.println("Digite el numero a elevar: ");
    while(!Serial.available()){}
    numero=Serial.parseFloat();
    Serial.println(String(numero));

    Serial.println("Digite el exponente de elevacion: ");
    while(!Serial.available()){}
    exponente=Serial.parseFloat();
    Serial.println(String(exponente));
 }


void funpot(int x,int y){
  long resultado=1;
  
  for(int i=1;i<=y;i++){
    resultado *= x;
  }
    Serial.println("El resultado de la elevacion es: "+String(resultado));
    Serial.println("");
}
  

void loop(){

  pedirDatos();
  funpot(numero,exponente);
}