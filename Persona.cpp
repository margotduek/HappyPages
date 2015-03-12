#include "Persona.h"


bool Persona::operator >(Persona & persona)
{
    if (apellidos > persona.apellidos) {
        
        return true;
    }
    else if (apellidos == persona.apellidos) {
    
        if (nombre < persona.nombre) {
            return true;
        }
        else {
            return false;
        }
    }
    
    return false;
}

bool Persona::operator <(Persona & persona)
{
    return edad < persona.edad;
}

std::ostream & operator << (std::ostream & os,  const Persona & persona)
{
    os << persona.apellidos << ", " << persona.nombre << "(" << persona.edad << ")" << persona.fNacimiento << std::endl;
    
    return os;
}

bool Persona::operator  == (Persona & persona){
    if(persona.nombre == nombre && persona.apellidos == apellidos){
        return true;
    }else {
        return false;
    }
}


void Persona::agregarEdoDeCuenta(EdoDeCuenta nuevoEstado){
    estadosDeCuent.insertBack(nuevoEstado);
}