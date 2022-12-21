#include "producto.h"
#include <iostream>
using std::cout;
using std::endl;

producto::producto() {//Declaracion del constructor de la clase
	setProducto("");
	setPrecio(0);
}

producto::producto(string a, int b) {//Constructor sobrecargado de la clase
	setProducto(a);
	setPrecio(b);
}

producto::~producto() {//Destructor de la clase
	cout<<"."<<endl;
}

void producto::setProducto(string m) {//Metodo encargado de asignar valores a los atributos de la clase
	nombre = m;
}

void producto::setPrecio(int p) {//Metodo encargado de asignar valores a los atributos de la clase
	precio = p;
}

string producto::getProducto() {//Metodo encargado de retornar los valores de los atributos de la clase
	return nombre;
}

int producto::getPrecio() {//Metodo encargado de retornar los valores de los atributos de la clase
	return precio;
}

void producto::imprimir() {//Metodo encargado de traer ambos atributos de la clase para mostrar al usuario
	cout<<"Producto: "<<getProducto()<<endl;
	cout<<"Precio: "<<getPrecio()<<endl;
}
