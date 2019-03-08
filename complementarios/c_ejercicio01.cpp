#include <random>   // para la generación de números pseudoaleatorios
#include <iostream>
#include <cmath>

using namespace std;

/**
 * @brief Get Random double between 0 - 1
 * 
 * @return double 
 */
double getRandom()
{
    static std::default_random_engine e;
    static std::uniform_real_distribution<> dis(0, 1); // rage 0 - 1
    return dis(e);
}

/**
 * @brief Point in bidimensional space
 * 
 */
struct Punto
{
    double x, y;
    
    /**
     * @brief Construct a new random Punto object
     * 
     */
    Punto(void): x(getRandom()), y(getRandom()) {}

    /**
     * @brief Show the "point" object
     * 
     */
    void show()
    {
        cout << "(" << x << "," << y << ")";
    }
};

/**
 * @brief Calcula la distancia entre dos puntos
 * 
 * @param p1 
 * @param p2 
 * @return double 
 */
double distancia(Punto p1, Punto p2)
{
    double d_x = p1.x - p2.x;
    double d_y = p1.y - p2.y;
    return (sqrt(d_x*d_x + d_y*d_y));
}

/**
 * @brief Calcula la media de los datos almacenados en un array
 * 
 * @param val Array de datos
 * @param util Elementos almacenados en el array
 * @return double Media aritmética
 */
double mediaAritmetica (const double val[], int util)
{
    double suma = 0;
    for (int i = 0; i < util; i++){
        suma += val[i];
    }
    return(suma / util);
}

int main()
{
    const int NUM_PUNTOS = 1000;
    Punto puntos[NUM_PUNTOS];
    double distancias[NUM_PUNTOS*NUM_PUNTOS];
    int utilDist = 0;
    
    for(int i = 0; i < NUM_PUNTOS; i++){
        for(int j = i+1; j < NUM_PUNTOS; j++) {
            distancias[utilDist] = distancia(puntos[i], puntos[j]);
            utilDist++;
        }
    }

    cout << "La media de las distancias es: " << mediaAritmetica(distancias, utilDist);

    return(0);
}