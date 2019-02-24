#include <iostream>
#include "utilarray.h"
using namespace std;

int main()
{
    const int TAM = 50;
    char cad[TAM];
    char cadCopia[TAM];
    cout << "Introduzca cadena: ";
    cin >> cad;
    
    copiaCad(cad, cadCopia);
    cout << "Copia: " << cadCopia;

    return 0;
}