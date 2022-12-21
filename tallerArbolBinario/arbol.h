#ifndef ARBOL_H
#define ARBOL_H
#include "nodoArbol.h"
#include "lista.h"
#include "cola.h"
#include "pila.h"
using std::string;

class arbol
{
	private:
		nodoArbol *raizPtr;
	public:
		arbol();
		~arbol();
		
		void setRaizPtr(nodoArbol *);
		nodoArbol * getRaizPtr();
		void ayudaInsertar(producto , nodoArbol * &);
		void insertar(producto );
		void ayudaInorden(pila &, nodoArbol *);
		void ayudaPreorden(cola &, nodoArbol *);
		void ayudaPostorden(lista &, nodoArbol *);
		void inOrden();
		void preOrden();
		void posOrden();
		void mostrarInorden(nodoArbol *);
		void asignarInorden(pila &);
		void mostrarPreorden(nodoArbol *);
		void asignarPreorden(cola &);
		void mostrarPostorden(nodoArbol *);
		void asignarPostorden(lista &);
		void imprimir();
		void leer(string);
	protected:
};

#endif
