#pragma once
#include "iostream"
#include "string"

using namespace std;

class Aplicacion {
private:
    string nombre_aplicacion, desarrollador, categoria, subcategoria, peso;
public:
    Aplicacion() {}
    Aplicacion(string appname, string developer, string category, string subcategory, string weight) {
        this->nombre_aplicacion = appname;
        this->desarrollador = developer;
        this->categoria = category;
        this->subcategoria = subcategory;
        this->peso = weight;
    }
    ~Aplicacion() {}
    string getNombreAplicacion() { return this->nombre_aplicacion; }
    string getDesarrollador() { return this->desarrollador; }
    string getCategoria() { return this->categoria; }
    string getSubcategoria() { return this->subcategoria; }
    string getPeso() { return this->peso; }
};