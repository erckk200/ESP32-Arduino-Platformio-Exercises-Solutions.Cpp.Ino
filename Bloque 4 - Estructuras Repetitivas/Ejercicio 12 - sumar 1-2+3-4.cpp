/*38. Hacer un programa que calcule el resultado de la siguiente expresion:
1-2+3-4+5-6...n*/


#include <arduino.h>

int n,suma=0,par=0,impar=0,negativo=0;

void setup()
{
  Serial.begin(9600);


    Serial.println("Digite el numero de elementos: ");
      while(!Serial.available()){}
      n=Serial.parseInt();
      Serial.println(n);
      Serial.println("");  

      for(int i=1;i<=n;i++){
        if(i%2==0){     //Los numeros pares son negativos
          negativo=i*-1;//Los cambiamos de signo
          par +=negativo;
        }
        else{           //los impares son positivos
          impar +=i;          
        }
  
      }
      suma=par+impar;
    Serial.println("La suma es: "+ String(suma));
    Serial.println("");
}
void loop(){

}
