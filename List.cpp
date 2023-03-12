/**
 * @file List.cpp
 * @author Gabriel Guzman y Luis Guzman
 * @brief Clase principal donde se utiliza la lista
 * @version 0.1
 * @date 2023-03-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include "Node.cpp"





using namespace std;

/**
 * @brief Clasee que crea la lista enlazada
 * 
 */

// Definición de la clase ListaEnlazadaSimple
class ListaEnlazadaSimple {
public:
/**
 * @brief Uso de los nodos para llamar la lista 
 * 
 */
    Node* inicio;
    ListaEnlazadaSimple() : inicio(nullptr) {}

    // Insertar un nuevo Nodo al inicio de la lista
    /**
     * @brief Funcion utilizada para insertar algo al inicio 
     * 
     * @param valor es el valor que se fuera a insertar al inicio 
     */
    void insertarAlInicio(int valor) {
        Node* nuevoNodo = new Node(valor);
        nuevoNodo->siguiente = inicio;
        inicio = nuevoNodo;
    }

    // Consultar el puntero al inicio de la lista
    Node* consultarInicio() {
        
        return inicio;
    }

    // Modificar el puntero al inicio de la lista
    /**
     * @brief Funcion utilizada para modificar el primer valor de la lista
     * 
     * @param nuevoInicio el nuevo nodo que voy a insertar 
     */
    void modificarInicio(Node* nuevoInicio) {
        inicio = nuevoInicio;
    
    }
};

// Ejemplo de uso
/**
 * @brief Valores que inserto y los convierto en nodos 
 * 
 * @return int simple return 
 */
int main() {
    ListaEnlazadaSimple lista;

    // Insertar algunos nodos al inicio de la lista
    lista.insertarAlInicio(5);
    lista.insertarAlInicio(4);
    lista.insertarAlInicio(3);
    lista.insertarAlInicio(2);
    lista.insertarAlInicio(2);

    // Imprimir los valores de la lista
    /**
     * @brief aqui es donde hace el recorrido
     * 
     */
    Node* actual = lista.consultarInicio();
    while (actual != nullptr) {
        cout << actual->valor << " ";
        actual = actual->siguiente;
        
    }
    cout << endl;

    return 0;
}