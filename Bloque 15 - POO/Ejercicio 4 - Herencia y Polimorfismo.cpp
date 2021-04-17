/*Ejercicio 123: Crear un programa en C++ que tenga la siguiente jerarquía de
clases: Animal(Clase Padre) -> Humano(Clase Hija) -> Perro(Clase Hija), 
y hacer polimorfismo con el metodo comer(). */

#include<arduino.h>


class Animal{
  private: 
    int edad;
  public:
    Animal(int);
    virtual void comer();
};

class Humano : public Animal{
  private: 
    String nombre;
  public:
    Humano(int,String);
    void comer();
};

class Perro : public Animal{
  private: 
    String nombre,raza;
  public: 
    Perro(int,String,String);
    void comer();
};

//Constructor de la clase Animal
Animal::Animal(int _edad){
  edad = _edad;
}

void Animal::comer(){
Serial.println("Yo como ");
}

//COnstructor de la clase Humano
Humano::Humano(int _edad,String _nombre) : Animal(_edad){
  nombre = _nombre;
}

void Humano::comer(){
  Animal::comer();
Serial.println("en la mesa, sentado en una silla");
}

//Constructor de la clase Perro
Perro::Perro(int _edad,String _nombre,String _raza) : Animal(_edad){
  nombre = _nombre;
  raza = _raza;
}

void Perro::comer(){
  Animal::comer();
Serial.println("en un plato, en el suelo");
}

int main(){
  Animal *animales[2];
  
  animales[0] = new Humano(21,"Luis");
  animales[1] = new Perro(4,"Boby","Pastor Aleman");
  
  animales[0]->comer();
  animales[1]->comer(); 
  
  system("pause");
  return 0;
}
