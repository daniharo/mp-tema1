#include <iostream>
using namespace std;

const int COLS = 4;

int trazaMatriz(const int val[][COLS], const int filUtil)
{
    int suma = 0;

    for (int i = 0; i < COLS && i < filUtil; i++)
    {
        suma+= val[i][i];
    }

    return suma;
}

int main(void)
{
    int matriz[][COLS] = {
        {1, 2, 3, 4},
        {2, 3, 4, 5},
        {3, 4, 5, 6}
    };

    int filUtil = 3;
    int traza = trazaMatriz(matriz, filUtil);

    cout << "Valor traza: " << traza;

    return 0;
}