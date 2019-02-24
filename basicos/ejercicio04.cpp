#include <iostream>
#include "utilarray.h"
using namespace std;

int main()
{
    const int TAM = 100;

    int val[TAM];
    int util = leerArray(val, TAM);

    invertirArray(val, util);

    cout << "Array invertido:" << endl;
    imprimirArray(val, util);

    return 0;
}