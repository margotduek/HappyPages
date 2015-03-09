/*
Clase Estados de cuenta


*/


#include <iostream>
#include <string>
#include <ostream>


class EdoDeCuenta{
    private:
        int idEdoDeCuenta;
        std::srting mes;
        int anio;
        double gastosTotales;
        double ingresosTotales;
        std::srting notas;
        
    public:
        EdoDeCuenta() : EdoDeCuenta(0, "", 0, 0, 0, ""){}  
        EdoDeCuenta(int _idEdoDeCuenta, std::string _mes, int _anio, double _gastosTotales, double _ingresosTotales, std::string _notas) 
        : idEdoDeCuenta(_idEdoDeCuenta), mes(_mes), anio(_anio), gastosTotales(_gastosTotales), ingresosTotales(_ingresosTotales), notas(_notas)
        {}
        
        
        bool operator >(EdoDeCuenta & edoDeCuenta);
        bool operator <(EdoDeCuenta & edoDeCuenta);
        bool operator  == (EdoDeCuenta & edoDeCuenta);
        
        friend std::ostream & operator <<(std::ostream & os, conts EdoDeCuenta & edoDeCuenta);
        

    
};