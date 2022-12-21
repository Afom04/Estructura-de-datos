#include "nodoArbol.h"

nodoArbol::nodoArbol(){
	setIzPtr(0);
	setDePtr(0);
	//setValor(0);
}
nodoArbol::nodoArbol(persona v){
	setIzPtr(0);
	setDePtr(0);
	setValor(v);
}
nodoArbol::~nodoArbol(){
	;
}

void nodoArbol::setValor(persona v){
	valor=v;
}
void nodoArbol::setIzPtr(nodoArbol* iz){
	izPtr=iz;
}
void nodoArbol::setDePtr(nodoArbol* de){
	dePtr=de;
}
persona nodoArbol::getValor(){
	return valor;
}
nodoArbol* nodoArbol::getIzPtr(){
	return izPtr;
}
nodoArbol* nodoArbol::getDePtr(){
	return dePtr;
}
void nodoArbol::imprimir(){
	cout<<"Nodo izquierdo = "<<getIzPtr()<<endl;
	cout<<"Nodo derecho = "<<getDePtr()<<endl;
	cout<<"Persona = "<<getValor().getNombre()<<endl;
}

nodoArbol*& nodoArbol::uno(){
	return izPtr;
}
nodoArbol*& nodoArbol::dos(){
	return dePtr;
}
