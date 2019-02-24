#include <iostream>
using namespace std;

bool cifCorrecto(const char cif[])
{
    int a = 0;
    for(int i = 2; i <= 6; i += 2)
        a += (cif[i] - '0');

    int b = 0;
    for(int i = 1; i <= 7; i += 2)
    {
        int tmp = 2 * (cif[i] - '0');
        b += tmp%10 + tmp/10;
    }

    int c = a+b;
    int d = 10 - (c%10);

    bool correcto;

    if(toupper(cif[0]) >= 'N')
        correcto = toupper(cif[8]) == d+'A'-1;
    else
        correcto = cif[8]-'0' == d;

    return correcto;
}

int main()
{
    const int TAM = 50;
    char cif[TAM];

    cout << "Introduzca el CIF: ";
    cin >> cif;

    if(cifCorrecto(cif))
        cout << "El CIF introducido es correcto.";
    else
        cout << "El CIF introducido NO es correcto.";

    return 0;    
}