#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;


class lista
{
	private:
		nodo* primerPtr;
		nodo* ultimoPtr;
	public:
		lista();
		~lista();
		void setprimerPtr(nodo*);
		void setultimoPtr(nodo*);
		nodo* getprimerPtr();
		nodo* getultimoPtr();
		void imprimir();

		void insertarFinal(producto);
		void insertarInicio(producto);
		void eliminarFinal();
		void eliminarInicio();
		
		void mostrar();
		void leer();
		void guardar();
	protected:
};

#endif
