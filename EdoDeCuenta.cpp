#include "EdoDeCuenta.h"






std::ostream & operator << (std::ostream & os,  const EdoDeCuenta & edoDeCuenta){
    os << edoDeCuenta.idEdoDeCuenta << std::endl << edoDeCuenta.mes << " / " << edoDeCuenta.anio << std::endl << "Gastos totales:  $" << edoDeCuenta.gastosTotales << std::endl << "Ingresos totales:  $" << edoDeCuenta.ingresosTotales << std::endl << edoDeCuenta.notas << std::endl;
    
    return os;
}