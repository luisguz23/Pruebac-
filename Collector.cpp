#include <iostream>
#include <malloc.h>

using namespace std;
//Overloading new and delete operator
//Global 
//Class by class

class Collector{
    public:

        void * operator new(size_t s)
        {
            cout<<endl<<"Inside my own new operator";
            void *p = malloc(s);
            return p;
        }

        void operator delete( void *p )
        {
            cout<<endl<<"Inside my own delete operator";
            free (p);
        }

};

int main()
{
    int * p = new int;
    *p=200;
    cout<<endl<<*p<<"\n";
    delete p;

return 0;
    

};