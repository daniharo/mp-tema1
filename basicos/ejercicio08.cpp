#include <iostream>
#include "utilarray.h"
using namespace std;

int main(void)
{
    const int TAM = 50;

    int val[TAM];
    int utilVal = leerArray(val, TAM);

    int mayorSecuencia[TAM];
    int utilMayorSecuencia = mayorSecCreciente(val, utilVal, mayorSecuencia);

    cout << "Mayor secuencia:" << endl;
    imprimirArray(mayorSecuencia, utilMayorSecuencia);

    return (0);
}