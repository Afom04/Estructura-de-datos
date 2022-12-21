#ifndef NODOARBOL_H
#define NODOARBOL_H
#include "persona.h"


class nodoArbol
{
	private:
		
		persona valor;
		nodoArbol* izPtr;
		nodoArbol* dePtr;
	public:
		nodoArbol();
		nodoArbol(persona);
		~nodoArbol();
		void setValor(persona);
		void setIzPtr(nodoArbol*);
		void setDePtr(nodoArbol*);
		persona getValor();
		nodoArbol* getIzPtr();
		nodoArbol* getDePtr();
		void imprimir();
		nodoArbol*& uno();
		nodoArbol*& dos();
	protected:
};

#endif
