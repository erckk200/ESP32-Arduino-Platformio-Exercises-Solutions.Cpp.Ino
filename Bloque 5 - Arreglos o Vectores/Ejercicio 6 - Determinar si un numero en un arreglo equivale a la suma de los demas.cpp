//*48. Escribe un programa que defina un vector de números y calcule si existe 
algún número en el vector cuyo valor equivale a la suma del resto de números 
del vector.*/

#include <arduino.h>

int num[5]={1,2,3,4,10};
int suma=0,mayor=0;

void setup()
{
  Serial.begin(9600);

    for(int i=0;i<5;i++){
      suma+=num[i];

/*Determinamos cual es el numero mayor, ya que el unico numero que puede
ser la suma de los demas es el numero mayor */
      if(num[i]>mayor){
        mayor=num[i];
      }
    }
//comparamos si el numero mayor es igual a suma menos el numero mayor    
    if(mayor==suma-mayor){
       Serial.println("El numero "+ String(mayor)+ " es la suma de los demas");
    }
    else{
      Serial.println("No existe ningun numero que sea la suma de los demas");  
    }
}

void loop(){

}