/*Ejercicio 121: Construya una clase Tiempo que contenga los siguientes atributos
enteros: horas, minutos y segundos. Haga que la clase contenga 2 constructores,
el primero debe tener 3 parámetros Tiempo(int,int,int) y el segundo sólo 
tendrá un campo que serán los segundos y desensamble el número entero largo 
en horas, minutos y segundos.*/

#include <arduino.h>

class Tiempo{
  private: 
    int horas,minutos,segundos;
  public: 
    Tiempo(int,int,int); //Constructor1
    Tiempo(int); //Constructor2
    void mostrarTiempo();
};

//Constructor1
Tiempo::Tiempo(int _horas,int _minutos,int _segundos){
  horas = _horas;
  minutos = _minutos;
  segundos = _segundos;
}

//Constructor2
Tiempo::Tiempo(int totalSeg){
  horas = totalSeg/3600; //Extraer las horas
  totalSeg %= 3600;
  minutos = totalSeg/60; //Extraer los minutos
  segundos = totalSeg%60; //Extraer los segundos
}

void Tiempo::mostrarTiempo(){
Serial.println("La Hora exacta es: "+ String(horas) + ":" + String(minutos) + ":" + String(segundos));
}

int main(){
    Serial.begin(9600);
  Tiempo hora1(14,40,10); //horas:minutos:segundos
  Tiempo hora2(55400); 
  
  hora1.mostrarTiempo();
  hora2.mostrarTiempo();
  

}


