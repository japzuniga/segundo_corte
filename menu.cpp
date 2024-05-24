#include <iostream>
#include "ejercicio1.cpp"
#include "ejercicio3.cpp"
using namespace std;

main() {
    int opcion;

    do {
        cout << "\n1. Ejecutar ejercicio 1" << endl;
        cout << "2. Ejectuar ejercicio 2" << endl;
        cout << "3. Ejecutar ejercicio 3" << endl;
        cout << "4. Salir" << endl;
        cout << "Escoja: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                funcion1();
                break;
            case 2:
                break;
            case 3:
                ejercicio3();
                break;
            case 4:
                cout << "\nsaliendo...\n";
                break;
            default:
                cout << "\nopcion invalida...\n";
                break;
        }
    } while (opcion != 4);
}