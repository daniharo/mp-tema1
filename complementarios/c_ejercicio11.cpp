#include <iostream>
#include <cmath>
using namespace std;

int calcularValor(const char cad[], int posIni, int posFin)
{
    int valor = 0;

    for(int i = posIni; i <= posFin; i++)
    {
        valor += (cad[i]-'0')*pow(10, posFin-i);
    }

    return (valor);
}

bool esValidoNIFNIE(const char id[], bool esNIF)
{
    const char control[] = "TRWAGMYFPDXBNJZSQVHLCKE";
    int valor = calcularValor(id, esNIF?0:1, 7);

    return (id[8] == control[valor%23]);
}