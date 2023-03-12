#include <iostream>
using namespace std;

// Definición de la clase Nodo
class Node {
public:
/**
 * @brief los valores de nodo utilizados para recorrer
 * 
 */
    int valor;
    Node* siguiente;
    Node(int v) : valor(v), siguiente(nullptr) {}
    /**
     * @brief operador sobrecargado new 
     * 
     * @param s es la variable usada para mandar el size de lo que envio
     * @return void* no me retorna nada
     */

    void * operator new(size_t s)
        {
            cout<<endl<<"Inside my own new operator";
            void *p = malloc(s);
            return p;
        }
    /**
     * @brief operador delete sobrecargado para borrar la memoria
     * 
     * @param p el puntero  a borrar 
     */
    void operator delete( void *p )
        {
            cout<<endl<<"Inside my own delete operator";
            free (p);
        }
};