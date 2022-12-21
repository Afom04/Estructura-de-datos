#include "nodoArbol.h"

nodoArbol::nodoArbol(){
	setLeftPtr(0);
	setRightPtr(0);
	//setValor(0);
}

nodoArbol::nodoArbol(producto a){
	setValor(a);
	setLeftPtr(0);
	setRightPtr(0);
}

nodoArbol::~nodoArbol(){
	;
}

void nodoArbol::setLeftPtr(nodoArbol *i){
	leftPtr = i;
}
void nodoArbol::setRightPtr(nodoArbol *d){
	rightPtr = d;
}
void nodoArbol::setValor(producto v){
	valor = v;
}

nodoArbol* nodoArbol::getLeftPtr(){
	return leftPtr;
}
nodoArbol* nodoArbol::getRightPtr(){
	return rightPtr;
}
producto nodoArbol::getValor(){
	return valor;
}

void nodoArbol::imprimir(){
	cout<<"Nodo izquierdo = "<<getLeftPtr()<<endl;
	cout<<"Nodo derecho = "<<getRightPtr()<<endl;
	cout<<"Dato producto = "<<endl;
	getValor().imprimir();
}

nodoArbol * & nodoArbol::uno()
{
	return leftPtr;
}
nodoArbol * & nodoArbol::dos()
{
	return rightPtr;	
}

