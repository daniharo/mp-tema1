#include <iostream>
using namespace std;

const int COLS = 2;

void mostrarMatriz (const int val[][COLS], const int filUtil)
{
    for(int i = 0; i < filUtil; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            cout << val[i][j] << " ";
        }

        cout << endl;
    }
}

int multiplicarMatrices(const int matA[][COLS], const int filUtilA, 
                         const int matB[][COLS], int res[][COLS])
{
    for(int i = 0; i < filUtilA; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            int suma = 0;

            for(int k  = 0; k < COLS; k++)
            {
                suma += matA[i][k]*matB[k][j];
            }

            res[i][j] = suma;
        }
    }
}

int main(void)
{
    int matA[][COLS] = {
        {1,2},
        {3,4}
    };

    int filUtilA = 2;

    int matB[][COLS] = {
        {5,6},
        {7,8}
    };

    int matProducto[50][COLS];
    int filUtilRes = multiplicarMatrices(matA, filUtilA, matB, matProducto);

    cout << "Matriz producto:" << endl;
    mostrarMatriz(matProducto, filUtilRes);

    return 0;
}