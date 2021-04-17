/*2. Escribir un programa que de la entrada estándar el precio de un producto y muestre
en la salida estándar el precio del producto al aplicarle el IVA.*/

#include <Arduino.h> 

  float precio,pre_final,IVA;
  
void setup(){
    Serial.begin(9600);
}

void impuesto() {

  Serial.println("");
  Serial.println("Ingrese precio del producto");
  while(!Serial.available()){}
  precio=Serial.parseInt();
  Serial.println(String(precio));
  
  
  IVA=precio*0.19;
  pre_final=precio+IVA;
  


  Serial.println("El precio del producto es de: " + String(pre_final));
  Serial.println("");

}

void loop() {
  impuesto();
}


