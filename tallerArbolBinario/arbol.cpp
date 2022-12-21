#include "arbol.h"
#include <fstream>
using std::ifstream;
arbol::arbol() {
	setRaizPtr(0);
}

arbol::~arbol() {
	;
}

void arbol::setRaizPtr(nodoArbol * r) {
	raizPtr = r;
}
nodoArbol* arbol::getRaizPtr() {
	return raizPtr;
}

void arbol::insertar(producto i) {
	ayudaInsertar(i, raizPtr);
}
void arbol::ayudaInsertar(producto a, nodoArbol * &raizLocal) {
	if(raizLocal == 0) {
		nodoArbol *temp = new nodoArbol(a);
		raizLocal = temp;
		//cout<<"Dato insertado "<<a.getNombre()<<endl;
	} else {
		if(a.getPrecio() < raizLocal->getValor().getPrecio()) {
			//cout<<"Va por la izquierda "<<a.getNombre()<<endl;
			ayudaInsertar(a, raizLocal->uno());	
		} else {
			if(a.getPrecio() > raizLocal->getValor().getPrecio()) {
				//cout<<"Va por la derercha "<<a.getNombre()<<endl;
				ayudaInsertar(a, raizLocal->dos());
			} else {
				cout<<"Dato duplicado "<<a.getNombre()<<endl;
			}
		}
	}
}
void arbol::inOrden() {
	mostrarInorden(getRaizPtr());
}

void arbol::asignarInorden(pila & x){
	ayudaInorden(x, getRaizPtr());
}

void arbol::ayudaInorden(pila & x, nodoArbol * raizLocal){
	if( raizLocal != 0) {
		ayudaInorden(x, raizLocal->getLeftPtr());	
		x.insertar(raizLocal->getValor());
		ayudaInorden(x,raizLocal->getRightPtr());	
	}
}

void arbol::mostrarInorden(nodoArbol * raizLocal) {
	if( raizLocal != 0) {
		mostrarInorden(raizLocal->getLeftPtr());	
		cout<<raizLocal->getValor().getNombre()<<endl;
		mostrarInorden(raizLocal->getRightPtr());	
	}
}


void arbol::asignarPreorden(cola & x){
	ayudaPostorden(x, getRaizPtr());
}

void arbol::ayudaPreorden(cola & x, nodoArbol * raizLocal){
	if( raizLocal != 0) {
		x.insertar(raizLocal->getValor());
		ayudaPreorden(x, raizLocal->getLeftPtr());
		ayudaPreorden(x,raizLocal->getRightPtr());	
	}
}

void arbol::mostrarPreorden(nodoArbol * raizLocal) {
	if( raizLocal != 0) {
		cout<<raizLocal->getValor().getNombre()<<endl;
		mostrarInorden(raizLocal->getLeftPtr());	
		mostrarInorden(raizLocal->getRightPtr());	
	}
}

void arbol::posOrden() {
	mostrarPostorden(getRaizPtr());
}

void arbol::asignarPostorden(lista & x){
	ayudaPostorden(x, getRaizPtr());
}

void arbol::ayudaPostorden(lista & x, nodoArbol * raizLocal){
	if( raizLocal != 0) {
		ayudaPostorden(x, raizLocal->getLeftPtr());
		ayudaPostorden(x,raizLocal->getRightPtr());
		x.insertarFinal(raizLocal->getValor());	
	}
}

void arbol::mostrarPostorden(nodoArbol * raizLocal) {
	if( raizLocal != 0) {
		mostrarInorden(raizLocal->getLeftPtr());	
		mostrarInorden(raizLocal->getRightPtr());	
		cout<<raizLocal->getValor().getNombre()<<endl;
	}
}
void arbol::leer(string a) {
	ifstream entrada(a.c_str());
	string nom;
	int pre;
	while( !entrada.eof() ) {
		entrada>>nom>>pre;
		producto y(nom, pre);
		insertar(y);
	}
	cout<<"Datos leidos con exito"<<endl;
}
void arbol::imprimir() {
	cout<<"La raiz apunta a: "<<getRaizPtr()<<endl;
}
