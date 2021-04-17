/*Ejercicio 92: Suma de números Complejos

z1 = 5-3i   ,  z2 = -4+2i

z1 + z2 = (5-3i)+(-4+2i)
      = 5-3i-4+2i
    = 1-i

*/
#include <arduino.h>

struct complejo{
  float real,imaginaria;
}z1,z2;

//Prototipo de Función
void pedirDatos();
complejo suma(complejo,complejo);
void muestra(complejo);

void setup() {
  Serial.begin(9600);

}


void pedirDatos(){
Serial.println("Digite el primer numero complejo: ");
Serial.println("Parte Real: ");
    while(!Serial.available()){}
    z1.real=Serial.parseFloat();
    Serial.println(String(z1.real));

Serial.println("Parte Imaginaria: "); 
    while(!Serial.available()){}
    z1.imaginaria=Serial.parseFloat();
    Serial.println(String(z1.imaginaria));

  
Serial.println("\nDigite el segundo numero complejo: ");
Serial.println("Parte Real: ");
    while(!Serial.available()){}
    z2.real=Serial.parseFloat();
    Serial.println(String(z2.real));
Serial.println("Parte Imaginaria: ");
    while(!Serial.available()){}
    z2.imaginaria=Serial.parseFloat();
    Serial.println(String(z2.imaginaria));

}
complejo suma(complejo z1,complejo z2){
  z1.real += z2.real;
  z1.imaginaria += z2.imaginaria;
  
  return z1;
}


void muestra(complejo x){
    Serial.println("\nLa suma es: "+ String(x.real) +" , " + String(x.imaginaria));
}




void loop() {
   pedirDatos();
  
  complejo x = suma(z1,z2);
  
  muestra(x); 


}
