/*Ejercicio 85: Escriba una funci�n nombrada calc_a�os() que tenga un par�metro entero 
que represente el n�mero total de d�as desde la fecha 1/1/2000 y par�metros de referencia
nombrados a�o, mes y d�a. La funci�n es calcular el a�o, mes y d�a actual para el
n�mero dado de d�as que se le transmitan. Usando las referencias, la funci�n deber�
alterar en forma directa los argumentos respectivos en la funci�n que llama. Para este
problema suponga que cada a�o tiene 365 d�as y cada mes tiene 30 d�as.*/

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
