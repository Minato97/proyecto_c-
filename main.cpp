#include <iostream>
#include <locale.h> 
#include "list.h"
#include "list.cpp"
 
using namespace std;


//Funcion de llenado de primera lista
List <int> llenar_lista(List<int> lista, int tam){
 int i=0,ele=0;
 while(i<tam){
 
    cout << "Agrega un elemento por la cabeza: " << endl;
    cin >> ele;
    lista.add_end(ele);
    lista.print();
    i++;
}
return lista;
}
/*template<typename T>
void List<T>::ordenar_lista(){
	T temp_data;
    Node<T> *aux_node = m_head;
    Node<T> *temp = aux_node;
 

while (aux_node) {
        temp = aux_node;
 
        while (temp->next) {
            temp = temp->next;
 
            if (aux_node->data > temp->data) {
                temp_data = aux_node->data;
                aux_node->data = temp->data;
                temp->data = temp_data;
            }
        }
 
        aux_node = aux_node->next;
    }
    lista.print();
}*/

int main()
{
	setlocale(LC_CTYPE, "SPANISH"); //Cambio de idioma
	
	
    List<int> paquete;
    List<int> ruta_1;
    List<int> ruta_2;
    int ele;
 
    int dim;
    int pos;
    string file_with_list;
 
    cout << "Ingresa la dimensión de la lista: " << endl;
    cin >> dim;
 
 
    /*cout << "Lista A al inicio " << endl;
    list_1.print();*/
 
 

 
   	paquete = llenar_lista(paquete, dim);
   	paquete.print();
   	
    /*cout << "Lista ordenada: " << endl;
    paquete.sort();
    paquete.print();*/
 
 
    /*cout << "Elimina un elemento por posición: " << endl;
    cin >> pos;
    list_1.del_by_position(pos);
    list_1.print();*/
 
 
    //list_1.del_all();
    //list_1.print();
 
    return 0;
}
