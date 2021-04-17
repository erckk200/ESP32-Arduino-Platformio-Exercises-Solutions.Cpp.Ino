/*3. Realice un programa que lea de la entrada estándar los siguientes datos de
una persona:

	Edad: dato de tipo entero.
	Sexo: dato de tipo carácter.
	Altura en metros: dato de tipo real.
	
Tras leer los datos, el programa debe mostrarlos en la salida estándar.*/



#include <Arduino.h> 


	int edad;
	char sexo;
	float altura;
  
void setup(){
    Serial.begin(9600);
}

void datos() {

	
	Serial.println("\nDigite su edad: "); 

        Serial.println("");
	while(!Serial.available()){}
  	edad = Serial.Serial.parseInt();
  	Serial.println(String(edad));

        Serial.println("");
	Serial.println("Digite su sexo: ");
	while(!Serial.available()){}
	sexo = Serial.read();

        Serial.println("");
	Serial.println("Digite su altura en metros: ");
	while(!Serial.available()){}
  	altura = Serial.parseFloat();
  	Serial.println(String(altura));
	
        Serial.println("");
	Serial.println("\nEdad: "+String(edad));
	Serial.println("Sexo: "+String(sexo));
	Serial.println("Altura en metros: "+String(altura));


}

void loop() {
  datos();
}
