/*25. Hacer un programa que simule un cajero automático con un saldo inicial 
de 1000 Dólares.*/

#include <arduino.h>

int saldo_ini=1000,opc;
float extra,saldo=0,retiro;

void setup()
{
  Serial.begin(9600);
}

void cajero(){
  
  Serial.println("");
  Serial.println("Buenos dias");
  Serial.println("Bienvenido a su cajero automatico"); 
  Serial.println("1. Ingresar dinero a la cuenta");   
  Serial.println("2. Retirar dinero de la cuenta");
  Serial.println("3. Salir");
  while(!Serial.available()){}
  opc=Serial.parseInt();
  Serial.println(opc);
  Serial.println("");

  switch(opc){
    case 1: 
    Serial.println("Cuanto dinero desea ingresar en cuenta: ");
    while(!Serial.available()){}
    extra=Serial.parseInt();
    Serial.println(extra);

    saldo=saldo_ini+extra;
    Serial.println("Dinero en cuenta: "+String(saldo));
    break;
    
    case 2: 
    Serial.println("Cuanto dinero desea retirar: ");
    while(!Serial.available()){}
    retiro=Serial.parseInt();
    Serial.println(retiro);

    if(retiro>saldo_ini){
    Serial.println("No cuenta con esa cantidad");     
    }
    else{
      saldo=saldo_ini-retiro;
    Serial.println("Dinero en la cuenta: "+ String(saldo));
    }
    break;
    
    case 3: 
    Serial.println("Vuelva pronto");
    break;
  }
}
void loop(){
  cajero();
}
