/*Ejercicio 120: Construya una clase llamada Rectangulo que tenga los siguientes
atributos: largo y ancho, y los siguientes metodos: perimetro() y area()*/

#include <arduino.h>

void setup() {

}
void loop(){

}

class Rectangulo{
  private: //Atributos
    float largo,ancho;
  public: //Metodos
    Rectangulo(float,float); //Constructor
    void perimetro();
    void area();
};

Rectangulo::Rectangulo(float _largo,float _ancho){
  largo = _largo;
  ancho = _ancho;
}

void Rectangulo::perimetro(){
  float _perimetro;
  
  _perimetro = (2*largo) + (2*ancho);
  
Serial.println("El perimetro es: "+String(_perimetro));
}

void Rectangulo::area(){
  float _area;
  
  _area = largo * ancho;
  
Serial.println("El area es: "+String(_area)); 
}

int main(){
  
  Serial.begin(9600);
  Rectangulo r1(11,7);
  
  r1.perimetro();
  r1.area();
  
  system("pause");
  return 0;
}

