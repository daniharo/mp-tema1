/******************************************************************/
// Metodología de la programación
//
// Daniel Haro Contreras
//
// Ejercicio 8 - Tema 1
/******************************************************************/

#include <iostream>
#include "utilarray.h"
using namespace std;

const int TAM = 50;

int main(void)
{
    int val[TAM];
    int utilVal = leerArray(val);

    int mayorSecuencia[TAM];
    int utilMayorSecuencia = mayorSecCreciente(val, utilVal, mayorSecuencia);

    cout << "Mayor secuencia:" << endl;
    imprimirArray(mayorSecuencia, utilMayorSecuencia);

    return (0);
}