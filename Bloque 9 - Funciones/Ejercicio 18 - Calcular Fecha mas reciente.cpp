/*Ejercicio 93: Escriba una función en C++ llamada mayor() que devuelva la fecha más 
reciente de cualquier par de fechas que se le transmitan. Por ejemplo, si se transmiten 
las fechas 10/9/2005 y 11/3/2015 a mayor(), será devuelta la segunda fecha.*/

#include <arduino.h>

struct Fecha{
  int dia,mes,anio;
}f1,f2;

//Prototipos de Funciones
void pedirDatos();
Fecha mayor(Fecha,Fecha);
void mostrarFechaMayor(Fecha);

void setup() {
  Serial.begin(9600);

}




  void pedirDatos(){
Serial.println("Digite la Fecha1: ");
Serial.println("Dia: ");
    while(!Serial.available()){}
    f1.dia=Serial.parseFloat();
    Serial.println(String(f1.dia));
    
Serial.println("Mes: ");
    while(!Serial.available()){}
    f1.mes=Serial.parseFloat();
    Serial.println(String(f1.mes));
    
Serial.println("Anio: ");
    while(!Serial.available()){}
    f1.anio=Serial.parseFloat();
    Serial.println(String(f1.anio));



  
Serial.println("\n\nDigite la Fecha2: ");
Serial.println("Dia: ");
    while(!Serial.available()){}
    f2.dia=Serial.parseFloat();
    Serial.println(String(f2.dia));
    
Serial.println("Mes: ");
    while(!Serial.available()){}
    f2.mes=Serial.parseFloat();
    Serial.println(String(f2.mes));
    
Serial.println("Anio: ");
    while(!Serial.available()){}
    f2.anio=Serial.parseFloat();
    Serial.println(String(f2.anio));
}


Fecha mayor(Fecha f1,Fecha f2){
  Fecha mayorFecha;
  
  //Primero comprobamos los años
  if(f1.anio == f2.anio){
    //Ahora, comprobamos los meses
    if(f1.mes ==f2.mes){
      //Por ultimo comprobamos los dias
      if(f1.dia == f2.dia){
    Serial.println("\nAmbas fechas son iguales");
      }
      else if(f1.dia > f2.dia){
        mayorFecha = f1;
      }
      else{
        mayorFecha = f2;
      }
    }
    else if(f1.mes > f2.mes){
      mayorFecha = f1;
    }
    else{
      mayorFecha = f2;
    }
  }
  else if(f1.anio > f2.anio){
    mayorFecha = f1;
  }
  else{
    mayorFecha = f2;
  }
  
  
  return mayorFecha;
}


void mostrarFechaMayor(Fecha x){
    Serial.println("\nMostrando fecha mayor: "+ String(x.dia)+"/"+ String(x.mes)+"/"+ String(x.anio));
}


void loop() {
  
  pedirDatos();
  Fecha x = mayor(f1,f2);
  mostrarFechaMayor(x); 

}