#include <iostream>
#include <cmath>
#include <string.h>
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

    return (toupper(id[8]) == control[valor%23]);
}

int main(void)
{
    const int TAM = 50;
    char id[TAM];

    do{
        cout << "Introduzca un numero de identidad (NIF o NIE): ";
        cin >> id;
    } while(strlen(id) != 9 || !isalpha(id[8]));

    bool esNIF = !isalpha(id[0]);

    cout << "ID valido: " << (esValidoNIFNIE(id, esNIF) ? "SI" : "NO");

    return (0);
}