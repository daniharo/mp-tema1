#include <iostream>
#include "utilarray.h"
using namespace std;

int main()
{
    const int TAM = 50;
    char cad[TAM];

    cout << "Introduzca cadena: ";
    cin.getline(cad, TAM);

    cout << "\"" << cad << "\" ";

    if (esPalindromo(cad))
        cout << "es un palindromo";
    else
        cout << "NO es un palindromo";
    
    return 0;
}