#include <iostream>
#include <malloc.h>



using namespace std;
//Overloading new and delete operator
//Global 
//Class by class
/**
 * @brief structura que voy a utilizar para usar punteros de reserva
 * 
 */

class Collector{
    public:
    struct lastructura {
        int * puntero1;
        int * puntero2;
    };

};