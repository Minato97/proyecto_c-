#ifndef NODE_H
#define NODE_H
 
#include <iostream>
 
using namespace std;
 
template <class T>
 
class Node
{
    public:
        Node();//Constructor por defecto
        Node(T);//Constructor con parametros
        ~Node();//Destructor
 
        Node *next;//Puntero que apunta al valor siguiente del nodo
        T data;//Guarda el valor del nodo
 
     
        void print();//Funcion para imprimir la lista
};
 
#endif // NODE_H
