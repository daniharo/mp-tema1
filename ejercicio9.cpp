#include <iostream>
#include "utilarray.h"
using namespace std;

int main()
{
    const int TAM = 100;

    cout << "Array 1: ";
    int val1[TAM];
    int util1 = leerArray(val1, TAM);

    int val2[TAM];
    int util2 = leerArray(val2, TAM);

    int res[TAM];
    int utilRes = mezclarUnico(val1, util1, val2, util2, res);

    cout << "Array de mezcla: ";
    imprimirArray(res, utilRes);

    return 0;
}