#include "pch.h"
#include "Lector.h"
#include "Login.h"
using namespace System;
using namespace std;

int main() {

    Login objLogin;
    objLogin.mostrarLogin();
    cout << "===================" << flush << endl;
    cout << "       LOGIN       " << flush << endl;
    cout << "Usuario:           " << flush << endl;
    cout << "Contrasena:        " << flush << endl;
    cout << "===================" << flush << endl;
    cin.get();
    cin.ignore();
    return 0;
}
