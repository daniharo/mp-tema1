/**
 * @file utilarray.h
 * @brief Utilidades para trabajar con arrays y cadenas de caracteres estilo C
 * @author Daniel Haro Contreras
 */

#ifndef _UTILARRAY_H
#define _UTILARRAY_H

/**
 * @brief Imprime un array de valores enteros
 * @param array a imprimir
 * @param elementos utilizados en el array a imprimir
 */
void imprimirArray(const int array[], const int util);

/**
 * @brief Lee un array de valores enteros
 * @param array a leer
 * @return número de elementos almacenados en el array
 */
int leerArray (int val[], const int max);

/**
 * @brief Rellena un array de números pseudoaleatorios
 * @param array a rellenar
 * @param elementos a almacenar en el array
 * @param mínimo para la generación de números aleatorios
 * @param máximo para la generación de números aleatorios
 */
void generarArray(int array[], int util, int minimo, int maximo);

/**
 * @brief Genera un valor del intervalo [minimo,maximo] ambos inclusive
 * @param minimo el mínimo valor posible a generar aleatoriamente
 * @param maximo el máximo valor posible a generar aleatoriamente
 * @return Un número entero aleatorio en el intervalo [minimo,maximo] ambos inclusive
 */
int uniforme(int minimo, int maximo);

/**
 * @brief Busca el elemento menor de un array de int
 * @param array a buscar
 * @param posición inicial de búsqueda
 * @param posición final de búsqueda
 * @return posición del menor elemento
 */
int buscarMinimoArray(const int array[], int inic, int fin);

/**
 * @brief Busca un elemento en un array de int
 * @param valor a buscar
 * @param array de búsqueda
 * @param posición inicial de búsqueda
 * @param posición final de búsqueda
 * @return posición del elemento a buscar / -1 si no se ha encontrado
 */
int busquedaSecuencialArray(const int aBuscar, const int array[], int inic, int fin);

/**
 * @brief Intercambia el valor de dos variables
 * @param variable a
 * @param variable b
 */
void swap(int &a, int &b);

/**
 * @brief Invierte todos los elementos de un array
 * @param array a invertir
 * @param número de elementos almacenados en el array
 */
void invertirArray (int array[], const int util);

/**
 * @brief Ordena de menor a mayor todos los elementos de un array
 * @param array a invertir
 * @param número de elementos almacenados en el array
 */
void ordenarporSeleccion(int array[], const int util);

/**
 * @brief Busca un elemento en un array de int
 * @param valor a buscar
 * @param array de búsqueda
 * @param posición inicial de búsqueda
 * @param posición final de búsqueda
 * @return posición del elemento a buscar / -1 si no se ha encontrado
 * @pre Todos los elementos tienen que estar ordenados de menor a mayor
 */
int busquedaBinariaArray(int aBuscar, const int array[], int inic, int fin);

/**
 * @brief Construye un nuevo array en el que no hay elementos repetidos
 * @param array original
 * @param elementos almacenados en el array original
 * @param array resultante
 * @param elementos almacenados en el array resultante (referencia)
 */
void eliminarRepetidosArray (const int array[], const int util, int arrayRes[], int &utilRes);

/**
 * @brief Elimina los elementos repetidos en un array
 * @param array original
 * @param elementos almacenados en el array original (referencia). Se actualiza con los elementos
 * almacenados en el array resultante
 */
void eliminarRepetidosArray2 (int array[], int &utilRes);

/**
 * @brief Obtiene la posición de la mayor secuencia monótona creciente de un array
 * @param array original
 * @param elementos almacenados en el array original
 * @param referencia: 
 * @return número de elementos que contiene la mayor secuencia monótona creciente
 */
int posMayorSecCreciente (const int val[], const int util, int &utilMayorSec);

/**
 * @brief Guarda en el array \b<res> la mayor secuencia monótona creciente del array \b<val>
 * 
 * @param val array original
 * @param util número elementos almacenados en el array original
 * @param res array donde se guarda la secuencia
 * @return int número de elementos que componen la secuencia
 */
int mayorSecCreciente (const int val[], const int util, int res[]);

/**
 * @brief Produce un array \b<arrayRes> con el contenido de los dos arrays \b<array1> y \b<array2> y sin repetidos.
 * 
 * @param array1 
 * @param util1 
 * @param array2 
 * @param util2 
 * @param arrayRes array resultante
 * @return int número de elementos almacenados en el array resultante
 */
int mezclarUnico (const int array1[], const int util1, const int array2[], const int util2, int arrayRes[]);

/**
 * @brief Copia el cantenido de \b<cad> en \b<cadRes>
 * 
 * @param cad 
 * @param cadRes 
 * @return int número de elementos almacenados en la cadena resultante
 */
int copiaCad(const char cad[], char cadRes[]);

/**
 * @brief Elimina los espacios de \b<cad1> y almacena el resultado en \b<cadRes>
 * 
 * @param cad 
 * @param cadRes 
 */
void eliminaEspacios(const char cad[], char cadRes[]);

/**
 * @brief Comprueba si la cadena \b<cad> es un palíndromo
 * 
 * @param cad 
 * @return true si es palíndromo
 * @return false en otro caso
 */
bool esPalindromo(const char cad[]);

/**
 * @brief Busca la posición de la cadena \b<subCad> en \b<cad>
 * 
 * @param cad 
 * @param subCad 
 * @return int posición de la subcadena
 * @return -1 si no se encuentra la subcadena
 */
int buscarSubcadena(const char cad[], const char subCad[]);

/**
 * @brief Inserta la cadena \b<aInsertar> en la posición \b<posInser> de la cadena \b<cad>
 * 
 * @param aInsertar 
 * @param cad 
 * @param posInser 
 * @return true si se ha podido realizar la inserción
 * @return false en otro caso
 */
bool insertaCadena(const char aInsertar[], char cad[], const int posInser);


#endif