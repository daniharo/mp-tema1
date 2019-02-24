#include <iostream>
#include "utilarray.h"
using namespace std;

int main()
{
    const int TAM = 100;

    int val[TAM];
    int util = leerArray(val, TAM);

    int aBuscar;
    cout << "Numero a buscar: ";
    cin >> aBuscar;

    int posBusq = busquedaSecuencialArray(aBuscar, val, 0, util);

    if(posBusq != -1)
        cout << "Encontrado en posicion " << posBusq;
    else
        cout << "NO encontrado";
    
    return 0;    
}