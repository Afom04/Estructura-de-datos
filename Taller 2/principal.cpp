
#include <iostream>//Inclucion de bibliotecas y funcionalidades a usar
using std::cout;
using std::endl;

#include<fstream>
using std::ifstream;

#include "producto.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void leer(producto[][2]);//Prototipo de funciones que se usan
void mostrar(producto[][2]);
void promedio(producto[][2]);

int main(int argc, char** argv) {//Codigo main dado por el docente
	producto estante[5][2];//Declaracion de un objeto-matriz estante del tipo producto
	mostrar (estante);
	promedio (estante);
	leer (estante);
	mostrar (estante);
	promedio (estante);
	return 0;
}
void leer(producto p[][2]) {//Definicion de funcion encargada de leer el archivo txt para cargar la matriz 
	string o;//Variable que obtendra del archivo el nombre del producto
	int c, i=0, j=0;//Variable "c" que tomara el valor del producto
	ifstream entrada("datosProductos.txt");//Objeto de tipo "ifstream" para leer el archivo
	while(!entrada.eof() && i<5) {//Por medio del ciclo while se leera el archivo hasta el fin y tamaño de la matriz
		entrada>>o>>c;
		producto a(o,c);//Sobrecarga del constructor de la clase para asignar los valores del txt
		p[i][j] = a;
		j++;
		if(j==2) {
			j=0;
			i++;
		}
	}
}
void mostrar(producto p[][2]) {//Funcion encargada de leer y mostrar los valores que tomo la matriz en cada espacio
	for(int i=0; i<5; i++) {
		for(int j=0; j<2; j++) {
		    cout<<i<<"-"<<j;
			p[i][j].imprimir();//Por medio del metodo de la clase mostramos los valores de la clase que se guardaron anteriormente
			cout<<endl;
		}
	}
}
void promedio(producto p[][2]) {//Funcion encargada de calcular el promedio de los productos de la matriz estante
	int suma=0, i, j;//Variables que toman valor de acumulacion de los productos y el espacio del estante
	int promedio=0;//Variable que guarda el promedio
	for(i=0; i<5; i++) {
		for(j=0; j<2; j++) {
			suma += p[i][j].getPrecio();//Acumulacion de valores de los productos
		}
	}
	promedio = suma/(i*j);//Calculo del promedio
//	cout<<"El numero de productos en el estante es de "<<(i*j)<<endl;
	cout<<"El promedio del precio de los productos en el estante es: "<<promedio<<endl;
}
