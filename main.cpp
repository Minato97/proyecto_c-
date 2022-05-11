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
 
 
    
   	paquete = llenar_lista(paquete, dim);
   	paquete.sort();
   	paquete.print();
   	
   	paquete.mayor();
   	
   	
 
    /*cout << "Elimina un elemento por posición: " << endl;
    cin >> pos;
    list_1.del_by_position(pos);
    list_1.print();*/
 
 
 
    return 0;
}
