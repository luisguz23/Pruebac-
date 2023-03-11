#include <iostream>
using namespace std;

// Definición de la clase Nodo
class Node {
public:
    int valor;
    Node* siguiente;
    Node(int v) : valor(v), siguiente(nullptr) {}
};