/*
Main


Por investigar:
  :)



*/

#include "Persona.h"
#include <iostream>
#include <string>
#include <stdexcept>


using namespace std;


LinkedList<Persona> * personas = new LinkedList<Persona>();

void navega(int n);
bool valida(string a);
bool validad(string a);
void admin();
char getch();

int main(){


    cout << "¡Bienvenido a Happy Pages!" << endl;
    int op = 0;

    int hile = 0;
    while(hile != 666){
        cout << "1) Iniciar sesión \n2) Registarme como nuevo usuario\n3) Salir" << endl;
        cout << "951) Soy admin" << endl;
        string sop;
        cin >> sop;

        while (!valida(sop)){
            cout << "Recuerda poner solamente números" << endl;
            cout << "1) Iniciar sesión \n2) Registarme como nuevo usuario\n3) Salir";
            cout << endl;
            cout << "951) Soy admin" << endl;
            cin >> sop;
        }
        try {
            op = stoi(sop);
        }
        catch (const out_of_range & exception){
            cout << "No te pases de listo :) " << endl;
        }


        if (op == 1){
            cout << "Nombre: " ;
            string nombre;
            //cin >> nombre;
            cin.ignore();
            getline(cin,nombre);
            cout << "Apellido: " ;
            string apellido;
            //cin >> apellido;
            cin.ignore();
            getline(cin,apellido);
            cout << "Número de cliente: " ;
            int num;
            string snum;
            cin >> snum;
            while (!valida(snum)){
                cout << "Recuerda poner solamente números" << endl;
                cout << "Número de cliente: ";
                cin >> snum;
            }
            try {
                num = stoi(snum);
            }
            catch (const out_of_range & exception){
                cout << "No te pases de listo :) " << endl;
            }


            navega(num);

        }else if(op == 2){
            cout << "Bienvenido, es hora de darte de alta como cliente de Happy Pages" << endl;
            cout << "Por favor proporcione los siguientes datos" << endl;

            cout << "Nombre: ";
            string nombre;
            //cin >> apellido;
            cin.ignore();
            getline(cin,nombre);

            cout << "Apellido: " ;
            string apellido;
            //cin >> apellido;
            //cin.ignore();
            getline(cin,apellido);

            cout << "Número de cliente: " ;
            int num;
            string snum;
            cin >> snum;
            while (!valida(snum)){
                cout << "Recuerda poner solamente números" << endl;
                cout << "Número de cliente: ";
                cin >> snum;
            }
            try {
                num = stoi(snum);
            }
            catch (const out_of_range & exception){
                cout << "No te pases de listo :) " << endl;
            }



            cout << "Edad: ";
            int edad;
            string sedad;
            cin >> sedad;
            while (!valida(sedad)){
                cout << "Recuerda poner solamente números" << endl;
                cout << "Edad: ";
                cin >> sedad;
            }
            try {
                edad = stoi(sedad);
            }
            catch (const out_of_range & exception){
                cout << "No te pases de listo :) " << endl;
            }


            cout << "Año nacimiento:" ;
            int fech;
            string sfech;
            cin >> sfech;
            while (!valida(sfech)){
                cout << "Recuerda poner solamente números" << endl;
                cout << "Año nacimiento: ";
                cin >> sfech;
            }
            try {
                fech = stoi(sfech);
            }
            catch (const out_of_range & exception){
                cout << "No te pases de listo :) " << endl;
            }



            Persona persona(nombre, apellido, edad, fech, num);
            personas->insertBack(persona);

            navega(num);
        }else if(op == 3){
            cout << "Gracias por usar Happy Pages" << endl;
            hile = 666;
        }else if(op == 951){
            admin();
        }else{
             cout << "Favor de elegir una opción existente" << endl;
        }
    }
    return 0;
}



