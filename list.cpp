#include "list.h"
#include <windows.h>
 
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

//Opcion 1
template<typename T>
void List<T>::opcion_1(List<int> paq,List<int> rut1, int tam){
	
	int may,sum_1;
	may = paq.mayor();
	rut1.add_end(may);
	paq.del_end();
	tam -= 1;

	cout<<"------------------------------------------------------";
	Sleep(200);
	cout<<"\n\nLos datos del primer enlace son: "<<endl;
	Sleep(200);
	rut1.print();
	sum_1 = rut1.suma();
	cout<<"La suma del paquete de la ruta 1 es: "<<sum_1<<"\n\n";
	Sleep(200);
	sum_1 = 0;
	cout<<"------------------------------------------------------";
	Sleep(200);
	cout<<"\n\nLos datos del segundo enlace son: "<<endl;
	Sleep(200);
	paq.print();
	sum_1 = paq.suma();
	cout<<"La suma del paquete de la ruta 1 es: "<<sum_1<<"\n\n";
	Sleep(200);
	sum_1 = 0;
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

//opcion 3
template<typename T>
List<int> List<T>::opcion_3(List<int> paq, List<int> ruta)
{
  
    Node<T> *temp = paq.m_head;
   
   ruta.add_end(paq.m_head->data);
   
   
  
  return ruta;
}

//opcion 4
template<typename T>
List<int> List<T>::opcion_4(List<int> paq, List<int> ruta)
{
  
    Node<T> *temp = paq.m_head;
    Node<T> *temp1 = paq.m_end;
 
   
   while (temp->next != NULL) {
            temp = temp->next;
        }
  	paq.m_end = temp;
  	ruta.add_end(paq.m_end->data);
   
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


 
// Imprimir la Lista
template<typename T>
void List<T>::print()
{
    Node<T> *temp = m_head;
    if (!m_head) {
        cout << "No hay datos por enviar " << endl;
    } else {
        while (temp) {
            temp->print();
            Sleep(200);
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

//Funcion de llenado de la lista principal
template<typename T>
List<int> List<T>::llenar_lista(List<int> lista, int tam){
 int i=0,ele=0;
 while(i<tam){
 
    cout << "Ingrese el elemento que ocupará la posición "<<i+1<<": " << endl;
    cin >> ele;
    lista.add_end(ele);
    lista.print();
    i++;
}

return lista;
}


template<typename T>
List<T>::~List() {}
