#include <iostream>
#include <ctype.h>
#include <cmath>
using namespace std;

int toInt(const char cad[])
{
    int entero = 0;;
    int util;

    int posComienzo = -1;
    for(util = 0; cad[util] != '\0'; util++)
    {
        if(isdigit(cad[util]) && posComienzo == -1){
            posComienzo = util;
        }
    }

    if(posComienzo != -1)
    {
        int posFinal;
        for(posFinal = posComienzo; isdigit(cad[posFinal+1]); posFinal++);
        posFinal;

        for(int i = posComienzo; i <= posFinal; i++)
        {
            entero += (cad[i]-'0') * pow(10, posFinal-i);
        }
    }

    return entero;
}

int main(void)
{
    const int TAM = 50;
    char cad[TAM];

    cout << "Introduzca cadena: ";
    cin.getline(cad, TAM);

    int entero = toInt(cad);

    cout << "El valor es " << entero;

    return 0;
}