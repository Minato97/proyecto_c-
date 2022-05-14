#include "node.h"
 
// Constructor por defecto
template<typename T>
 
Node<T>::Node()
{
    data = NULL; //Aqu� guardaremos el dato
    next = NULL; //Aqu� asignaremos el puntero delantero
}
 
// Constructor por par�metro
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
    //cout << "Node-> " << "Dato: " << dato << " Direcion: " << this << " Siguiente: " << next << endl;
    cout << data << "-> ";
}
 
template<typename T>
Node<T>::~Node() {}
