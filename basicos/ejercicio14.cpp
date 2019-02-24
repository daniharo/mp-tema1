#include <iostream>
#include "utilarray.h"
using namespace std;

const int TAM = 50;

int main(void)
{
    char cad1[TAM], cad2[TAM];
    int posInser;

    cout << "Introduzca cadena original: ";
    cin >> cad1;

    cout << "Introduzca cadena a insertar: ";
    cin >> cad2;

    cout << "Introduzca posicion de insercion: ";
    cin >> posInser;

    bool res = insertaCadena(cad2, cad1, posInser);

    if(res)
        cout << "Nueva cadena: " << cad1;
    else
        cout << "No se ha podido realizar la insercion: tamanio insuficiente.";
    
    return (0);
}