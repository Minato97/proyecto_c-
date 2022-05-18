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
        List();//Constructor
        ~List();//Destructor
 
        void add_head(T);//Agregar al inicio
        void add_end(T);//Agregar al final
        void del_by_position(int);//Borrar por posicion
        void print(); //Mostrar datos
        void sort();//Ordenar ascendente
        int mayor();//Calcula el mayor
        int suma();//Calcula la suma total de la lista
        void del_head();//Elimina el primer elemento
        void del_end();//Elimina el ultimo elemento
        List<int> opcion_2(List<int>, List<int>);//Agrega el primero y el ultimo dato del paquete a una lista nueva
        List<int> opcion_3(List<int>, List<int>);//Agrega el primer dato del paquete a otra lista
        List<int> opcion_4(List<int>, List<int>);//Agrega el elemento final del paquete a otra lista
        List<int> llenar_lista(List<int>, int);//Pide al usuario que agregue elementos a la lista
        void opcion_1(List<int>, List<int>, int tam);//Agrega el elemento mas grande a una lista nueva si el valor mayor es mayor o igual a la suma total del paquete e imprime esa lista y el resto de los valores en otra lista con sus sumas correspondientes
      
        
    private:
        Node<T> *m_head;//puntero que se dirige al primer elemento
        Node<T> *m_end;//puntero que se dirige al ultimo elemento
        int m_num_nodes;//variable que guarda el numero de elementos
};
 
#endif // LIST_H
