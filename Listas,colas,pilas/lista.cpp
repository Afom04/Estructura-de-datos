#include "lista.h"


lista::lista()
{
	setPrimerPtr(0);
	setUltimoPtr(0);
}

lista::~lista()
{
	;
}

void lista::setPrimerPtr(nodo * p)
{
	primerPtr = p;
}

void lista::setUltimoPtr(nodo * u)
{
	ultimoPtr = u;
}

nodo * lista::getPrimerPtr()
{
	return primerPtr;
}

nodo * lista::getUltimoPtr()
{
	return ultimoPtr;
}

void lista::imprimir()
{
	cout<<"\nPrimerPtr = "<<getPrimerPtr();
	cout<<"\nUltimoPtr = "<<getUltimoPtr();
}

void lista::insertarFinal(producto a)
{
	nodo * temp = new nodo(a);
	if(getUltimoPtr()==0)
	{
		setPrimerPtr(temp);
		setUltimoPtr(temp);
	}
	else
	{
		ultimoPtr->setSiguientePtr(temp);
		setUltimoPtr(temp);
	}
}

void lista::insertarPrincipio(producto a)
{
	nodo * temp = new nodo(a);
	if(getPrimerPtr()==0)
	{
		setPrimerPtr(temp);
		setUltimoPtr(temp);
	}
	else
	{
		temp->setSiguientePtr(primerPtr);
		setPrimerPtr(temp);
	}
}

void lista::mostrar()
{
	nodo * aux = getPrimerPtr();
	if(getPrimerPtr()==0)
	{
		cout<<"\nLa estructura esta vacia\n";
	}
	while(aux!=0)
	{
		aux->getValor().imprimir();
		//cout<<aux->getSiguientePtr()<<endl;
		aux=aux->getSiguientePtr(); //los apuntadores no pueden usar '.', los apuntadores usan ->
	}
}

void lista::leer()
{
	ifstream entrada("datosProductos.txt");
	
	string n; int p;
	
	while(!entrada.eof())
	{
		entrada>>n>>p;
	//	if(p<1000)
	//	{
			producto x(n,p);

			//insertarPrincipio(x);
			insertarFinal(x);
	//	}
	}
}

void lista::eliminarFinal()
{
	nodo * aux = getPrimerPtr();
	if(getPrimerPtr()==0)
	{
		cout<<"\nLa lista esta vacia\n";
	}
	else
	{
		nodo * aux2=getUltimoPtr();
		while(aux->getSiguientePtr()!=getUltimoPtr())
		{
			aux=aux->getSiguientePtr(); //los apuntadores no pueden usar '.', los apuntadores usan ->
		}
		aux->setSiguientePtr(0);
		setUltimoPtr(aux);
		delete aux2;
	}
}

void lista::eliminarPrincipio()
{
	if(getPrimerPtr()==0)
	{
		cout<<"\nLa lista esta vacia\n";
	}
	else
	{
		nodo * aux = getPrimerPtr();
		nodo * aux2= getPrimerPtr();
		aux=aux->getSiguientePtr(); //los apuntadores no pueden usar '.', los apuntadores usan ->
		aux2->setSiguientePtr(0);
		setPrimerPtr(aux);
		delete aux2;
	}
}
