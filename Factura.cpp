#include "Factura.h"
#include <iostream>

using namespace std;


Factura::Factura()
{ 

 pieza="";
 descripcion="";
 cantidad=0;
 precio=0;
 


}

Factura::Factura(string _pieza,string _descripcion,int _cantidad,int _precio){
	
	pieza= _pieza;
	descripcion= _descripcion;
	cantidad= _cantidad;
	precio= _precio;
	
	
}



  //set

	  void Factura::setPieza(string _pieza)
	 {
	 	
	 	 pieza=_pieza;
	 	
	 }
	  void Factura::setDescripcion( string _descripcion){
	 	
	 	 descripcion=_descripcion;
	 	
	 }
	 void  Factura::setCantidad ( int _cantidad){
	 	
	 	 cantidad=_cantidad;
	 }
	  void Factura::setPrecio ( int _precio){
	 	
	 	
	 	 precio=_precio;
	 	
	 }
	 
	 
	 
	 //get
	 
	 
	 string Factura::getPieza(){
	 	
	 	return pieza;
	 }
	 
	 string Factura::getDescripcion(){
	 	
	 	return descripcion;
	 }
	 
	 int Factura::getCantidad(){
	 	
	 	return cantidad;
	 }
	 
	 int Factura::getPrecio(){
	 	
	 	return precio;
	 }
