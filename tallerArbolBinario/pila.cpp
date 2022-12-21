#include "pila.h"

pila::pila()
{
}

pila::~pila()
{
}
void pila::insertar(producto in){
	insertarInicio(in);
}
void pila::eliminar(void){
	eliminarInicio();
}
