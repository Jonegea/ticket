// menu.cpp
#include <iostream>
using namespace std;

int menu() {
    int opcion;
    do {
        cout << "Menu de Opciones:" << endl;
        cout << "1. Ingresar como Nuevo Cliente" << endl;
        cout << "2. Ingresar como Cliente existente" << endl;
        cout << "3. Ingresar como Representante" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
    } while (opcion < 1 || opcion > 4);

    return opcion;
}
