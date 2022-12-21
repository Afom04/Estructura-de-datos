#ifndef NODO_H
#define NODO_H

#include <iostream>
using std::cout;
using std::endl;

#include "producto.h"

class nodo
{
	private:
		producto valor;
		nodo * siguientePtr; //siguientePtr es un apuntador a un nodo
	public:
		nodo();
		nodo(producto);
		~nodo();
		
		void setValor(producto);
		void setSiguientePtr(nodo *);
		
		producto getValor();
		nodo * getSiguientePtr();
		
		void imprimir();
	protected:
};

#endif
