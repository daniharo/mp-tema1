#include <iostream>
#include "utilarray.h"

using namespace std;

const int TAM = 50;

void ordenaCadenaChar(char cad[])
{
    for(int i = 0; cad[i+1] != '\0'; i++)
    {
        for(int j = i+1; cad[j] != '\0', j++) {
            // buscar mínimo y reemplazar (selección)
            // HAY QUE IGNORAR ESPACIOS!!
        }
    }
}

void ordenaCadenas(char cadenas[][TAM], int nCadenas)
{
    for(int i = 0; i < nCadenas; i++) {
        ordenaCadenaChar()
    }
}
