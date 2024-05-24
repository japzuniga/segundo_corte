#include <iostream>

using namespace std;

void funcion2() {
    int nums[15];

    cout << "Conversor de negativo a positivo" << endl;

    cout << "Ingrese 15 numeros negativos:" << endl;

    int i = 0;
    int num;
    do {
        cin >> num;
        nums[i] = num;
        i++;
    } while (i < 15 && num < 0);

    cout << "\nConversion a positivo:" << endl;

    int j = 0;
    do {
        cout << -nums[j] << endl;
        j++;
    } while (j < 15);

}
