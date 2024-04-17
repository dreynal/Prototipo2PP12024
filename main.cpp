#include <iostream>
#include<fstream>

#include "usuarios.h"
#include "vendedores.h"
#include "bitacora.h"
#include "aplicaciones.h"
using namespace std;
void creditosModulo();
void catalogos();
void reportes();
void menuGeneral();
usuarios usuarioRegistrado;
int main()
{
    bool accesoAdmin;

    accesoAdmin=usuarioAdmin.loginAdmin();
    if (accesoAdmin){
        menuGeneral();
    }
    system("cls");
    cout<<"** Hasta la proxima **";
    return 0;
}
void menuGeneral(){
    system("cls");
    int choice;
	do
    {
	system("cls");
	cout<<"\t\t\t\t\tAdmin: "<< usuarioRegistrado.getNombre() <<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t |   SISTEMA GESTION |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1. Catalogos"<<endl;
	cout<<"\t\t\t 2. Informes"<<endl;
	cout<<"\t\t\t 3. Salir del Sistema"<<endl;
		cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    		catalogos();
		break;
	case 2:
		Informes();
		break;
	case 3:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 3);
}
void catalogos(){
    int choice;
    do {
	system("cls");
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t |   SISTEMA GESTION DE VENTAS - Catalogos  |"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Altas"<<endl;
	cout<<"\t\t\t 2. Bajas"<<endl;
	cout<<"\t\t\t 3. Modificaciones"<<endl;
	cout<<"\t\t\t 4. Consulta"<<endl;
	cout<<"\t\t\t 5. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5]"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
		break;
	case 2:
		break;
	case 3:
		modify();
		break;
	case 4:
		search();
		break;
	case 5:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 5);
}
void reportes(){
    int choice;
    //int x;
    do {
	system("cls");
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t |   SISTEMA GESTION DE VENTAS - Reportes   |"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Altas"<<endl;
	cout<<"\t\t\t 2. Bajas"<<endl;
	cout<<"\t\t\t 3. Modificaciones"<<endl;
	cout<<"\t\t\t 4. Consultas"<<endl;
	cout<<"\t\t\t 5. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5]"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
		break;
	case 2:
		break;
	case 3:
		modify();
		break;
	case 4:
		search();
		break;
	case 5:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 5);
}
void creditosModulo(){
string line;
    ifstream myFile("modulo.txt");
    if(myFile.is_open())
    {
        while( getline(myFile, line))
        {
            cout << line << endl;
        }
        myFile.close();
        cout<<"Presione cualquier tecla para continuar";
        cin.get();
    }
    else
    {
        cout << "Error FATAL: el archivo de modulo no pudo ser cargado" << endl;
        cin.get();
    }
}
