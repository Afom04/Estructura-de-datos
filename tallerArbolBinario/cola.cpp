#include "cola.h"

cola::cola()
{
}

cola::~cola()
{
}

void cola::insertar(producto in){
	insertarFinal(in);
}
void cola::eliminar(void){
	eliminarInicio();
} 
