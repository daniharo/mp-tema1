#include <iostream>
#include <cmath>
using namespace std;

int extraerDigito(int num, int pos)
{
    return ((num/static_cast<int>(pow(10, pos))) % 10);
}

void toMorse(int numero, char cad[])
{
    int nDigitos = log10(numero)+1;
    int posCad = 0;

    for(int i = nDigitos-1; i >= 0; i--)
    {
        int aConvertir = extraerDigito(numero, i);
        if(aConvertir <= 5) {
            for(int j = 0; j < aConvertir; j++, posCad++)
            {
                cad[posCad] = '.';
            }
            for(int j = 0; j < 5-aConvertir; j++, posCad++)
            {
                cad[posCad] = '-';
            }
        }
        else {
            for(int j = 0; j < aConvertir-5; j++, posCad++)
            {
                cad[posCad] = '-';
            }
            for(int j = 0; j < 10-aConvertir; j++, posCad++)
            {
                cad[posCad] = '.';
            }
        }
    }

    cad[posCad] = '\0';
}

int main(void)
{
    const int TAM = 50;

    int n;
    cout << "Escriba un numero natural: ";
    cin >> n;

    char morse[TAM];
    toMorse(n, morse);

    cout << "El numero en morse es: " << morse;

    return (0);
}