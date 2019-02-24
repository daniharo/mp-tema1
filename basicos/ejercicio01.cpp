#include <iostream>
#include "utilarray.h"
using namespace std;

int main()
{
    const int TAM = 50;

    int valores[TAM];
    int n;
    do
    {
        cout << "Numero de elementos: ";
        cin >> n;
    } while (n < 1 || n > TAM);
    
    int min, max;
    cout << "Minimo: ";
    cin >> min;
    cout << "Maximo: ";
    cin >> max;

    generarArray(valores, n, min, max);

    imprimirArray(valores, n);

    return 0;
}