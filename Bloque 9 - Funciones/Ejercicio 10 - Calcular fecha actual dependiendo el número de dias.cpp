/*Ejercicio 85: Escriba una función nombrada calc_años() que tenga un parámetro entero 
que represente el número total de días desde la fecha 1/1/2000 y parámetros de referencia
nombrados año, mes y día. La función es calcular el año, mes y día actual para el
número dado de días que se le transmitan. Usando las referencias, la función deberá
alterar en forma directa los argumentos respectivos en la función que llama. Para este
problema suponga que cada año tiene 365 días y cada mes tiene 30 días.*/

#include <arduino.h>

void calc_anios(int,int&,int&,int&);
int totaldias,anio,mes,dia;

  
void setup()
{
  Serial.begin(9600);

    Serial.println("Digite el numero total de dias transcurridos: ");
    while(!Serial.available()){}
    totaldias=Serial.parseFloat();
    Serial.println(String(totaldias));
       
     calc_anios(totaldias,anio,mes,dia);

    Serial.println("Fecha Actual: " + String( dia+1 )+ " / " + String( mes+1 )+ " / " + String( anio+2000 ));
}


void calc_anios(int totaldias,int& anio,int& mes,int& dia){
  anio = totaldias/365;
  totaldias %= 365;
  mes = totaldias/30;
  dia = totaldias%30;
}
