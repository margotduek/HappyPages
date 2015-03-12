/*
Clase Estados de cuenta


*/
#include <iostream>
#include <string>
#include <ostream>
#include "Banco.h"


class EdoDeCuenta{
    private:
        int idEdoDeCuenta;
        std::string mes;
        int anio;
        double gastosTotales;
        double ingresosTotales;
        std::string notas;
        Banco banco;
        
    public:
        EdoDeCuenta() {}  
        EdoDeCuenta(int _idEdoDeCuenta, std::string _mes, int _anio, double _gastosTotales, double _ingresosTotales, std::string _notas, Banco _banco ) 
        : idEdoDeCuenta(_idEdoDeCuenta), mes(_mes), anio(_anio), gastosTotales(_gastosTotales), ingresosTotales(_ingresosTotales), notas(_notas), banco(_banco)
        {}
        
        int getIdEdoDeCuenta();
        //void setIdEdoDeCuenta(int);
        std::string getMes();
        int getAnio();
        double getGastosTotales();
        double getIngresosTotales();
        std::string getNotas();
        void setNotas(std::string);
        Banco getBanco();
        
        
        
        bool operator  == (EdoDeCuenta & edoDeCuenta);
        
        friend std::ostream & operator <<(std::ostream & os, const EdoDeCuenta & edoDeCuenta);
        
        
    
};