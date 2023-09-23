#pragma once
#include "iostream"
using namespace std;
typedef unsigned int uint;

template<class T>
class Cola {
private:
    Nodo<T>* head;
    Nodo<T>* tail;
    uint lon;
    uint lon_max;

public:
    Cola(uint lm) : head(nullptr), tail(nullptr) { lon = 0, lon_max = lm; }

    ~Cola() {
        while (!estaVacia()) {
            dequeue();
        }
    }

    void enqueue(T v) {
        Nodo<T>* nuevoNodo = new Nodo<T>(v);
        if (estaVacia()) {
            head = nuevoNodo;
            tail =  nuevoNodo;
            lon++;
        }
        else if(estaLlena()) {
            cout << "\n Lista llena we";
            return;
        } else {
            tail->sig = nuevoNodo;
            tail = nuevoNodo;
            lon++;
        }
    }

    void dequeue() {
        if (!estaVacia()) {
            Nodo<T>* temp = head;
            head = head->sig;
            lon--;
            delete temp;
        }
    }

    T getHead() {
        if (!estaVacia()) {
            return head->elem;
        }
    }

    bool estaVacia() {
        return lon == 0;
    }

    bool estaLlena() {
        return lon == lon_max;
    }
    uint getLon() { return lon; }
    uint getLonMax() { return lon_max;}
};