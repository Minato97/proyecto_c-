#include <iostream>
#include <locale.h> 
#include "list.h"
#include "list.cpp"
#include <stdlib.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "SPANISH"); //Cambio de idioma
	
    List<int> paquete;
    List<int> ruta_1;
    List<int> ruta_2;
    int ele;
 
    int dim = 0;
    int pos = 0;
    int mayor = 0;
    int sum = 0;
 	int sum_1 = 0;
 	int sum_2 = 0;
    
    string file_with_list;
    
 	cout<<"Este programa reparte un paquete con valores enteros entre dos rutas para enviarlas de la forma mas posible equilibrada dependiendo del valor de cada dato, simulando el envio de paquetes atravez de dos router.\n\n";
 	system("pause");
   	system("cls");
 	
 	cout<<"\nPrimero vamos a ingresar el número de datos que se enviarán"<<endl;
    cout << "Ingresa la dimensión de la lista: " << endl;
    cin >> dim;
 	system("pause");
   	system("cls");
 	
 	cout<<"\nAhora ingresemos los datos al paquete:\n"<<endl;
   	paquete = paquete.llenar_lista(paquete, dim);
   	system("pause");
   	system("cls");
   	
 	cout<<"\nAhora es necesario ordenar la lista para poder trabajar mejor los datos.\n";
   	cout<<"\nEl paquete en orden ascendente es:"<<endl;
   	paquete.sort();
   	paquete.print();
   	cout<<"\n\n";
   	
   	mayor = paquete.mayor();
   	sum = paquete.suma();
   
   	system("pause");
   	system("cls");
 
 	cout<<"\nAhora se realizan las comparaciones correspondientes entre los valores del paquete de datos y se obtienen los siguientes envíos de datos por cada ruta:\n\n";
 	system("pause");
   	if (sum/2 < mayor){
   		paquete.opcion_1(paquete,ruta_1,dim);
   	
   }else{
	   	while(dim > 0){
	   		
	   		if(dim == 3){//se añade el primer dato a la ruta 1
				ruta_1 = paquete.opcion_3(paquete,ruta_1);
				paquete.del_head();
				
				ruta_2 = paquete.opcion_4(paquete,ruta_2);//se añade el dato final a la ruta 2
				paquete.del_end();
				
				ruta_1 = paquete.opcion_4(paquete,ruta_1);//se añade el ultimo dato a la ruta 1
				paquete.del_head();
				dim -= 3;
				}
			else if(dim == 2){
				ruta_1 = paquete.opcion_3(paquete,ruta_1);//se añade el primer dato a la ruta 1
				paquete.del_head();
				
				ruta_2 = paquete.opcion_4(paquete,ruta_2);//se añade el dato final a la ruta 2
				paquete.del_end();
				dim -= 2;
				}
			else if(dim == 1){
				ruta_2 = paquete.opcion_4(paquete,ruta_2);//se añade el unico dato a la ruta 2
				paquete.del_head();
				dim -= 1;
				}
			else if(dim !=1 && dim != 2 && dim != 3 && dim != 0){//se añade el dato final y el primero a la ruta 1
				ruta_1 = paquete.opcion_2(paquete,ruta_1);
				paquete.del_end();
				paquete.del_head();//se eliminan ambos datos
				
				ruta_2 = paquete.opcion_2(paquete,ruta_2);//se añade el dato final y el primero a la ruta 2
				paquete.del_end();
				paquete.del_head();//se borran ambos datos
				dim -= 4;			
				}
			}
			cout<<"------------------------------------------------------";
			Sleep(200);
			cout<<"\n\nLos datos del primer enlace son: \n"<<endl;
			Sleep(200);
			ruta_1.print();
			sum_1 = ruta_1.suma();
			cout<<"La suma del paquete de la ruta 1 es: "<<sum_1<<"\n\n";
			Sleep(200);
			sum_1 = 0;
			cout<<"------------------------------------------------------";
			Sleep(200);
			cout<<"\n\nLos datos del segundo enlace son: \n"<<endl;
			Sleep(200);
			ruta_2.print();
			sum_1 = ruta_2.suma();
			cout<<"La suma del paquete de la ruta 2 es: "<<sum_1<<"\n\n";
			Sleep(200);
			sum_1 = 0;
			cout<<"------------------------------------------------------";
			Sleep(200);
			cout<<"\n\nLos datos por enviar son: "<<endl;
			Sleep(200);
			paquete.print();
		}
		
	
 	system("pause");
    return 0;
}
