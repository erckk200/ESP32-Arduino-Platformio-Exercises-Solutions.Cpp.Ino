/*26. Hacer un menú que considere las siguientes opciones:
	Caso 1: Cubo de un numero
	Caso 2: Numero par o impar
/*26. Hacer un menú que considere las siguientes opciones:
  Caso 1: Cubo de un numero
  Caso 2: Numero par o impar
  Case 3: salir.
*/

#include <arduino.h>
#include <math.h>

int opc,resul,n2;
float n1;


void setup()
{
  Serial.begin(9600);
}

void menu(){
  
  Serial.println("");
  Serial.println("Buenos dias");
  Serial.println("Bienvenido a su menu"); 
  Serial.println("Escoja una opcion entre [1-3]");
  Serial.println("1. Cubo de un numero");   
  Serial.println("2. Numero par o impar");
  Serial.println("3. Salir");
  while(!Serial.available()){}
  opc=Serial.parseInt();
  Serial.println(opc);
  Serial.println("");

  switch(opc){
    case 1: 
    Serial.println("Ingresa un numero ");
    while(!Serial.available()){}
    n1=Serial.parseInt();
    Serial.println(n1);

    resul=pow(n1,3);
    Serial.println("El numero al cubo es: "+String(resul));
    break;
    
    case 2: 
    Serial.println("Ingresa un numero ");
    while(!Serial.available()){}
    n2=Serial.parseInt();
    Serial.println(n2);

    if(n2==0){
    Serial.println("El numero es cero");     
    }
    else if(n2%2==0){
      Serial.println("El numero es par");
    }  
    else{
      Serial.println("El numero es impar");          
    }
    break;
    
    case 3: 
    Serial.println("Vuelva pronto");
    break;
  }
}
void loop(){
  menu();
}