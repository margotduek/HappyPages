/*
Main


Por investigar:
    - Como validar que un cin es del tipo de varable que quieres
    - Como imprimir listas dentro de una clase
    - Poner simbolos en un string


*/

#include "Persona.h"
#include <iostream>
#include <string>

using namespace std;


LinkedList<Persona> * personas = new LinkedList<Persona>();

void navega(int n);
bool valida(string a);

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
            
            cout << "Año nacimiento:" ;
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
                cout << endl;
                
                cout << "Bienvend@   " << persona.getNombre() << endl;
            }
        }
        if(persona.getNumCliente() != n){
            cout << "Primero dese de alta como cliente" << endl;
            whilo = 666;
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
                string sid;
                cin >> sid;
                int id;
                if (valida(sid)){
                    cout << "Recuerda poner solamente números" << endl;
                }else{
                    id = stoi(sid);    
                }
                
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
                
            }
            break;
            
            case 2:{
                persona.imprimeLista();
            }
            break;
            
            case 3:{
                 cout << "Ingrese el mes que desea consultar" << endl;
                 string consultarMes;
                 cin >> consultarMes;
                 for(int i  = 0; i < persona.getSizeList(); ++i){
                     if(persona.getLista()->at(i)->getInfo().getMes() == consultarMes){
                         cout << persona.getLista()->at(i)->getInfo() << endl;
                     } else {
                         cout << "Aun no has ingresado nungun estado de cuenta de ese mes" << endl;
                     }
                 }
            }
            break;
            
            case 4:{
                cout << "Ingrese el año que desea consultar" << endl;
                string consultarAnio;
                cin >> consultarAnio;
                for(int i  = 0; i < persona.getSizeList(); ++i){
                    if(persona.getLista()->at(i)->getInfo().getAnio() == consultarAnio){
                        cout << persona.getLista()->at(i)->getInfo() << endl;
                    } else {
                        cout << "Aun no has ingresado nungun estado de cuenta de ese año" << endl;
                    }
                }
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

bool valida(string a){
    bool booleana = true;
    for(int i = 0; i < a.length(); ++i){
        if(a[i] == 0){
            booleana = true;        
        }else if( a[i] == 1 ){
            booleana = true;  
        }else if( a[i] == 2 ){
            booleana = true;  
        }else if( a[i] == 3 ){
            booleana = true;  
        }else if( a[i] == 4 ){
            booleana = true;  
        }else if( a[i] == 5 ){
            booleana = true;  
        }else if( a[i] == 6 ){
            booleana = true;  
        }else if( a[i] == 7 ){
            booleana = true;  
        }else if( a[i] == 8 ){
            booleana = true;  
        }else if( a[i] == 9 ){
            booleana = true;  
        }else{
            return false;  
        }
    }
    return booleana;
    
}