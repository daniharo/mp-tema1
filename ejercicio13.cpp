#include <iostream>
#include <string.h>
#include "utilarray.h"

using namespace std;

int main(void)
{
    const int TAM = 50;

    char cadena[TAM], subCadena[TAM];

    cout << "Introduzca cadena: ";
    cin >> cadena;

    cout << "Introduzca subcadena: ";
    cin >> subCadena;

    int posBusqueda = buscarSubcadena(cadena, subCadena);

    if(posBusqueda != -1)
        cout << "La subcadena se ha encontrado en la posicion " << posBusqueda;
    else
        cout << "No se ha encontrado la subcadena";
    
    return(0);
}