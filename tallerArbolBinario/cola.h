#ifndef COLA_H
#define COLA_H

#include "lista.h"


class cola : public lista
{
	public:
		cola();
		~cola();
		
		void insertar(producto in);
		void eliminar(void);
	protected:
};

#endif
