#include <iostream>
using namespace std;

void pintaArrayBool (const bool array[], const int totalUtil)
{
    for(int i = 0; i < totalUtil; i++)
    {
        cout << i << ": " << (array[i] ? "true" : "false") << endl;
    }
}

void calculaNumerosPrimos (bool array[], const int n)
{
    for (int i = 0; i < n; i++)
        array[i] = true;
    
    int i;

    for (i = 2; i < n;) {
        for(int j = 2*i; j < n; j+=i)
            array[j] = false;
        
        for(i++; i < n && array[i]==false; i++); // Preparar siguiente iteración
    }
}

int main(void)
{
    const int TAM = 50;
    bool erastotenes[TAM];

    int n;
    do {
        cout << "Introduzca maximo numero: ";
        cin >> n;
    } while (n < 1 || n > TAM);

    calculaNumerosPrimos(erastotenes, n);

    pintaArrayBool(erastotenes, n);

    return 0;
}