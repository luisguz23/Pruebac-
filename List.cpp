#include <iostream>
#include "Node.cpp"



using namespace std;



// Definición de la clase ListaEnlazadaSimple
class ListaEnlazadaSimple {
public:
    Node* inicio;
    ListaEnlazadaSimple() : inicio(nullptr) {}

    // Insertar un nuevo Nodo al inicio de la lista
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
    void modificarInicio(Node* nuevoInicio) {
        inicio = nuevoInicio;
    }
};

// Ejemplo de uso
int main() {
    ListaEnlazadaSimple lista;

    // Insertar algunos nodos al inicio de la lista
    lista.insertarAlInicio(5);
    lista.insertarAlInicio(4);
    lista.insertarAlInicio(3);
    lista.insertarAlInicio(2);
    lista.insertarAlInicio(2);

    // Imprimir los valores de la lista
    Node* actual = lista.consultarInicio();
    while (actual != nullptr) {
        cout << actual->valor << " ";
        actual = actual->siguiente;
    }
    cout << endl;

    return 0;
}