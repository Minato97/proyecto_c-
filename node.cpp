#include "node.h"
 
// Constructor por defecto
template<typename T>
 
Node<T>::Node()
{
    data = NULL; //Aquí guardaremos el dato
    next = NULL; //Aquí asignaremos el puntero delantero
}
 
// Constructor por parámetro
template<typename T>
Node<T>::Node(T data_)
{
    data = data_;
    next = NULL;
}
 

// Imprimir un Nodo
template<typename T>
void Node<T>::print()
{
    cout << data << "-> ";
}
 
template<typename T>
Node<T>::~Node() {}
