#include "usuarios.h"
#include<fstream>
#include<cstdlib>
#include<conio.h>
#include<iostream>
#include "bitacora.h"
#define USER "daguilae"
#define PASS "123456"

using namespace std;


usuarios::usuarios()
{

}

usuarios::~usuarios()
{

}
bool usuarios::loginUsuarios(){
    string usuario, contra;
    int contador=0;
    bool ingresa=false;
    do{
        system("cls");
        cout<<"---------------------------"<<endl;
        cout<<" AUTENTICACION DE USUARIOS "<<endl;
        cout<<"---------------------------"<<endl;
        cout<<"Codigo Usuario: ";
        getline(cin, usuario);
        cout<<"\nContrasena: ";
        char caracter;
        caracter = getch();
        contra="";
        while (caracter != 13)
        {
            if (caracter != 8)
            {
                contra.push_back(caracter);
                cout<<"*";
            } else
            {
                if (contra.length() > 0)
                {
                    cout<<"\b \b";
                    contra = contra.substr(0,contra.length()-1);
                }
            }
            caracter = getch();
        }

        if (buscar(usuario, contra)){
            ingresa=true;

        } else {
            cout<<"\nEl usuario y/o contrasena son incorrectos"<<endl;
            cin.get();
            contador++;

        }
    } while (ingresa==false && contador<3);
    if (ingresa==false){
        cout<<"\nLo siento, no puede ingresar al sistema, sus contrasenas son invalidas o agoto intentos"<<endl;
        bitacora auditoria;
        auditoria.insertar("usuario", "100", "LOGF");
        cin.get();
    } else {
        cout<<"\n=== Bienvenido al Sistema ==="<<endl;
        bitacora auditoria;
        auditoria.insertar("usuario", "100", "LOGS");
        name=usuario;
        cin.get();
    }
    return ingresa;
}
void usuarios::menuUsuarios(){
int choice;

    do {
	system("cls");
	cout<<"\t\t\t-------------------------------------------------------"<<endl;
	cout<<"\t\t\t |   SISTEMA GESTION DE SEGURIDAD - Catalogos Usuarios |"<<endl;
	cout<<"\t\t\t-------------------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso Usuarios"<<endl;
	cout<<"\t\t\t 2. Consulta Usuarios"<<endl;
	cout<<"\t\t\t 3. Modificacion Usuarios"<<endl;
	cout<<"\t\t\t 4. Eliminacion Usuarios"<<endl;
	cout<<"\t\t\t 5. Retornar menu anterior"<<endl;
    cout<<"\t\t\t-------------------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5]"<<endl;
	cout<<"\t\t\t-------------------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	cin.get();

    }while(choice!= 5);
}
bool usuarios::buscar(string user, string passw )
{
	system("cls");
	fstream file;
	int found=0;
	file.open("Usuarios.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos de la Persona buscada------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		file >> id >> name >> pass;
		while(!file.eof())
		{
			if(user==id)
			{
			    if (passw == pass)
                {
                    found++;
                }
			}
			file >> id >> name >> pass;
		}
		if(found==0)
		{
			return false;
		}
		else
            return true;
		file.close();
	}
}
string usuarios::getNombre()
{
    return name;
}
string usuarios::setNombre(string nombre)
{
    name=nombre;
}
