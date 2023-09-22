#pragma once
#include "iostream"
#include "string"

using namespace std;

class Usuario {
private:
    string nombre_usuario, contrasena, nivel_de_acceso;
public:
    Usuario() {}
    Usuario(string username, string password, string level_of_access) {
        this->nombre_usuario = username;
        this->contrasena = password;
        this->nivel_de_acceso = level_of_access;
    }
    ~Usuario() {}
    string getNombreUsuario() { return this->nombre_usuario; }
    string getContrasena() { return this->contrasena; }
    string getNivelAcceso() { return this->nivel_de_acceso; }
};