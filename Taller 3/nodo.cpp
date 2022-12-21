#include "nodo.h"

nodo::nodo() {
	//setValor(0);
	setSiguientePtr(0);
}

nodo::nodo(producto a) {
	setValor(a);
	setSiguientePtr(0);
}


nodo::~nodo() {
	;
}

void nodo::setValor(producto v) {
	valor=v;
}
void nodo::setSiguientePtr(nodo * s) {
	siguientePtr=s;
}

producto nodo::getValor() {
	return valor;
}
nodo * nodo::getSiguientePtr() {
	return siguientePtr;
}

void nodo::imprimir() {
	cout<<"El valor del nodo es: "<<endl;
	getValor().imprimir();
	cout<<"\nEl nodo apunta a: "<<getSiguientePtr()<<endl;
}

