#pragma once
#include "Lista.h"
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

	void cargarAplicaciones(Lista<T>* list) {
    ifstream file("baseDatosAplicacion.txt");
    if(!file.is_open()) {
        cerr << "Error: No se pudo abrir el archivo." << endl;
        return;
    }
    Aplicacion* application;
    string line, appname, developer, category, subcategory, weight;
    while(getline(file, line)) {
        size_t separator1 = line.find(' ');
        size_t separator2 = line.find(' ', separator1 + 1);
        size_t separator3 = line.find(' ', separator2 + 1);
        size_t separator4 = line.find(' ', separator3 + 1);
        if (separator1 != string::npos && separator2 != string::npos && separator3 != string::npos && separator4 != string::npos) {
            appname = line.substr(0, separator1);
            developer = line.substr(separator1 + 1, separator2 - separator1 - 1);
            category = line.substr(separator2 + 1, separator3 - separator2 - 1);
            subcategory = line.substr(separator3 + 1, separator4 - separator3 - 1);
            weight = line.substr(separator4 + 1);
        }
        application = new Aplicacion(appname, developer, category, subcategory, weight);
        list->agregarInicio(application);
    }
    file.close();
    }
};

template<class T>
Lector<T>* Lector<T>::instancia = nullptr;
