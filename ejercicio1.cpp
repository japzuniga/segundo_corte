/*Realizar un programa que acumule (sume) valores ingresados por
teclado hasta ingresar el 9999 (no sumar dicho valor, indica que ha
finalizado la carga). Imprimir el valor acumulado e informar si dicho
valor es cero, mayor a cero o menor a cero.*/

#include <iostream>

using namespace std;

void funcion1()
{
    int suma = 0;
    int num;

    do
    {
        cout << "Ingrese un numero: ";
        cin >> num;
        if (num != 9999)
        {
            suma += num;
        }
    } while (num != 9999);

    cout << "\nEl valor acumulado es de: " << suma << endl;

    if (suma == 0)
    {
        cout << "\nEl valor acumulado es igual a cero";
    }
    else if (suma > 0)
    {
        cout << "\nEl valor acumulado es mayor a 0";
    }
    else
    {
        cout << "\nEl valor es menor a 0";
    }
}