#ifndef PILA_H
#define PILA_H

#include "lista.h"

class pila : public lista
{
	public:
		pila();
		~pila();
		void insertar(producto);
		void eliminar();
	protected:
};

#endif
