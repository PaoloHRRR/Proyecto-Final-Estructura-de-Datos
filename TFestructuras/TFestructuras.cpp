#include "pch.h"
#include "Lector.h"

using namespace System;
using namespace std;

int main() {
    //Prueba de cargarUsuarios() [Usando una estructura con template como argumento]
    //Lista<Usuario*>* objLista = new Lista<Usuario*>();
    //Lector<Usuario*>* objLector = new Lector<Usuario*>();
    //objLector->cargarUsuarios(objLista);
    //cout << objLista->obtenerPosicion(3)->getNombreUsuario();
    //cout << objLista->obtenerPosicion(3)->getContrasena();
    //cout << objLista->obtenerPosicion(3)->getNivelAcceso();
    //cout << "\n" << objLista->obtenerPosicion(2)->getNombreUsuario();
    //cout << objLista->obtenerPosicion(2)->getContrasena();
    //cout << objLista->obtenerPosicion(2)->getNivelAcceso();
    //cout << "\n" << objLista->obtenerPosicion(1)->getNombreUsuario();
    //cout << objLista->obtenerPosicion(1)->getContrasena();
    //cout << objLista->obtenerPosicion(1)->getNivelAcceso();

   /* Prueba de cargarAplicaciones() [Usando una estructura con template como argumento]*/
    //Lista<Aplicacion*>* objLista = new Lista<Aplicacion*>();
    //Lector<Aplicacion*>* objLector = new Lector<Aplicacion*>();
    //objLector->cargarAplicaciones(objLista);
    //cout << "\n" << objLista->obtenerPosicion(9)->getNombreAplicacion();
    //cout << objLista->obtenerPosicion(9)->getDesarrollador();
    //cout << objLista->obtenerPosicion(9)->getCategoria();
    //cout << objLista->obtenerPosicion(9)->getSubcategoria();
    //cout << objLista->obtenerPosicion(9)->getPeso();

    //Prueba de cargarUsuarios() [Usando Lector singleton]
    Lista<Usuario*>* objLista = new Lista<Usuario*>();
    Lector<Usuario*>& objLector = Lector<Usuario*>::getInstancia();

    objLector.cargarUsuarios(objLista);
    cout << objLista->obtenerPosicion(3)->getNombreUsuario();
    cout << objLista->obtenerPosicion(3)->getContrasena();
    cout << objLista->obtenerPosicion(3)->getNivelAcceso();
    cout << "\n" << objLista->obtenerPosicion(2)->getNombreUsuario();
    cout << objLista->obtenerPosicion(2)->getContrasena();
    cout << objLista->obtenerPosicion(2)->getNivelAcceso();
    cout << "\n" << objLista->obtenerPosicion(1)->getNombreUsuario();
    cout << objLista->obtenerPosicion(1)->getContrasena();
    cout << objLista->obtenerPosicion(1)->getNivelAcceso();

    cout << endl << endl;
    //Prueba de cargarAplicaciones() [Usando Lector singleton]
    Lista<Aplicacion*>* objLista2 = new Lista<Aplicacion*>();
    Lector<Aplicacion*>& objLector2 = Lector<Aplicacion*>::getInstancia();
    objLector2.cargarAplicaciones(objLista2);
    cout << "\n" << objLista2->obtenerPosicion(9)->getNombreAplicacion();
    cout << objLista2->obtenerPosicion(9)->getDesarrollador();
    cout << objLista2->obtenerPosicion(9)->getCategoria();
    cout << objLista2->obtenerPosicion(9)->getSubcategoria();
    cout << objLista2->obtenerPosicion(9)->getPeso();


    cin.get();
    cin.ignore();
    return 0;
}
