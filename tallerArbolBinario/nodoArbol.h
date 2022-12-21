#ifndef NODO_A_H
#define NODO_A_H




#include "producto.h"
class nodoArbol
{
	//friend class arbol;
	private:
	producto valor;
	nodoArbol * leftPtr;
	nodoArbol * rightPtr;
	public:
		nodoArbol();
		nodoArbol(producto);
		~nodoArbol();
		
		void setLeftPtr(nodoArbol *);
		void setRightPtr(nodoArbol *);
		void setValor(producto);
		
		nodoArbol* getLeftPtr();
		nodoArbol* getRightPtr();
		producto getValor();
		
		void imprimir();
		nodoArbol * & uno();
		nodoArbol * & dos();
		
	protected:
};

#endif