void navega(int n){
    int whilo = 0;
    Persona persona;
    bool registrado = false;
    while (whilo != 666){
        for (int i = 0; i < personas->size(); ++i){
            if(personas->at(i)->getInfo().getNumCliente() == n){
                persona = personas->at(i)->getInfo();
                cout << endl;

                cout << "Bienvend@   " << persona.getNombre() << " " << persona.getApellido() << endl;
                registrado = true;
            }
        }
        if(!registrado){
            cout << "Primero dese de alta como cliente" << endl;
            whilo = 666;
            return;
        }



        cout << "1) Agregar estado de cuenta\n2) Consultar estados de cuenta globales" << endl;
        cout << "3) Consultar estados de cuenta por mes\n4) Consultar estados de cuenta por año" << endl;
        cout << "5) Conocer mis gastos totales del mes\n6) Conocer mis ingresos totales del mes" << endl;
        cout << "7) Salir de esta sesión" << endl;
        int op;
        string sop;
        cin >> sop;

        while (!valida(sop)){
            cout << "Recuerda poner solamente números" << endl;
            cout << "1) Agregar estado de cuenta\n2) Consultar estados de cuenta globales" << endl;
            cout << "3) Consultar estados de cuenta por mes\n4) Consultar estados de cuenta por año" << endl;
            cout << "5) Conocer mis gastos totales\n6) Conocer mis ingresos totales" << endl;
            cout << "7) Salir de esta sesión" << endl;
            cin >> sop;
        }
        try {
            op = stoi(sop);
        }
        catch (const out_of_range & exception){
            cout << "No te pases de listo :) " << endl;
        }



        switch(op){
            case 1:{
                cout << "Favor de proporcionar los siguientes datos: " << endl;

                cout << "ID del estado de cuenta: ";
                string sid;
                cin >> sid;
                int id;
                while (!valida(sid)){
                    cout << "Recuerda poner solamente números" << endl;
                    cout << "ID del estado de cuenta: ";
                    cin >> sid;
                }
                try {
                    id = stoi(sid);
                }
                catch (const out_of_range & exception){
                    cout << "No te pases de listo :) " << endl;
                }



                cout << "Mes: ";
                string mes;
                cin >> mes;

                cout << "Año: " ;
                string sanio;
                int anio;
                cin >> sanio;
                while (!valida(sanio)){
                    cout << "Recuerda poner solamente números" << endl;
                    cout << "Año: ";
                    cin >> sanio;
                }
                try {
                    anio = stoi(sanio);
                }
                catch (const out_of_range & exception){
                    cout << "No te pases de listo :) " << endl;
                }


                cout << "Gastos totales: ";
                double gastos;
                string sgastos;
                cin >> sgastos;
                while (!validad(sgastos)){
                    cout << "Recuerda poner solamente números" << endl;
                    cout << "Gastos totales: ";
                    cin >> sgastos;
                }
                try {
                    gastos = stod(sgastos);
                }
                catch (const out_of_range & exception){
                    cout << "No te pases de listo :) " << endl;
                }



                cout << "Ingresos totales: ";
                double ingresos;
                string singresos;
                cin >> singresos;
                while (!validad(singresos)){
                    cout << "Recuerda poner solamente números" << endl;
                    cout << "Ingresos totales: ";
                    cin >> singresos;
                }
                try {
                    ingresos = stod(singresos);
                }
                catch (const out_of_range & exception){
                    cout << "No te pases de listo :) " << endl;
                }




                cout << "Notas: ";
                string notas;
                //cin >> notas;
                cin.ignore();
                getline(cin,notas);

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
                 bool esta = true;
                 for(int i  = 0; i < persona.getSizeList(); ++i){
                     if(persona.getLista()->at(i)->getInfo().getMes() == consultarMes){
                         cout << persona.getLista()->at(i)->getInfo() << endl;
                     } else {
                         esta = false;
                     }
                 }
                 if(!esta){
                    cout << "Aun no has ingresado nungun estado de cuenta de ese mes" << endl;
                 }

            }
            break;

            case 4:{
                cout << "Ingrese el año que desea consultar" << endl;
                int consultarAnio;
                cin >> consultarAnio;
                bool esta = true;
                for(int i  = 0; i < persona.getSizeList(); ++i){
                    if(persona.getLista()->at(i)->getInfo().getAnio() == consultarAnio){
                        cout << persona.getLista()->at(i)->getInfo() << endl;
                    } else {
                        esta = false;

                    }
                }
                 if(!esta){
                    cout << "Aun no has ingresado nungun estado de cuenta de ese año" << endl;
                 }
            }
            break;

            case 5:{
                double gastosGlobales;
                for(int i = 0; i < persona.getSizeList(); ++i){
                    gastosGlobales += persona.getLista()->at(i)->getInfo().getGastosTotales();
                }
                cout << "Usted gastó: $" << gastosGlobales << endl;
            }
            break;

            case 6:{
                double ingresosGlogales;
                for(int i = 0; i < persona.getSizeList(); ++i){
                    ingresosGlogales += persona.getLista()->at(i)->getInfo().getIngresosTotales();
                }
                cout << "Usted ganó: $" << ingresosGlogales << endl;
            }
            break;

            case 7:{
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



void admin(){

    string pass ="";
    char ch;
    cout << "Enter pass\n";
    ch = getchar();
    while(ch != 't'){//character 13 is enter
       pass.push_back(ch);
       cout << '*';
       ch = getchar();
    }


    cout << "\nBienvenido Administrador!\n";
    int whila = 0;
    int op = 0;
    string sop;
    while(whila != 333){

        cout << "1) Ver lista de clientes activos\n2) Borrar cliente\n3) Regresar a modo usuario" << endl;
        cin >> sop;
        //cin.ignore();
        //getline(cin,sop);
        while (!valida(sop)){
            cout << "ponga opcion valida" << endl;
            cout << "1) Ver lista de clientes activos\n2) Borrar cliente\n3) Regresar a modo usuario" << endl;
            cin >> sop;
            //cin.ignore();
            //getline(cin,sop);
        }
        try {
            op = stoi(sop);     
        }
        catch (const out_of_range & exception){
            cout << "No te pases de listo :) " << endl;
        }
        if(op == 1){
            cout << *personas << endl;
        }else if(op == 2){
            //Borrar nodo
            cout << "Nombre del cliente a borrar: " ;
            string nombre;
            cin.ignore();
            getline(cin,nombre);
            cout << "Apellido del cliente a borrar: ";
            string apellido;
            getline(cin,apellido);

            cout << "Número de cliente: " ;
            int num;
            string snum;
            cin >> snum;
            while (!valida(snum)){
                cout << "Recuerda poner solamente números" << endl;
                cout << "Número de cliente: ";
                //getline(cin,snum);
                cin >> snum;
            }
            try {
                num = stoi(snum);
            }
            catch (const out_of_range & exception){
                cout << "No te pases de listo :) " << endl;
            }


            bool registrado = false;
            Node<Persona> * nodo;
            for (int i = 0; i < personas->size(); ++i){
                if(personas->at(i)->getInfo().getNumCliente() == num){
                    nodo = personas->at(i);
                    cout << endl;

                    cout << "Usted está borrando a   " << nodo->getInfo().getNombre() << " " << nodo->getInfo().getApellido() << endl;
                    registrado = true;
                    personas->remove(nodo);
                }
            }
            if(!registrado){
                cout << "Ingrese datos correctos" << endl;
                //cout << "Usted saldrá de la sesion de administrador " << endl;
                //return;
            }


        }else if(op == 3){
            whila = 333;
        }else{
            cout << "Ponga una opcion valida " << endl;
        }
    }

}



bool valida(string a){
    bool booleana = true;
    for(int i = 0; i < a.length(); ++i){
        if(a[i] == '0'){
            booleana = true;
        }else if( a[i] == '1' ){
            booleana = true;
        }else if( a[i] == '2' ){
            booleana = true;
        }else if( a[i] == '3' ){
            booleana = true;
        }else if( a[i] == '4' ){
            booleana = true;
        }else if( a[i] == '5' ){
            booleana = true;
        }else if( a[i] == '6' ){
            booleana = true;
        }else if( a[i] == '7' ){
            booleana = true;
        }else if( a[i] == '8' ){
            booleana = true;
        }else if( a[i] == '9' ){
            booleana = true;
        }else{
            return false;
        }
    }
    return booleana;

}


bool validad(string a){
    bool booleana = true;
    for(int i = 0; i < a.length(); ++i){
        if(a[i] == '0'){
            booleana = true;
        }else if( a[i] == '1' ){
            booleana = true;
        }else if( a[i] == '2' ){
            booleana = true;
        }else if( a[i] == '3' ){
            booleana = true;
        }else if( a[i] == '4' ){
            booleana = true;
        }else if( a[i] == '5' ){
            booleana = true;
        }else if( a[i] == '6' ){
            booleana = true;
        }else if( a[i] == '7' ){
            booleana = true;
        }else if( a[i] == '8' ){
            booleana = true;
        }else if( a[i] == '9' ){
            booleana = true;
        }else if(a[i] == '.'){
            booleana = true;
        }
        else{
            return false;
        }
    }
    return booleana;

}
