#ifndef FACTURA_H
#define FACTURA_H
#include <iostream>

using namespace std;

class Factura
{
	private:
	
	string pieza,descripcion;
	int cantidad,precio;
	
	
	
	public:
		
		//set
		
		Factura();
		Factura(string _pieza,string _descripcion,int _cantidad,int _precio);
		
		
		void setPieza( string _pieza);
		void setDescripcion( string _descripcion);
		void setCantidad ( int _cantidad);
		void setPrecio ( int _precio);
		
		//get
		
		string getPieza();
		string getDescripcion();
		int getCantidad ();
		int getPrecio();
		
	
		
		





};

#endif
