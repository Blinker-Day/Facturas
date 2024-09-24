//Factura de una ferreteria - Brayan Andrey Zorrilla Ramirez
#include <iostream>
#include "Factura.h"

using namespace std;


Factura f1;



	void menu()
	{
		
		cout<<"Menu de Opciones en la factura:"<<endl;
		cout<<"1.Establecer datos de facturacion"<<endl;
		cout<<"2.Obtener datos de facturacion"<<endl;
		cout<<"3.Obtener Monto Factura"<<endl;
		cout<<"4.Salir"<<endl;
		cout<<"Opcion:";
		
		
	}
	
	
	main(){
		
		int op;
		string auxp="",auxd="";
		int auxc=0,auxpr=0;
		
		
		do{
			
			system("cls");
			
			menu();cin>>op;
			
			switch(op){
				
				case 1:{ cout<<"Facturacion Ferreteria"<<endl;
					cout<<"Ingrese que Pieza se vendio:";cin>>auxp;
					cout<<"Ingrese Descripcion de la pieza:";cin>>auxd;
					cout<<"Ingrese la Cantidad de piezas vendidas:";cin>>auxc;
					cout<<"Ingrese el Precio unitario de la pieza:";cin>>auxpr;
					
					f1.setPieza(auxp);
					f1.setDescripcion(auxd);
					f1.setCantidad(auxc);
					f1.setPrecio(auxpr);
					
					
					break;
				}
				
				case 2:{
					
					cout<<"Datos de Facturacion"<<endl;
					
					cout<<"pieza:"<<f1.getPieza()<<endl;
					cout<<"Descripcion:"<<f1.getDescripcion()<<endl;
					cout<<"Cantidad:"<<f1.getCantidad()<<endl;
					cout<<"Precio:"<<f1.getPrecio()<<endl;
					
					break;
				}
				
				case 3:{ 
				
				int monto,cantidad,precio;
				
				cout<<"Monto Factura:"<<endl;
				
			
				
				if(f1.getCantidad()<0){ cout<<"La cantidad es inexistente"<<endl; f1.getCantidad()==0; cout<<"Cantidad: 0"<<endl;
				cout<<"Precio:"<<f1.getPrecio()<<endl;
				cout<<"monto: 0"<<endl;
				}
				
				
				if(f1.getPrecio()<0){ cout<<"El precio debe ser positivo"<<endl; f1.getPrecio()==0; 
				cout<<"Cantidad:"<<f1.getCantidad()<<endl;
				 cout<<"precio: 0"<<endl;
				 cout<<"monto: 0"<<endl;
				}
				
				
				
					if(f1.getCantidad()>0 && f1.getPrecio()>0 ){  monto=f1.getCantidad()*f1.getPrecio();
					
					cout<<"pieza:"<<f1.getPieza()<<endl;
					cout<<"Descripcion:"<<f1.getDescripcion()<<endl;
					cout<<"Cantidad:"<<f1.getCantidad()<<endl;
					cout<<"Precio:"<<f1.getPrecio()<<endl;
					cout<<"El monto es de:"<<monto<<endl;}
				
				
				
					break;
				}
			}
			
				system("pause");
				
		}while(op!=4);
		
	
	}
	
	



