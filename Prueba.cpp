#include <iostream>

using namespace std;

void * operator new(size_t size)
{
    cout << "New operator overloading " << endl;
    void * p = malloc(size);
    return p;
}
 
void operator delete(void * p)
{
    cout << "Delete operator overloading " << endl;
    free(p);
}

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

    //int * p = new list();
    
    ListaEnlazada list;
    list.insertar(3);
    list.insertar(2);
    list.insertar(1);
    list.insertar(9);
    list.print();
   
    return 0;
}


    //return nullptr;
