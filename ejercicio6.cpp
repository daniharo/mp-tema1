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

    int aBuscar;
    cout << "A buscar: ";
    cin >> aBuscar;

    int posEncontrado = busquedaBinariaArray(aBuscar, val, 0, util-1);

    if (posEncontrado != -1)
        cout << "Encontrado en posicion " << posEncontrado;
    else
        cout << "NO encontrado";
    
    return 0;
}