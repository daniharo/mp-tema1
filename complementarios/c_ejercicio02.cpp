#include <iostream>
#include <iomanip>
using namespace std;

const int TAM = 24;

void rellenarRecurrencia(int a[], int b[], const int n)
{
    a[0] = b[0] = 1;

    for(int i = 1; i < n; i++)
    {
        a[i] = b[i-1];
        b[i] = a[i-1] + 2*b[i-1];
    }
}

void mostrarTablaRecur(const int a[], const int b[], const int n)
{
    cout << " k  --  a_k  --  b_k  --  a_k/b_k " << endl;

    for(int i = 0; i < n; i++)
    {
        double divis = static_cast<double>(a[i]) / static_cast<double>(b[i]);
        cout << setw(3) << i << " -- " << setw(5) << a[i] << " -- "
             << setw(5) << b[i] << " -- " << setprecision(8)
             << divis << endl;
    }
}

int main(void)
{
    int a[TAM];
    int b[TAM];

    int n;
    do{
        cout << "Numero de terminos: ";
        cin >> n;
    } while(n < 1 || n > TAM);

    rellenarRecurrencia(a, b, n);

    mostrarTablaRecur(a, b, n);

    return 0;
}