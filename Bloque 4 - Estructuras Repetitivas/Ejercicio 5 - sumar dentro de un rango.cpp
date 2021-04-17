/*31. Escriba un programa que lea valores enteros hasta que se introduzca un 
valor en el rango [20-30] o se introduzca el valor 0. El programa debe 
entregar la suma de los valores mayores a 0 introducidos.*/

#include <arduino.h>

int n1,suma=0;

void setup()
{
  Serial.begin(9600);
}

void valores(){

    do{
    Serial.println("Digita un numero ");
      while(!Serial.available()){}
      n1=Serial.parseInt();
      Serial.println(n1);
      Serial.println("");  

       if(n1>0){
        suma=suma+n1;
       }
}
    while(((n1<20)||(n1>30))&&(n1!=0));

    
    Serial.println("La suma de todos los numeros mayores a cero es: "+ String(suma));
}
void loop(){
  valores();
}