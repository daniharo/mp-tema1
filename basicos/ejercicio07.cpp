#include <iostream>
#include "utilarray.h"
using namespace std;

int main()
{
    const int TAM = 100;

    int val[TAM];
    int util = leerArray(val, TAM);

    eliminarRepetidosArray2(val, util);

    cout << "Array sin repetidos:" << endl;
    imprimirArray(val, util);

    return 0;
}