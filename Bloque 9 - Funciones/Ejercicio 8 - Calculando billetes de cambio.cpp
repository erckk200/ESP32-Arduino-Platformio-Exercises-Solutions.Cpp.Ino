/*Ejercicio 83: Escriba una función nombrada cambio() que tenga un parámetro en número
entero y seis parámetros de referencia en número entero nombrados cien, cincuenta,
veinte, diez, cinco y uno, respectivamente. La función tiene que considerar el
valor entero transmitido como una cantidad en dólares y convertir el valor en el número
menor de billetes equivalentes. */

#include <arduino.h>

  void cambio(int,int&,int&,int&,int&,int&,int&);
  int valor,cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;
  
void setup()
{
  Serial.begin(9600);

    Serial.println("Digite un valor: ");
    while(!Serial.available()){}
    valor=Serial.parseFloat();
    Serial.println(String(valor));
    //Llamos a la funcion
    
  cambio(valor,cien,cincuenta,veinte,diez,cinco,uno);

    Serial.println("Cantidad de billetes a entregar como cambio:");
    Serial.println("Cien: " + String(cien));
    Serial.println("Cincuenta: " + String(cincuenta));
    Serial.println("Veinte: " + String(veinte));
    Serial.println("Diez: " + String(diez));
    Serial.println("Cinco: " + String(cinco));
    Serial.println("Uno: " + String(uno));


}

void cambio(int valor,int& cien,int& cincuenta,int& veinte,int& diez,int& cinco,int& uno){
  cien = valor/100;
  valor %= 100;
  cincuenta = valor/50;
  valor %= 50;
  veinte = valor/20;
  valor %= 20;
  diez = valor/10;
  valor %= 10;
  cinco = valor/5;
  uno = valor%5;
}

 void loop()
 {
 }
