#include <iostream>
#include <string.h>
#include "utilarray.h"

using namespace std;

const int TAM = 50;

/**
 * @brief Compara la relación de orden entre dos cadenas de caracteres
 * 
 * @param cad1 
 * @param cad2 
 * @return true Si la primera cadena es mayor que la segunda
 * @return false En otro caso
 */
bool esMayor (const char cad1[], const char cad2[])
{
    bool encontrado = false;
    bool mayor = false;

    for(int i = 0, j = 0; (cad1[i] != '\0') && (cad2[j] != '\0') && !encontrado; i++, j++)
    {
        // Primero saltamos los espacios
        while(cad1[i] == ' ')
            i++;
        while(cad2[j] == ' ')
            j++;
        
        // Comprobamos el orden, y si son iguales se continúa
        if(cad1[i] > cad2[j]) {
            encontrado = true;
            mayor = true;
        }
        else if(cad1[i] < cad2[j]) {
            encontrado = true;
        }
    }

    // Si no se ha encontrado cuál es la mayor, se compara la longitud
    if(!encontrado)
        mayor = strlen(cad1) > strlen(cad2);

    return (mayor);
}

/**
 * @brief Busca la cadena mínima (menor en el orden alfabético) en un array de cadenas
 * 
 * @param cadenas array de cadenas
 * @param posIni posición de inicio de la búsqueda
 * @param posFin posición de fin de la búsqueda
 * @return int posición del mínimo
 */
int buscaMinimaCadena(const char cadenas[][TAM], int posIni, int posFin)
{
    int posMin = posIni;
    char cadMin[TAM];
    copiaCad(cadenas[posIni], cadMin);

    for(int i = posIni; i <= posFin; i++)
    {
        if(esMayor(cadMin, cadenas[i])) {
            posMin = i;
            copiaCad(cadenas[i], cadMin);
        }
    }

    return (posMin);
}

/**
 * @brief Intercambia el valor de dos cadenas de caracteres
 * 
 * @param cad1 
 * @param cad2 
 */
void swap(char cad1[], char cad2[])
{
    char tmp[TAM];
    copiaCad(cad1, tmp);
    copiaCad(cad2, cad1);
    copiaCad(tmp, cad2);
}

/**
 * @brief Ordena un array de cadenas de caracteres según el orden alfabético
 * 
 * @param cadenas array de cadenas
 * @param nCadenas número de cadenas almacenadas en el array
 */
void ordenaCadenas(char cadenas[][TAM], int nCadenas)
{
    for(int i = 0; i < nCadenas-1; i++)
    {
        swap(cadenas[buscaMinimaCadena(cadenas, i, nCadenas-1)], cadenas[i]);
    }
}

int main(void)
{
    char cadenas[TAM][TAM];
    int nCadenas = 0;

    do {
        cout << "Introduzca numero de cadenas: ";
        cin >> nCadenas;
    } while (nCadenas < 1 || nCadenas > TAM);
    
    for(int i = 0; i < nCadenas; i++)
    {
        cout << "Cadena " << i << ": ";
        cin >> cadenas[i];
    }

    ordenaCadenas(cadenas, nCadenas);

    cout << "Cadenas ordenadas:" << endl;

    for(int i = 0; i < nCadenas; i++)
    {
        cout << "Cadena " << i << ": " << cadenas[i] << endl;
    }

    return (0);
}