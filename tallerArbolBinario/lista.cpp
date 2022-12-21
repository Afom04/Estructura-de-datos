#include "lista.h"


#include <fstream>
using std::ifstream;
using std::ofstream;

lista::lista() {
	setprimerPtr(0);
	setultimoPtr(0);
}

lista::~lista() {
	;
}

void lista::setprimerPtr(nodo * p) {
	primerPtr = p;
}
void lista::setultimoPtr(nodo * u) {
	ultimoPtr = u;
}
nodo * lista::getprimerPtr() {
	return primerPtr;
}
nodo * lista::getultimoPtr() {
	return ultimoPtr;
}
void lista::imprimir() {
	cout<<"PrimerPtr = "<<getprimerPtr()<<endl;
	cout<<"UltimoPtr = "<<getultimoPtr()<<endl;
}
void lista::insertarFinal(producto a) {
	nodo* temp = new nodo(a);
	if(getultimoPtr()==0) {
		setprimerPtr(temp);
		setultimoPtr(temp);
	} else {
		ultimoPtr -> setSiguientePtr(temp);
		setultimoPtr(temp);
	}
}
void lista::insertarInicio(producto a) {
	nodo* temp = new nodo(a);
	if(getprimerPtr()==0) {
		setultimoPtr(temp);
		setprimerPtr(temp);
	} else {
		temp -> setSiguientePtr(getprimerPtr());
		setprimerPtr(temp);
	}
}

void lista::eliminarFinal() {

	nodo* aux = getprimerPtr();
	if(getprimerPtr()==0) {
		cout<<"La lista esta vacia";
	} else {
		nodo * aux2= getultimoPtr();
		while(aux-> getSiguientePtr() != getultimoPtr()) {
			aux = aux->getSiguientePtr();
		}
		aux ->setSiguientePtr(0);
		setultimoPtr(aux);
		delete aux2;
	}
}
/*

struct nodo*p;
if(lista!=NULL)
 {
 p=lista;
 lista=lista->sgte;
 delete(p);
 }
*/
void lista::eliminarInicio() {
	nodo* aux = getprimerPtr();
	if(getultimoPtr()==0) {
		cout<<"La lista esta vacia";
	} else {
		nodo * aux2= getprimerPtr();
		aux =aux ->getSiguientePtr();
		setprimerPtr(aux);
		delete aux2;
	}
	
}

void lista::mostrar() {
	cout<<endl;
	nodo* aux = getprimerPtr();
	if(getprimerPtr()==0)
		cout<<"La estructura esta vacia";
	while(aux != 0) {
		aux->getValor().imprimir();
		aux = aux->getSiguientePtr();
	}
}

void lista::leer() {
	ifstream entrada("datosProdructo.txt");
	string n;
	int p;
	while(!entrada.eof()) {
		entrada>>n>>p;
		producto x(n,p);
		insertarFinal(x);
	}
}

/*void lista::guardar(){
	ofstream salida("DatosLista.txt");
	nodo* aux = getprimerPtr();
	if(getprimerPtr()==0)
		cout<<"La estructura esta vacia";
	while(aux != 0) {
		salida>>aux->getValor().imprimir();
		aux = aux->getSiguientePtr();
	}
}*/
