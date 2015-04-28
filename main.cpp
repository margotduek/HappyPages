/*
Main

*/

#include "Persona.h"
#include <iostream>
#include <string>

using namespace std;


LinkedList<Persona> * personas = new LinkedList<Persona>();

void navega(int n);

int main(){
    
    
    cout << "¡Bienvenido a Happy Pages!" << endl;
    int op = 0;
    int hile = 0;
    while(hile != 666){
        cout << "1) Iniciar sesión \n2) Registarme como nuevo usuario\n3) Salir" << endl;
        cin >> op;
        if (op == 1){
            cout << "Nombre: " ;
            string nombre;
            cin >> nombre;
            cout << "Apellido: " ;
            string apellido;
            cin >> apellido;
            cout << "Número de cliente: " ;
            int num;
            cin >> num;

            navega(num);

        }else if(op == 2){
            cout << "Bienvenido, es hora de darte de alta como cliente de Happy Pages" << endl;
            cout << "Por favor proporcione los siguientes datos" << endl;
            
            cout << "Nombre: ";
            string nombre;
            cin >> nombre;
            
            cout << "Apellido: ";
            string apellido;
            cin >> apellido;
            
            cout << "Número de cliente: " ;
            int num;
            cin >> num;
            
            cout << "Edad: ";
            int edad;
            cin >> edad;
            
            cout << "Fecha de nacimiento:" ;
            int fech;
            cin >> fech;
            
            Persona persona(nombre, apellido, edad, fech, num);
            personas->insertBack(persona);
            
            navega(num);
        }else if(op == 3){
            cout << "Gracias por usar Happy Pages" << endl;
            hile = 666;
        }else{
             cout << "Favor de elegir una opción existente" << endl;
        }
    }
    return 0;
}



void navega(int n){
    int whilo = 0;
    Persona persona;
    while (whilo != 666){
        for (int i = 0; i < personas->size(); ++i){
            if(personas->at(i)->getInfo().getNumCliente() == n){
                persona = personas->at(i)->getInfo();
                cout << persona.getNombre() << endl;
            }
        }
        
        cout << "1) Agregar estado de cuenta\n2) Consultar estados de cuenta globales" << endl;
        cout << "3) Consultar estados de cuenta por mes\n4) Consultar estados de cuenta por año" << endl;
        cout << "5) Salir de esta sesión" << endl;
        int op;
        cin >> op;
        switch(op){
            case 1:{
                cout << "Favor de proporcionar los siguientes datos: " << endl;
                cout << "ID del estado de cuenta: ";
                int id;
                cin >> id;
                
                cout << "Mes: ";
                string mes;
                cin >> mes;
                
                cout << "Año: " ;
                int anio;
                cin >> anio;
                
                cout << "Gastos totales: ";
                double gastos;
                cin >> gastos;
                
                cout << "Ingresos totales: ";
                double ingresos;
                cin >> ingresos;
                
                cout << "Notas: ";
                string notas;
                cin >> notas;
                
                cout << "Banco: ";
                string banco;
                cin >> banco;
                
                EdoDeCuenta edo(id, mes, anio, gastos, ingresos, notas, banco);
                persona.agregarEdoDeCuenta(edo);
                
                cout << "Estado de cuenta agregado" << endl;
                 break;
            }
           
            
            case 2:{
                
            }
            break;
            
            case 3:{
                
            }
            break;
            
            case 4:{
                
            }
            break;
            
            case 5:{
                //cout << "Cerraste sesióon" << endl;
                whilo = 666;
            }
            break;
            
            default:{
                cout << "Favor de elegir una opción existente" << endl;
            }
            break;
        }
        
    }
}