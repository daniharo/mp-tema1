#include <iostream>
using namespace std;

int mayoresElementos(const int a[], const int util, int &posMaximo, 
                     int &segMaximo, int &posSegMaximo)
{
    int maximo = a[0];
    posMaximo = 0;
    segMaximo = a[0];
    posSegMaximo = 0;

    for(int i = 1; i < util; i++)
    {
        if(a[i] > maximo){
            posMaximo = i;
            maximo = a[i];
        }
        else if (a[i] > segMaximo){
            posSegMaximo = i;
            segMaximo = a[i];
        }
    }

    return (maximo);
}

int main(void)
{
    const int TAM = 50;
    int array[TAM];
    int util;

    do{
        cout << "Numero de elementos: ";
        cin >> util;
    } while(util < 1 || util > TAM);

    for(int i = 0; i < util; i++)
    {
        cout << "Elemento " << i << ": ";
        cin >> array[i];
    }

    int maximo, posMaximo, segMaximo, posSegMaximo;
    maximo = mayoresElementos(array, util, posMaximo, segMaximo, posSegMaximo);

    cout << "Maximo: " << maximo << endl
         << "Pos maximo: " << posMaximo << endl
         << "Segundo maximo: " << segMaximo << endl
         << "Pos segundo maximo: " << posSegMaximo;
    
    return 0;
}