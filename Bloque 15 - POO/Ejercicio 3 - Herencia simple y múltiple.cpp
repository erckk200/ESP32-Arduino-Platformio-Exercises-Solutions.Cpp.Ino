/*Ejercicio 122: Realice un programa en C++, de tal manera que se construya una
solución para la jerarquía(herencia) de clases mostrada en la siguiente figura
*/


#include <arduino.h>


class Persona{
  private: //Atributos
    String nombre;
    int edad;
  public: //Metodos
    Persona(string,int); //Constructor Persona
    void mostrarPersona();
};

class Empleado : public Persona{
  private: //Atributos
    float sueldo;
  public: //Metodos
    Empleado(string,int,float); //Constructor Empleado
    void mostrarEmpleado();
};

class Estudiante : public Persona{
  private: //Atributos
    float notaFinal;
  public: //Metodos
    Estudiante(string,int,float);
    void mostrarEstudiante();
};

class Universitario : public Estudiante{
  private: //Atributos
    String carrera;
  public: 
    Universitario(string,int,float,string); //Constructor Universitario
    void mostrarUniversitario();
};

//Constructor de la clase Persona(Clase Padre)
Persona::Persona(string _nombre,int _edad){
  nombre = _nombre;
  edad = _edad;
}

void Persona::mostrarPersona(){
Serial.println("Nombre: "+ String(nombre);
Serial.println("Edad: "+ String(edad);
}

//Constructor de la clase Empleado (Clase Hija)
Empleado::Empleado(string _nombre,int _edad,float _sueldo) : Persona(_nombre,_edad){
  sueldo = _sueldo;
}

void Empleado::mostrarEmpleado(){
  mostrarPersona();
Serial.println("Sueldo: "+ String(sueldo);
}

//Constructor de la clase Estudiante
Estudiante::Estudiante(string _nombre,int _edad,float _notaFinal) : Persona(_nombre,_edad){
  notaFinal = _notaFinal;
}

void Estudiante::mostrarEstudiante(){
  mostrarPersona();
Serial.println("Nota Final: "+ String(notaFinal);
}

//Constructor de la clase Universitario(Clase Hija)
Universitario::Universitario(string _nombre,int _edad,float _notaFinal,string _carrera) : Estudiante(_nombre,_edad,_notaFinal){
  carrera = _carrera;
}

void Universitario::mostrarUniversitario(){
  mostrarEstudiante();
Serial.println("Carrera: "+ String(carrera);
}

int main(){
  Empleado empleado1("Juan",35,1300);
Serial.println("-Empleado-");
  empleado1.mostrarEmpleado();
Serial.println("\n");
  
  Estudiante estudiante1("Maria",21,16.7);
Serial.println("-Estudiante-");
  estudiante1.mostrarEstudiante();
Serial.println("\n");
  
  Universitario universitario1("Alejandro",20,15.6,"Informatica");
Serial.println("-Universitario-");
  universitario1.mostrarUniversitario();
Serial.println("\n");
  
  system("pause");
  return 0;
}

