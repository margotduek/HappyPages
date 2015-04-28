/*
Main

*/

#include "Persona.h"
#include <iostream>
#include <string>

using namespace std;

void navega();
int main(){
    
    LinkedList<Persona> * personas = new LinkedList<Persona>();
    
    cout << "¡Bienvenido a Happy Pages!" << endl;
    int op = 0;
    while(op != 4){
        cout << "1) Iniciar sesión \n2) Registarme como nuevo usuario" << endl;
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
            
            /* Falta! Buscar cliente e imprimirlo*/
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
        }else if(op == 3){
            cout << "Gracias por usar Happy Pages" << endl;
        }else{
             cout << "Favor de elegir una opción existente" << endl;
        }
    }
    return 0;
}

void navega(){
    int whilo = 0;
    while (whilo != 666){
        cout << "1) Agregar estado de cuenta\n2) Consultar estados de cuenta globales" << endl;
        cout << "3) Consultar estados de cuenta por mes\n4) Consultar estados de cuenta por año" << endl;
        cout << "5) Salir de esta sesión" << endl;
        int op;
        cin >> op;
        switch(op){
            case 1:{
                
            }
            break;
            
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
                cout << "Cerraste sesióon" << endl;
            }
            break;
            
            default:{
                cout << "Favor de elegir una opción existente" << endl;
            }
            break;
        }
        
    }
}