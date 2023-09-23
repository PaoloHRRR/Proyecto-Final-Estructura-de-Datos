#include "pch.h"
#include "Lector.h"
#include "Pila.h"
using namespace System;
using namespace std;

int main() {
    //Prueba de cargarUsuarios() [Usando Lector singleton]
    Lista<Usuario*>* objLista = new Lista<Usuario*>();
    Lector<Usuario*>& objLector = Lector<Usuario*>::getInstancia();

    //PRUEBA DE PILAS
    Usuario* aux = new Usuario();
    Pila<Usuario*>* objPila = new Pila<Usuario*>();
    objPila->push(new Usuario("Pepe", "Contra", "Lucho"));
    objPila->push(new Usuario("Elmer", "Contra", "Toromax"));
    objPila->push(new Usuario("Maria", "Contra", "Popeyin"));
    aux = objPila->pop(); cout << aux->getNombreUsuario();
    aux = objPila->pop(); cout << aux->getNombreUsuario();
    aux = objPila->pop(); cout << aux->getNombreUsuario();


    //objLector.cargarUsuarios(objLista);
    //objLector.crearSolicitud(objLista);



    cin.get();
    cin.ignore();
    return 0;
}
