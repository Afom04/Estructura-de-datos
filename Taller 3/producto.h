#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
using std::string;

class producto {
	private:
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

