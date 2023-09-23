#pragma once
////Prueba de cargarUsuarios() [Usando Lector singleton]
//Lista<Usuario*>* objLista = new Lista<Usuario*>();
//Lector<Usuario*>& objLector = Lector<Usuario*>::getInstancia();
//
////PRUEBA DE PILAS
////Usuario* aux = new Usuario();
////Pila<Usuario*>* objPila = new Pila<Usuario*>();
////objPila->push(new Usuario("Pepe", "Contra", "Lucho"));
////objPila->push(new Usuario("Elmer", "Contra", "Toromax"));
////objPila->push(new Usuario("Maria", "Contra", "Popeyin"));
////aux = objPila->pop(); cout << aux->getNombreUsuario();
////aux = objPila->pop(); cout << aux->getNombreUsuario();
////aux = objPila->pop(); cout << aux->getNombreUsuario();

//PRUEBA DE COLAS
  /*  Usuario* aux = new Usuario();
    Cola<Usuario*>* objCola = new Cola<Usuario*>(3);
    objCola->enqueue(new Usuario("Pepe", "Contra", "Lucho"));
    objCola->enqueue(new Usuario("Elmer", "Contra", "Toromax"));
    objCola->enqueue(new Usuario("Maria", "Contra", "Popeyin"));
    aux = objCola->getHead();
    cout << aux->getNombreUsuario() << aux->getContrasena() << aux->getNivelAcceso() << endl;
    cout << objCola->getLon() << " " << objCola->getLonMax() << endl;

    objCola->enqueue(new Usuario("Chikisor", "Contra", "Panagau"));
     cout << endl << objCola->getLon() << " " << objCola->getLonMax() << endl;*/

     //objCola->dequeue();

     //aux = objCola->getHead();
     //cout << aux->getNombreUsuario() << aux->getContrasena() << aux->getNivelAcceso() << endl;
     //cout << objCola->getLon() << " " << objCola->getLonMax() << endl;

     //objCola->dequeue();

     //aux = objCola->getHead();
     //cout << aux->getNombreUsuario() << aux->getContrasena() << aux->getNivelAcceso() << endl;
     //cout << objCola->getLon() << " " << objCola->getLonMax() << endl;
     //objLector.cargarUsuarios(objLista);
     //objLector.crearSolicitud(objLista);


//PRUEBA DE CARGAR APLICACIONES DEL .txt
//void cargarAplicaciones(Lista<T>* list) {
//    ifstream file("baseDatosAplicacion.txt");
//    if (!file.is_open()) {
//        cerr << "Error: No se pudo abrir el archivo." << endl;
//        return;
//    }
//    Aplicacion* application;
//    string line, appname, developer, category, subcategory, weight;
//    while (getline(file, line)) {
//        size_t separator1 = line.find(' ');
//        size_t separator2 = line.find(' ', separator1 + 1);
//        size_t separator3 = line.find(' ', separator2 + 1);
//        size_t separator4 = line.find(' ', separator3 + 1);
//        if (separator1 != string::npos && separator2 != string::npos && separator3 != string::npos && separator4 != string::npos) {
//            appname = line.substr(0, separator1);
//            developer = line.substr(separator1 + 1, separator2 - separator1 - 1);
//            category = line.substr(separator2 + 1, separator3 - separator2 - 1);
//            subcategory = line.substr(separator3 + 1, separator4 - separator3 - 1);
//            weight = line.substr(separator4 + 1);
//        }
//        application = new Aplicacion(appname, developer, category, subcategory, weight);
//        list->agregarInicio(application);
//    }
//    file.close();
//}


//
//Borrar entradas

//    void deleteLinesFromFile(const string& filename, const vector<int>& linesToDelete) {
//    ifstream inFile(filename);
//    if (!inFile) {
//        cerr << "No se pudo abrir el archivo para lectura: " << filename << endl;
//        return;
//    }
//
//    vector<string> lines;
//    string line;
//
//    // Leer y almacenar las líneas que no deben ser borradas
//    int lineNumber = 1;
//    while (getline(inFile, line)) {
//        // Si no está en la lista de líneas a borrar, almacenarla
//        if (find(linesToDelete.begin(), linesToDelete.end(), lineNumber) == linesToDelete.end()) {
//            lines.push_back(line);
//        }
//        lineNumber++;
//    }
//
//    inFile.close();
//
//    ofstream outFile(filename);
//    if (!outFile) {
//        cerr << "No se pudo abrir el archivo para escritura: " << filename << endl;
//        return;
//    }
//
//    // Escribir las líneas que no fueron borradas de nuevo en el archivo
//    for (const auto& savedLine : lines) {
//        outFile << savedLine << endl;
//    }
//
//    outFile.close();
//}

//const string filename = "archivo.txt";
//const vector<int> linesToDelete = {2, 4};  // Ejemplo: líneas 2 y 4
// Llamar a la función para borrar las líneas indicadas

//Fin
//

    //PRUEBA DE NODO
    /*Nodo<Usuario*>* objNodo = new Nodo<Usuario*>(new Usuario("Juan", "contra", "Pedro"), nullptr);
    cout << objNodo->dato->getNombreUsuario();
    cout << objNodo->dato->getContrasena();
    cout << objNodo->dato->getNivelAcceso();*/




    //PRUEBA DE void cargarDatos() con instancias, agregando UNO
    /*Lista<Usuario*>* objLista = new Lista<Usuario*>();
    cargarDatos<Usuario*>(objLista, new Usuario("Juan","contra","Pedro"));*/


    /*PRUEBA DE void cargarDatos2() desde el .txt y agregando VARIOS*/
    //Lista<Usuario*>* objLista = new Lista<Usuario*>();
    //cargarDatos2(objLista);
    //cout << objLista->obtenerPosicion(3)->getNombreUsuario();
    //cout << objLista->obtenerPosicion(3)->getContrasena();
    //cout << objLista->obtenerPosicion(3)->getNivelAcceso();
    //cout << "\n" << objLista->obtenerPosicion(2)->getNombreUsuario();
    //cout << objLista->obtenerPosicion(2)->getContrasena();
    //cout << objLista->obtenerPosicion(2)->getNivelAcceso();
    //cout << "\n" << objLista->obtenerPosicion(1)->getNombreUsuario();
    //cout << objLista->obtenerPosicion(1)->getContrasena();
    //cout << objLista->obtenerPosicion(1)->getNivelAcceso();

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