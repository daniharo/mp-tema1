#include <iostream>
using namespace std;

void imprimeLineaIndice(const char nombre[], const char pag[], const int n)
{
    // Calculo longitud nombre
    int longNom;
    for(longNom = 0; nombre[longNom] != '\0'; longNom++);

    // Calculo longitud pag
    int longPag;
    for(longPag = 0; pag[longPag] != '\0'; longPag++);

    // Numero de puntos
    int puntos = n - (longNom + longPag);

    cout << nombre;
    for(int i = 0; i < puntos; i++)
        cout << '.';
    cout << pag;
}

int main(void)
{
    const int TAM = 50;
    char nom[TAM], pag[TAM];
    int longitud;

    cout << "Nombre: ";
    cin >> nom;
    cout << "Pagina: ";
    cin >> pag;
    cout << "Longitud: ";
    cin >> longitud;

    imprimeLineaIndice(nom, pag, longitud);

    return 0;
}