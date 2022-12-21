#include "arbol.h"

arbol::arbol()
{
	setRaizPtr(0);
}

arbol::~arbol()
{
	;
}

nodoArbol* arbol::getRaizPtr(){
    return raizPtr;	
}
void arbol::setRaizPtr(nodoArbol* a){
	raizPtr=a;
}
void arbol::imprimir(){
	cout<<"La raiz apunta a:"<<getRaizPtr()<<endl;
}

nodoArbol*& arbol::tres(){
	return raizPtr;
}

void arbol::insertar(persona i){
	ayudaInsertar(i,tres());
}

void arbol::ayudaInsertar(persona a,nodoArbol*& raizLocal){
	if(raizLocal==0){
		nodoArbol* temp= new nodoArbol(a);
		raizLocal = temp;
		cout<<"Dato insertado "<<a.getNombre()<<endl;
	}
	else{
		if(a.getNombre()<raizLocal->getValor().getNombre()){
			cout<<"Dato insertado por la izquierda "<<a.getNombre()<<endl;
			ayudaInsertar(a,raizLocal->uno());	
		}
		else{
			if(a.getNombre()>raizLocal->getValor().getNombre()){
				cout<<"Dato insertado por la derecha "<<a.getNombre()<<endl;
				ayudaInsertar(a,raizLocal->dos());
			}
			else{
			 	cout<<"Dato duplicado "<<a.getNombre()<<endl;
			}		
		}
	}
}

void arbol::inOrden(){
	mostrarInOrden(getRaizPtr());
}

void arbol::mostrarInOrden(nodoArbol* raizLocal){
	if(raizLocal!=0){
		mostrarInOrden(raizLocal->getIzPtr());
		cout<<raizLocal->getValor().getNombre()<<endl;
		mostrarInOrden(raizLocal->getDePtr());
	}
}
/*
void arbol::preorden(){
	mostrarPreOrden(getRaizPtr());
}

void arbol::mostrarPreOrden(nodoArbol * raizLocal){
	if(raizLocal == NULL){
		return;
	}
	cout<<raizLocal -> getValor() <<" ";
	mostrarPreOrden(raizLocal->getIzPtr());
	mostrarPreOrden(raizLocal->getDePtr());
}

void arbol::posorden(){
	mostrarPosOrden(getRaizPtr());
}
void arbol::mostrarPosOrden(nodoArbol * raizLocal){
	if(raizLocal == NULL){
		return;
	}
	mostrarPosOrden(raizLocal->getIzPtr());
	mostrarPosOrden(raizLocal->getDePtr());
	cout<<raizLocal -> getValor() <<" ";
}
//HACERLO CON PRE-ORDER Y POS-ORDER
*/
void arbol::leer(){
	ifstream archivo;
	string n;
	persona p;
	archivo.open("datosPersonas.txt",ios::in);
	if(archivo.fail()){
		cout<<"No se puede abrir el archivo";
		exit(1);
	}
	else{
		while(!archivo.eof()){
		    archivo>>n;
			p.setNombre(n);
		    insertar(p);
		}
	}
	
	cout<<"Datos ingresados"<<endl;
}
