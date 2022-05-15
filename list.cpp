#include "list.h"
 
using namespace std;
 
// Constructor por defecto
template<typename T>
List<T>::List()
{
    m_num_nodes = 0;
    m_head = NULL;
    m_end = NULL;
}
 
// Insertar al inicio
template<typename T>
void List<T>::add_head(T data_)
{
    Node<T> *new_node = new Node<T> (data_);
    Node<T> *temp = m_head;
    Node<T> *temp1 = m_end;
 
    if (!m_head) {
        m_head = new_node;
        m_end = new_node;
    } else {
        new_node->next = m_head;
        m_head = new_node;
 
        while (temp) {
            temp = temp->next;
        }
    }
    m_num_nodes++;
}


//opcion 2
template<typename T>
List<int> List<T>::opcion_2(List<int> paq, List<int> ruta)
{
  
    Node<T> *temp = paq.m_head;
    Node<T> *temp1 = paq.m_end;
 
   ruta.add_end(paq.m_head->data);
   
   while (temp->next != NULL) {
            temp = temp->next;
        }
  	paq.m_end = temp;
  	ruta.add_end(paq.m_end->data);
   
   //cout<<paq.m_end->data<<endl;
   //cout<<paq.m_head->data;
  
  return ruta;
}
 

// Insertar al final
template<typename T>
void List<T>::add_end(T data_)
{
    Node<T> *new_node = new Node<T> (data_);
    Node<T> *temp = m_head;
    Node<T> *temp1 = m_end;
 
    if (!m_head) {
        m_head = new_node;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
        m_end = new_node;
    }
    m_num_nodes++;
    
}
 

 // Eliminar por posición del nodo
template<typename T>
void List<T>::del_by_position(int pos)
{
    Node<T> *temp = m_head;
    Node<T> *temp1 = temp->next;
 
    if (pos < 1 || pos > m_num_nodes) {
        cout << "Fuera de rango " << endl;
    } else if (pos == 1) {
        m_head = temp->next;
    } else {
        for (int i = 2; i <= pos; i++) {
            if (i == pos) {
                Node<T> *aux_node = temp1;
                temp->next = temp1->next;
                delete aux_node;
                m_num_nodes--;
            }
            temp = temp->next;
            temp1 = temp1->next;
        }
    }
}
//Eliminar inicio
template<typename T> 
void List<T>::del_head()
{
    Node<T> *temp = m_head;
    Node<T> *temp1 = temp->next;
    
    m_head = temp->next;
   	m_num_nodes--;
}

//Eliminar final
template<typename T> 
void List<T>::del_end()
{
    Node<T> *temp = m_head;
    Node<T> *temp1 = temp->next;
    Node<T> *temp2 = m_end;

    
    
    while((temp->next)->next != NULL){
		temp = temp->next;
	}
	free(temp->next);
	temp->next = NULL;
	
	m_num_nodes--;
}


// Llenar la Lista por teclado
template<typename T>
void List<T>::fill_by_user(int dim)
{
    T ele;
    for (int i = 0; i < dim; i++) {
        cout << "Ingresa el elemento " << i + 1 << endl;
        cin >> ele;
        add_end(ele);
    }
}
 
 
// Imprimir la Lista
template<typename T>
void List<T>::print()
{
    Node<T> *temp = m_head;
    if (!m_head) {
        cout << "La Lista está vacía " << endl;
    } else {
        while (temp) {
            temp->print();
            if (!temp->next) cout << "NULL";
                temp = temp->next;
        }
  }
  cout << endl << endl;
}
 
 
// Ordenar de manera ascendente
template<typename T>
void List<T>::sort()
{
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
}

//Calcular mayor de la lista
template<typename T>
int List<T>::mayor()
{
    Node<T> *temp = m_head;
    Node<T> *mayor = m_head;
    int may;
    
    while (temp) {
    	if(temp->data > mayor->data){
    		mayor = temp;
		}
    temp = temp->next;
}
may=mayor->data;

return may;
}

//calcular la suma del paquete
template<typename T>
int List<T>::suma()
{
    Node<T> *temp = m_head;
    int suma;
    
    while (temp) {
    	suma += temp->data;
		
    temp = temp->next;

}
return suma;
}


template<typename T>
List<T>::~List() {}
