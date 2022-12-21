#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
using std::string;
class producto {//Declaracion de la clase producto
	private://Declaracion de atributos de la clase
		string nombre;
		int precio;
	public://Declaracion de metodos de la clase
		producto();
		producto(string, int);
		~producto();
		void setProducto(string);
		void setPrecio(int);
		string getProducto();
		int getPrecio();
		void imprimir();
	protected:
};

#endif