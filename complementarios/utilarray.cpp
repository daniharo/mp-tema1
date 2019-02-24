/**
 * @file utilarray.cpp
 * @author Daniel Haro Contreras
 */

#include <iostream>
#include <string.h>
#include "utilarray.h"
#include <cstdlib> // rand
#include <ctime> // time
#include <cmath> // floor

using  namespace std;

const int TAM = 100;

void imprimirArray(const int array[], const int util)
{
    cout << util << endl;

    for(int i=0; i < util; i++) {
        cout << array[i] << " ";
    }
}

int leerArray (int val[], const int max)
{
    int util;

    do{
        cout << "Cuantos enteros va a intruducir? (max " << max << "): ";
        cin >> util;
    } while(util < 1 || util > max);

    for(int i = 0; i < util; i++) {
        cout << "Elemento " << i << ": ";
        cin >> val[i];
    }

    return(util);
}

void generarArray(int array[], int util, int minimo, int maximo)
{
    for(int i = 0; i < util; i++)
    {
        array[i] = uniforme(minimo, maximo);
    }
}

int uniforme(int minimo, int maximo)
{
    double u01= std::rand() / (RAND_MAX+1.0); // Uniforme01
    return floor(minimo + u01 * (maximo-minimo+1));
}

int buscarMinimoArray(const int array[], int inic, int fin)
{
    int min = array[inic];
    int posMin = inic;

    for(int i = inic+1; i <= fin; i++)
    {
        if(array[i] < min){
            min = array[i];
            posMin = i;
        }
    }

    return posMin;
}

int busquedaSecuencialArray(const int aBuscar, const int array[], int inic, int fin)
{
    int posEncontrado = -1;

    for(int i = inic; posEncontrado == -1 && i <= fin; i++)
    {
        if(array[i] == aBuscar)
            posEncontrado = i;
    }

    return posEncontrado;
}

void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void invertirArray (int array[], const int util)
{
    for (int posIni = 0, posFin = util-1; posIni < posFin; posIni++, posFin--)
        swap(array[posIni], array[posFin]);
}

void ordenarporSeleccion(int array[], const int util)
{
    for(int i = 0; i < util-1; i++)
    {
        swap(array[buscarMinimoArray(array, i, util-1)], array[i]);
    }
}

int busquedaBinariaArray(int aBuscar, const int array[], int inic, int fin)
{
    int izq = inic, der = fin;

    while (izq <= der) {
        int centro = (izq+der) / 2;

        if (array[centro] > aBuscar)
            der = centro-1;
        else if (array[centro] < aBuscar)
            izq = centro+1;
        else
            return centro;
    }

    return -1;
}

void eliminarRepetidosArray (const int array[], const int util, int arrayRes[], int &utilRes)
{
    for(int i = 0; i < util; i++)
        arrayRes[i] = array[i];
    
    eliminarRepetidosArray2(arrayRes, utilRes);
}

void eliminarRepetidosArray2 (int array[], int &utilRes)
{
    for(int i = 1; i < utilRes; i++)
    {
        int posBuscado = busquedaSecuencialArray(array[i], array, 0, i-1);

        if(posBuscado != -1) {
            utilRes--;

            for (int j = i; j < utilRes; j++)
            {
                array[j] =  array[j+1];
            }

            i--;
        }
    }
}

int posMayorSecCreciente (const int val[], const int util, int &utilMayorSec)
{
    int posEncontrado = 0;
    int posSecActual = 0;

    int maxContador = 1;
    int contadorActual = 1;

    for(int i = 1; i < util; i++){
        if(val[i] >= val[i-1]) {
            contadorActual++;
        }
        else{
            if (contadorActual > maxContador) {
                posEncontrado = posSecActual;
                maxContador = contadorActual;
            }
            
            posSecActual = i;
            contadorActual = 1;
        }
    }

    utilMayorSec = maxContador;
    return (posEncontrado);
}

int mayorSecCreciente (const int val[], const int util, int res[])
{
    int utilMayorSec;
    int posMayorSec = posMayorSecCreciente(val, util, utilMayorSec);

    for (int i = posMayorSec, posRes = 0; i < utilMayorSec; i++, posRes++) {
        res[posRes] = val[i];
    }

    return (utilMayorSec);
}

int mezclarUnico (const int array1[], const int util1, const int array2[], const int util2, int arrayRes[])
{
    int posRes = 0;
    int utilRes = 0;

    for(int i = 0; i < util1; i++, posRes++)
    {
        arrayRes[posRes] = array1[i];
        utilRes++;
    }

    for(int i = 0; i < util2; i++, posRes++)
    {
        arrayRes[posRes] = array2[i];
        utilRes++;
    }

    eliminarRepetidosArray2(arrayRes, utilRes);
    ordenarporSeleccion(arrayRes, utilRes);
    return utilRes;
}

int copiaCad(const char cad[], char cadRes[])
{
    int util;

    for (util = 0; cad[util] != '\0'; util++)
        cadRes[util] =  cad[util];
    
    cadRes[util] = '\0';

    return util;
}

void eliminaEspacios(const char cad[], char cadRes[])
{
    copiaCad(cad, cadRes);

    for (int i = 0; cadRes[i] != '\0'; i++)
    {
        if(cadRes[i] == ' ')
        {
            for (int j = i; cadRes[j] != '\0'; j++)
                cadRes[j] = cadRes[j+1];
            i--;
        }
    }
}

bool esPalindromo(const char cad[])
{
    char cadCopia[TAM];
    eliminaEspacios(cad, cadCopia);

    // Calcular longitud de la cadena
    int util;
    for(util = 0; cadCopia[util] != '\0'; util++);

    bool esPalindromo = true;

    for(int izda = 0, dcha = util-1; izda < dcha && esPalindromo; izda++, dcha--)
        esPalindromo = tolower(cadCopia[izda]) == tolower(cadCopia[dcha]);
    
    return esPalindromo;
}

int buscarSubcadena(const char cad[], const char subCad[], const int inicio)
{
    int posEncontrada = -1;
    
    for (int i = inicio; (i <= strlen(cad) - strlen(subCad)) && (posEncontrada == -1); i++) {
        bool coincide = true;

        for (int j = i, k=0; k < strlen(subCad) && coincide; j++, k++) {
            coincide = cad[j] == subCad[k];
        }

        if(coincide)
            posEncontrada = i;
    }

    return(posEncontrada);
}

bool insertaCadena(const char aInsertar[], char cad[], const int posInser)
{
    bool res = false;
    int longAInsertar = strlen(aInsertar);
    int longOriginal = strlen(cad);

    if(longAInsertar + longOriginal + 2 <= TAM) {
        // Se copian los datos que ocupan las posiciones de inserción
        for(int i = longOriginal + longAInsertar - 1; i >= posInser + longAInsertar; i--) {
            cad[i] = cad[i-longAInsertar];
        }

        // Se realiza la inserción
        for(int i=posInser, j=0; j < longAInsertar; i++, j++) {
            cad[i] = aInsertar[j];
        }

        res = true;

        cad[longOriginal+longAInsertar] = '\0';
    }

    return res;
}