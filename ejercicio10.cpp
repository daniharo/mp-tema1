#include <iostream>
#include <stdio.h>
using namespace std;

const int TAM = 100;

int leerCadena(char cad[])
{
    char leido = getchar();
    int util = 0;

    for(int i=0; leido != '#' && i < TAM; i++) {
        cad[i] = leido;
        util++;
        leido = getchar();
    }

    return (util);
}

void calcFrecuenciaCaracteres(const char cad[], const int util, int frecuencias[])
{
    for(int i = 0; i < util; i++) {
        if(isalpha(cad[i]))
            frecuencias[tolower(cad[i]) - 'a']++;
    }
}

int main(void)
{
    const int NUMALFA = 'z'-'a'+1;

    char cadena[TAM];
    int utilCadena = leerCadena(cadena);

    int frecuencias[TAM] = {0};
    calcFrecuenciaCaracteres(cadena, utilCadena, frecuencias);

    for(int i = 0; i < NUMALFA; i++) {
        cout << "Contador " << (char)(i+'a') << ": " << frecuencias[i] << endl;
    }

    return(0);
}