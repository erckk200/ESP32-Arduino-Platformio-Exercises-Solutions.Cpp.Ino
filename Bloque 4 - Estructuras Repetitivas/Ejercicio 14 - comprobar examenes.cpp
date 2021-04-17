/*40. En una clase de 5 alumnos se han realizado tres exámenes y se requiere 
determinar el número de: 
  a) Alumnos que aprobaron todos los exámenes.
  b) Alumnos que aprobaron al menos un examen.
  c) Alumnos que aprobaron únicamente el último examen.
  
Realice un programa que permita la lectura de los datos y el cálculo de las 
estadísticas.
*/
#include <arduino.h>

int ex1,ex2,ex3;
int todos=0,algunos=0,ultimo=0;


void setup()
{
  Serial.begin(9600);

for(int i=1;i<=5;i++){

    Serial.println("Digita la nota del primer exmamen: ");
      while(!Serial.available()){}
      ex1=Serial.parseInt();
      Serial.println(ex1);
    Serial.println("Digita la nota del segundo exmamen: ");
      while(!Serial.available()){}
      ex2=Serial.parseInt();
      Serial.println(ex2);
    Serial.println("Digita la nota del tercer exmamen: ");
      while(!Serial.available()){}
      ex3=Serial.parseInt();
      Serial.println(ex3);

      if((ex1>10.5)&&(ex2>10.5)&&(ex3>10.5)){  //Opcion A
        todos++;
      }
      if((ex1>10.5)||(ex2>10.5)||(ex3>10.5)){  //Opcion B
        algunos++;
      }
      if((ex1<10.5)&&(ex2<10.5)&&(ex3>10.5)){  //Opcion C
        ultimo++;
      }  
}
    Serial.println("Aprobaron todos los examenes: "+String(todos));
    Serial.println("Aprobaron almenos un examen: "+String(algunos));
    Serial.println("Aprobaron unicamente el ultimo examen: "+String(ultimo));

      }

void loop(){

}