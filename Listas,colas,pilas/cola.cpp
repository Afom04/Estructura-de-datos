#include "cola.h"

cola::cola()
{
}

cola::~cola()
{
}
void cola::insertar(producto a){
	insertarFinal(a);
}
void cola::eliminar(){
	eliminarPrincipio();
}
