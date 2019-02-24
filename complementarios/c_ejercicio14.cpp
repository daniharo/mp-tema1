#include <iostream>
#include "utilarray.h"
using namespace std;

const int TAM = 50;

int vecesSubsecuencia(const char cad[], const char subCad[])
{
    int posiciones[TAM];
    int utilPos = 0;

    for(int i = 0; cad[i] != '\0'; i++)
    {
        int pos = buscarSubcadena(cad, subCad, i);
        if(pos != -1)
        {
            posiciones[utilPos] = pos;
            utilPos++;
        }
    }

    eliminarRepetidosArray2(posiciones, utilPos);

    return utilPos;
}

int main(void)
{
    char cad[TAM] = "aaaaa";
    char subCad[TAM] = "aaa";

    int veces = vecesSubsecuencia(cad, subCad);

    cout << "Num veces: " << veces;

    return 0;
}