#pragma once
template<class T>
class Nodo {
public:
    T elem;
    Nodo<T>* sig;
    Nodo(T v, Nodo<T>* next = NULL) {
        elem = v;
        sig = next;
    }
};

