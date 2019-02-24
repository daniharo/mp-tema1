#include <iostream>
#include <stdlib.h> 
#include "utilarray.h"
using namespace std;

void calculaFibonacci(int array[], const int orden, const int nTerminos)
{
    array[0] = 0;
    array[1] = 1;

    for(int i = 2; i < nTerminos; i++)
    {
        int suma = 0;
        for (int j = (i <= orden) ? 0 : (i - orden); j < i; j++)
            suma += array[j];
        array[i] = suma;
    }
}

int main(int argc, char *argv[])
{
    const int TAM = 50;
    int fibonacci[TAM];
    int nTerminos = 20;

    calculaFibonacci(fibonacci, atoi(argv[1]), nTerminos);

    imprimirArray(fibonacci, nTerminos);
}