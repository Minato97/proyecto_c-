#include <iostream>
#include <locale.h> 
#include "list.h"
#include "list.cpp"
 
using namespace std;
 
int main()
{
	setlocale(LC_CTYPE, "SPANISH");
    List<int> list_1;
    List<int> list_2;
    int ele;
 
    int dim;
    int pos;
    string file_with_list;
 
    cout << "Ingresa la dimensión de la lista: " << endl;
    cin >> dim;
 
 
    cout << "Lista A al inicio " << endl;
    list_1.print();
 
    cout << "Agrega un elemento por la cabeza: " << endl;
    cin >> ele;
    list_1.add_head(ele);
    list_1.print();
 
   
    cout << "Lista ordenada: " << endl;
    list_1.sort();
    list_1.print();
 
 
    cout << "Elimina un elemento por posición: " << endl;
    cin >> pos;
    list_1.del_by_position(pos);
    list_1.print();
 
 
    //list_1.del_all();
    list_1.print();
 
    return 0;
}
