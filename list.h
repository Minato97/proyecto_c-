#ifndef LIST_H
#define LIST_H
 
#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>
 
#include "node.h"
#include "node.cpp"
 
using namespace std;
 
template <class T>
 
class List
{
    public:
        List();
        ~List();
 
        void add_head(T);//Agregar al inicio
        void add_end(T);//Agregar al final
        void del_by_position(int);//Borrar por posicion
        void fill_by_user(int);//Agregar dato
        void print(); //Mostrar datos
        void sort();//Ordenar ascendente
        //void ordenar_lista();
        int mayor();
        int suma();
        void del_head();
        void del_end();
        void opcion_2(List<int>, List<int>, List<int>);
      
        
    private:
        Node<T> *m_head;
        Node<T> *m_end;
        int m_num_nodes;
};
 
#endif // LIST_H
