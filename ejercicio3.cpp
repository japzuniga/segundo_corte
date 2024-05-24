/*Escriba un programa que solicite ingresar diferentes números a la 
vez y que pueda repetir indefinidamente si el usuario lo desea (que el 
ordenador pregunte ¿Quiere continuar? y la persona pueda responder 
S o N. utilizando do while*/

#include <iostream>


using namespace std;

void ejercicio3()
{
    int numero;
    char continuar;
    do
    {
        cout << "\nIngresa un numero: ";
        cin >> numero;
        cout << "Quiere continuar? (S/N): ";
        cin >> continuar;
    } while ((continuar == 'S') || (continuar == 's'));
}