/*30. Escriba un programa que tome cada 4 horas la temperatura exterior, 
leyéndola durante un período de 24 horas. Es decir, debe leer 6 temperaturas. 
Calcule la temperatura media del día, la temperatura más alta y la más baja.*/

#include <arduino.h>

float temp,temp_media,temp_medi,temp_alta=0,temp_baja=999,
      cont1=0;

void setup()
{
  Serial.begin(9600);
}

void temperatura(){
     int i;

    for(i=0;i<24;i+=4){ //Aumentando temperatura de 4 en 4
    Serial.println("Digite la temperatura a las " +String(i));
      while(!Serial.available()){}
      temp=Serial.parseInt();
      Serial.println(temp);
      Serial.println("");

      cont1= cont1+temp;

      if(temp>temp_alta){
        temp_alta=temp;
      }
      if(temp>temp_baja){
        temp_baja=temp;
      }
    }
    temp_media=cont1/6;  //entre 6 porque son 6 temperaturas al dia

    Serial.println("La temperatura media del dia es: "+String(temp_media));
    Serial.println("La temperatura mas alta es: "+String(temp_alta));
    Serial.println("La temperatura mas baja es "+String(temp_baja));
}
void loop(){
  temperatura();
}