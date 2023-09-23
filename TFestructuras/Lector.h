#pragma once
#include "Lista.h"
#include "Pila.h"
#include "Cola.h"
#include "iostream"
#include "string"
#include "fstream"
#include "Usuario.h"
#include "Aplicacion.h"
using namespace std;

template<class T>
class Lector {
private:
    Lector(){}
    static Lector* instancia;

public:
	
	~Lector(){}
    static Lector& getInstancia() {
        if (instancia == nullptr) {
            instancia = new Lector();
        }
        return *instancia;
    }
    Lector(const Lector&) = delete;
    Lector& operator = (const Lector&) = delete ;
    
    //PARA EL ADMIN XD SOY EL ADMIN
    void crearUsuario(Lista<T>* list) {
        ofstream file;
        file.open("baseDatosUsuario.txt", ios::out|ios::app);
        string name, password, level_of_access;
        if (!file.is_open())
        {
            cerr << "Error: No se pudo abrir el archivo" << endl;
            return;
        }
        cout << "Creación de usuario:";
        cout << "\nNombre de usuario: "; cin >> name;
        cout << "\nContrasena del usuario: "; cin >> password;
        cout << "\nNivel de acceso del usuario: "; cin >> level_of_access;

        file << endl << name << " " << password << " " << level_of_access;
        file.close();
    }

    //Crear aplicación de Desarrollador - SUS
    void crearAplicacion(Lista<T>* list) {
        ofstream file;
        file.open("baseDatosAplicacion.txt", ios::out | ios::app);
        string appname, developer, category, subcategory, weight;
        if (!file.is_open())
        {
            cerr << "Error: No se pudo abrir el archivo" << endl;
            return;
        }
        cout << "Creación de aplicación:";
        cout << "\nNombre de aplicación: "; cin >> appname;
        cout << "\nDesarrollador a cargo: "; cin >> developer;
        cout << "\nCategoria de la aplicación: "; cin >> category;
        cout << "\nSubcategoria de la aplicación: "; cin >> subcategory;
        cout << "\nPeso de la aplicación: "; cin >> weight;

        file << endl << appname << " " << developer << " " << category << " " << subcategory << " " << weight;
        file.close();
    }

    //Crear solicitud de aplicación de Desarrollador -----
    void crearSolicitud(Lista<T>* list) {
        ofstream file;
        file.open("baseSolicitudes.txt", ios::out | ios::app);
        string appname, developer, category, subcategory, weight;
        if (!file.is_open())
        {
            cerr << "Error: No se pudo abrir el archivo" << endl;
            return;
        }
        cout << "Creación de solicitud de aplicación:";
        cout << "\nNombre de aplicación: "; cin >> appname;
        cout << "\nDesarrollador a cargo: "; cin >> developer;
        cout << "\nCategoria de la aplicación: "; cin >> category;
        cout << "\nSubcategoria de la aplicación: "; cin >> subcategory;
        cout << "\nPeso de la aplicación: "; cin >> weight;

        file << endl << appname << " " << developer << " " << category << " " << subcategory << " " << weight << " Pendiente";
        file.close();
    }

    void modificarSolicitud() {

    }

    void cargarUsuarios(Lista<T>* list) {
    ifstream file("baseDatosUsuario.txt");
    if(!file.is_open()) {
        cerr << "Error: No se pudo abrir el archivo." << endl;
        return;
    }
    Usuario* user;
    string line, username, password, level_of_access;
    while(getline(file, line)) {
        size_t separator1 = line.find(' ');
        size_t separator2 = line.find(' ', separator1 + 1);
        if (separator1 != string::npos && separator2 != string::npos) {
            username = line.substr(0, separator1);
            password = line.substr(separator1 + 1, separator2 - separator1 - 1);
            level_of_access = line.substr(separator2 + 1);
        }
        user = new Usuario(username, password, level_of_access);
        list->agregarInicio(user);
    }
    file.close();
    }

};

template<class T>
Lector<T>* Lector<T>::instancia = nullptr;