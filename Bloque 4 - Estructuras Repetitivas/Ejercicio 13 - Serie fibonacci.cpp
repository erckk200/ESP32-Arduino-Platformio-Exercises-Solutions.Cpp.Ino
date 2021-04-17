//39. Hacer un que realize la serie fibonacci -> 1 1 2 3 5 8 13...n  

#include <arduino.h>

int n,x=0,y=1,z=1;

void setup()
{
  Serial.begin(9600);

  
do{
    Serial.println("Digite la cantidad de digitos en la serie: ");
      while(!Serial.available()){}
      n=Serial.parseInt();
      Serial.println(n);
      Serial.println(""); 
}
while(n<=0);
    Serial.println("1 ");
      for(int i=1;i<n;i++){
        z=x+y;
   Serial.println(String(z)+" ");
   x=y;
   y=z;
        }
      }

void loop(){

}