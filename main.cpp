#include <iostream>
#include <locale.h> 
#include "list.h"
#include "list.cpp"
 
using namespace std;


//Funcion de llenado de primera lista
List <int> llenar_lista(List<int> lista, int tam){
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

void opcion_1(List<int> paq,List<int> rut1,List<int> rut2, int tam){
	
	int may;
	may = paq.mayor();
	rut1.add_end(may);
	paq.del_by_position(tam);
	tam -= 1;
	
	rut2 = paq;
	
	cout<<"\nLos datos del primer enlace son: "<<endl;
	rut1.print();
	cout<<"\nLos datos del segundo enlace son: "<<endl;
	rut2.print();
	
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
    int mayor;
    int sum;
    string file_with_list;
 
    cout << "Ingresa la dimensión de la lista: " << endl;
    cin >> dim;
 
 	cout<<"\nAhora ingresemos el paquete de datos que se enviarán:\n"<<endl;
   	paquete = llenar_lista(paquete, dim);
   	
   	cout<<"\nEl paquete ordenado en orden ascendente es:"<<endl;
   	paquete.sort();
   	paquete.print();
   	
   	mayor = paquete.mayor();
   	sum = paquete.suma();
   	if (sum/2 < mayor){
   	opcion_1(paquete,ruta_1,ruta_2,dim);
   }else{
   	cout<<"no se puede"<<endl;
   }
 
    /*cout << "Elimina un elemento por posición: " << endl;
    cin >> pos;
    list_1.del_by_position(pos);
    list_1.print();*/
 
 
 
    return 0;
}
