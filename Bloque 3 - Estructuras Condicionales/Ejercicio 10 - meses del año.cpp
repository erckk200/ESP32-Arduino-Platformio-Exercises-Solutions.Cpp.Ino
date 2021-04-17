/*24. Mostrar los meses del año, pidiéndole al usuario un número entre (1-12), 
y mostrar el mes al que corresponde. */

#include <arduino.h>

int mes;
void setup()
{
  Serial.begin(9600);
}

void meses(){
  
  Serial.println("");
  Serial.print("Digite un numero entre [1-12]: "); 
  while(!Serial.available()){}
  mes=Serial.parseInt();
  Serial.println(mes);
  Serial.println("");

  switch(mes){
    case 1: Serial.print("Enero");break;
    case 2: Serial.print("Febrero"); break;
    case 3: Serial.print("Marzo");break;
    case 4: Serial.print("Abril");break;
    case 5: Serial.print("Mayo");break;
    case 6: Serial.print("Junio");break;
    case 7: Serial.print("Julio");break;
    case 8: Serial.print("Agosto");break;
    case 9: Serial.print("Septimebre");break;
    case 10: Serial.print("Octubre");break;
    case 11: Serial.print("Noviembre");break;
    case 12: Serial.print("Diciembre");break;
    default: Serial.print("No existe mes para ese numero");break;
  }
}
void loop(){
  meses();
}
