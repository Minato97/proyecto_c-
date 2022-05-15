#include <iostream>
#include <locale.h> 
#include "list.h"
#include "list.cpp"
 
using namespace std;


//Funcion de llenado de primera lista
List <int> llenar_lista(List<int> lista, int tam){
 int i=0,ele=0;
 while(i<tam){
 
    cout << "Ingrese el elemento que ocupar� la posici�n "<<i+1<<": " << endl;
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
	paq.del_end();
	tam -= 1;

	cout<<"\nLos datos del primer enlace son: "<<endl;
	rut1.print();
	cout<<"\nLos datos del segundo enlace son: "<<endl;
	paq.print();
	
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
 
    cout << "Ingresa la dimensi�n de la lista: " << endl;
    cin >> dim;
 
 	cout<<"\nAhora ingresemos el paquete de datos que se enviar�n:\n"<<endl;
   	paquete = llenar_lista(paquete, dim);
   	
   	
   	cout<<"\nEl paquete ordenado en orden ascendente es:"<<endl;
   	paquete.sort();
   	paquete.print();
   	
   	mayor = paquete.mayor();
   	sum = paquete.suma();
   	
   	
   	
   	if (sum/2 < mayor){
   	opcion_1(paquete,ruta_1,ruta_2,dim);
   	
   }else{
   	ruta_1 = paquete.opcion_2(paquete,ruta_1);
   	 paquete.del_end();
   	 paquete.del_head();
   	 ruta_1.print();
   	 //paquete.print();
   	ruta_2 = paquete.opcion_2(paquete,ruta_2);
   	paquete.del_end();
	paquete.del_head();
   	ruta_2.print();
   	paquete.print();
   }
   
  
  
    /*cout << "Elimina un elemento por posici�n: " << endl;
    cin >> pos;
    list_1.del_by_position(pos);
    list_1.print();*/
 
 
 
    return 0;
}
