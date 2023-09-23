#pragma once
#include "Nodo.h"
using namespace std;
template<class T>
class Pila {
private:
	Nodo<T>* tope;
public:

	Pila() { tope = NULL; }
	void push(T v);
	T pop();
	bool esVacia();
};

template<class T>
void Pila<T>::push(T v) {
	if (esVacia()) tope = new Nodo<T>(v);
	else tope = new Nodo<T>(v, tope);
}
template<class T>
bool Pila<T>::esVacia() {
	return (tope == NULL);
}
template<class T>
T Pila<T>::pop() {
	if(esVacia()) return NULL;
	else {
		T elemento = tope->elem;
		Nodo<T>* aux = tope;
		tope = tope->sig;
		delete aux;
		return elemento;
	}
}
