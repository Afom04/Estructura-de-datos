#ifndef ARBOL_H
#define ARBOL_H
#include "nodoArbol.h"

class arbol {
	private:
		nodoArbol* raizPtr;
	public:
		arbol();
		~arbol();
		nodoArbol* getRaizPtr();
		void setRaizPtr(nodoArbol*);
		void imprimir();
		void insertar(persona);
		void ayudaInsertar(persona ,nodoArbol* &);
		void inOrden();
		void mostrarInOrden(nodoArbol *);
		/*void preorden();
		void mostrarPreOrden(nodoArbol *);
		void posorden();
		void mostrarPosOrden(nodoArbol *);*/
		nodoArbol*& tres();
		void leer();
	protected:
};

#endif
