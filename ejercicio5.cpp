#include <iostream>
#include "utilarray.h"
using namespace std;

int main()
{
    const int TAM = 100;

    int val[TAM];
    int util = leerArray(val, TAM);

    ordenarporSeleccion(val, util);

    cout << "Array ordenado:" << endl;
    imprimirArray(val, util);

    return 0;
}