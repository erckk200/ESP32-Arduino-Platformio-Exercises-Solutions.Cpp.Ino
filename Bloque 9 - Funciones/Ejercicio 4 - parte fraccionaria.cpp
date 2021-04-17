/*Ejercicio 78: Escriba una funci�n nombrada funpot() que eleve un n�mero entero que 
se le transmita a una potencia en n�mero entero positivo y despliegue el resultado.
El n�mero entero positivo deber� ser el segundo valor transmitido a la funci�n.*/

#include <arduino.h>


void pedirDatos();
float devolucionFraccionaria(float n);
float numero;


void loop(){
  pedirDatos();
  
   Serial.println("La parte fraccionaria del numero es: "+String(devolucionFraccionaria(numero)));
  
}
void setup()
{
  Serial.begin(9600);
}



void pedirDatos(){  
  
    Serial.println("");
    Serial.println("Digite un numero: ");
    while(!Serial.available()){}
    numero=Serial.parseFloat();
    Serial.println(String(numero));
 }


float devolucionFraccionaria(float n){
  //por ejemplo si el numero es 45.567 en entero solo se guardaria 45
  int entero = n;
  //y por ultimo restamos el valor flotante menos el entero para tener la parte fraccionaria
  float resultado = n - entero;
  return resultado;
  }
   // Serial.println("El resultado de la elevacion es: "+String(resultado));
   // Serial.println("");

