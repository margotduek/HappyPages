/*
Clase Persona


*/


#include <iostream>
#include <string>
#include <ostream>
#include "EdoDeCuenta.h"
#include "LinkedList.h"

class Persona {
private:
    std::string nombre;
    std::string apellidos;
    int numCliente;
    int edad;
    int fNacimiento;
    LinkedList<EdoDeCuenta> * estadosDeCuent = new LinkedList<EdoDeCuenta>;
    
public:
    Persona() : Persona("", "", 0, 0, 0) {}
    Persona(std::string _nombre, std::string _apellidos , int _edad, int _fNacimiento, int _numCliente) : nombre(_nombre), apellidos(_apellidos), edad(_edad), fNacimiento(_fNacimiento), numCliente(_numCliente) {}
    
    int getNumCliente();
    std::string getNombre();
    
    bool operator >(Persona & persona);
    bool operator <(Persona & persona);
    bool operator  == (Persona & persona);
    void agregarEdoDeCuenta(EdoDeCuenta nuevoEstado);
    
    friend std::ostream & operator << (std::ostream & os, const Persona & persona);
    
};