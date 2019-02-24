#include <iostream>
using namespace std;

void eliminaMultiplesEspacios (char cad[])
{
    for(int i = 0, contadorEspacios = 0; cad[i] != '\0'; i++)
    {
        if(cad[i] == ' ')
        {
            contadorEspacios++;
        }
        else
        {
            if(contadorEspacios > 1)
            {
                for(int j = i-contadorEspacios+1; cad[j-1] != '\0'; j++)
                {
                    cad[j] = cad[j+contadorEspacios-1];
                }

                i = i - contadorEspacios + 1;
            }

            contadorEspacios = 0;
        }
    }
}

int main(void)
{
    const int TAM = 50;

    char cad[TAM];

    cout << "Introduzca cadena: ";
    cin.getline(cad, TAM);

    eliminaMultiplesEspacios(cad);

    cout << "Cadena sin multiples espacios: " << "\"" << cad << "\"";

    return 0;
}