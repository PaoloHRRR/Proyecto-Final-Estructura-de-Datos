#pragma once
#include "iostream"
#include "string"
#include "functional"
#include "Nodo.h"
using namespace std;

typedef unsigned int uint;

template <class T>
class Lista {
private:
    Nodo<T>* ini;
    uint lon;
public:
    Lista() {lon = 0; ini = nullptr;}
    ~Lista() {}
    void agregarInicio(T elem) {
        Nodo<T>* nuevo = new Nodo<T>(elem, ini);
        if(nuevo != nullptr){
        ini = nuevo;
        lon++;
        }
    }
    T obtenerInicio() { return ini->elem; }
    
    T obtenerPosicion(uint pos) {
        if(lon == 0 || pos > lon) return nullptr;
        Nodo<T>* aux = ini;
        if(pos == 1) obtenerInicio();
        for(int i  = 1; i < pos; i++) {
            aux = aux->sig;
        }
        return aux->elem;
    }

    T buscarUsuario(string nombreUsuario, string contrasena) {
        Nodo<T>* actual = ini;

        while (actual != nullptr) {
            Usuario usuario = actual->elem; // Suponiendo que Usuario es el tipo de T
            if (usuario.getNombreUsuario() == nombreUsuario && usuario.getContrasena() == contrasena) {
                return actual->elem;
            }

            actual = actual->sig;
        }

        return nullptr;
    }
};
