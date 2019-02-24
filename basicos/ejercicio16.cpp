#include <iostream>
using namespace std;

const int COLS = 3;

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

void traspuestaMatriz (const int mat[][COLS], const int filUtil, int matRes[][COLS])
{
    if(filUtil == COLS)
    {
        for(int i = 0; i < filUtil; i++)
        {
            for(int j = 0; j < COLS; j++)
            {
                matRes[i][j] = mat[j][i];
            }
        }
    }
}

int main(void)
{
    int mat[][COLS] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int filUtil = 3;

    int matTraspuesta[filUtil][COLS];
    traspuestaMatriz(mat, filUtil, matTraspuesta);
    mostrarMatriz(matTraspuesta, filUtil);

    return 0;
}