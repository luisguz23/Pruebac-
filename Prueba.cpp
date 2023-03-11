#include <iostream>

using namespace std;

class Node{

public:
    int dato;
    Node* siguiente;

    Node(int value){
        dato=value;
        siguiente = nullptr;
    }
};

class ListaEnlazada{

public:
    Node* head;

    ListaEnlazada(){
        head=nullptr;
    }

    void insertar(int value){
        Node* nodoNew = new Node(value);
        nodoNew->siguiente=head;
        head=nodoNew;
    }

    void print(){

        Node* nodo_actual = head;
        cout<<"LIsta: ";
        while (nodo_actual != nullptr ){
            cout<< nodo_actual->dato<<" ";
            nodo_actual = nodo_actual->siguiente;

        }
        std::cout<<std::endl;
    }

};


int main() {
    ListaEnlazada list;
    list.insertar(3);
    list.insertar(2);
    list.insertar(1);
    list.insertar(0);
    list.print();
    return 0;
}