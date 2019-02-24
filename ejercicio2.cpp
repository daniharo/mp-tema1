#include <iostream>
#include "utilarray.h"
using namespace std;

int main()
{
    const int TAM = 100;

    int valores[TAM];
    int util = leerArray(valores, TAM);

    cout << "Array leido: " << endl;
    imprimirArray(valores, util);

    int posMin = buscarMinimoArray(valores, 0, util-1);

    cout << "Minimo: " << valores[posMin];
    
    return 0;
}