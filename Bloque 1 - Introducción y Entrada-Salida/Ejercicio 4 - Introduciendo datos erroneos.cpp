/*4. Ejecute el programa del ejercicio anterior con entradas erróneas y 
observe los resultados. Por ejemplo, introduzca un dato de tipo carácter 
cuando se espera un dato de tipo entero.*/


#include<Arduino.h>

	int edad;
	char sexo;
	float altura;

void setup()
{

	Serial.begin(9600);
	
	
	Serial.println("\nDigite su edad: "); 

	while(!Serial.available()){}
  	edad = Serial.Serial.parseInt();
  	Serial.println(String(edad));


	Serial.println("Digite su sexo: ");
	while(!Serial.available()){}
	sexo = Serial.read();
	Serial.println(String(sexo));



	Serial.println("Digite su altura en metros: ");

	while(!Serial.available()){}
  	altura = Serial.parseFloat();
  	Serial.println(String(altura));
	
	Serial.println("\nEdad: "+String(edad));
	Serial.println("Sexo: "+String(sexo));
	Serial.println("Altura en metros: "+String(altura));

}

void loop()
{

}