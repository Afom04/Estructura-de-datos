#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <fstream>
using std::ifstream;
#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
class producto
{
	string nombre;
	int precio;
	public:
		producto();
		producto(string, int);
		~producto();
		void setNombre(string);
		void setPrecio(int);
		string getNombre();
		int getPrecio();
		void imprimir();
	protected:
};

#endif
