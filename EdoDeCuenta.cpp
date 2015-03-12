#include "EdoDeCuenta.h"

bool EdoDeCuenta::operator  == (EdoDeCuenta & edoDeCuenta){
    if(edoDeCuenta.idEdoDeCuenta == idEdoDeCuenta){
        return true;
    }else {
        return false;
    }
}



std::ostream & operator << (std::ostream & os,  const EdoDeCuenta & edoDeCuenta){
    os << edoDeCuenta.idEdoDeCuenta << std::endl << edoDeCuenta.mes << " / " << edoDeCuenta.anio << std::endl << "Gastos totales:  $" << edoDeCuenta.gastosTotales << std::endl << "Ingresos totales:  $" << edoDeCuenta.ingresosTotales << std::endl << edoDeCuenta.notas << std::endl;
    
    return os;
}

int EdoDeCuenta::getIdEdoDeCuenta(){
    return idEdoDeCuenta;
}

/*void EdoDeCuenta::setIdEdoDeCuenta(int id){
    this->idEdoDeCuenta = id;
}*/

std::string EdoDeCuenta::getMes(){
    return mes;
}
int EdoDeCuenta::getAnio(){
    return anio;
}
double EdoDeCuenta::getGastosTotales(){
    return gastosTotales;
}
double EdoDeCuenta::getIngresosTotales(){
    return ingresosTotales;
}
std::string EdoDeCuenta::getNotas(){
    return notas;
}
void EdoDeCuenta::setNotas(std::string notas){
    this->notas = notas;
}
Banco EdoDeCuenta::getBanco(){
    return banco;
}
