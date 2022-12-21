
#include "lista.h"
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::ios;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(lista);
void leer(lista);
producto asignar();
void guardar(lista);
int main(int argc, char** argv) {
	lista mercado;
	menu(mercado);
	return 0;
}
void menu(lista x) {
	int n=0;
	cout<<"Por favor ingrese la opcion a elegir"<<endl;
	cout<<"1.Leer datos del archivo .txt"<<endl;
	cout<<"2.Mostrar los datos de la lista"<<endl;
	cout<<"3.Insertar datos al inicio de la lista"<<endl;
	cout<<"4.Insertar datos al final de la lista"<<endl;
	cout<<"5.Eliminar datos al inicio de la lista"<<endl;
	cout<<"6.Eliminar datos al final de la lista"<<endl;
	cout<<"7.Guardar los datos en archivo .txt"<<endl;
	cout<<"8.Salir"<<endl;
	cin>>n;
	switch (n) {
		case 1:
			leer(x);
			menu(x);
			break;
		case 2:
			x.mostrar();
			menu(x);
			break;
		case 3:
			x.insertarPrincipio(asignar());
			menu(x);
			break;
		case 4:
			x.insertarFinal(asignar());
			menu(x);
			break;
		case 5:
			x.eliminarPrincipio();
			break;
			menu(x);
		case 6:
			x.eliminarFinal();
			break;
			menu(x);
		case 7:
			guardar(x);
			break;
		case 8:
			cout<<"Gracias por usar el programa"<<endl;
			break;
		default:
			cout<<"Opcion ingresada no valida"<<endl;
			menu(x);
	}

}
void leer(lista x) {
	ifstream entrada("datosP.txt");
	string n;
	int p=0;
	while(!entrada.eof()) {
		entrada>>p>>n;
		producto a(n,p);
		x.insertarFinal(a);
	}
	entrada.close();
	menu(x);
}
producto asignar() {
	int precio=0;
	string nombre;
	cout<<"Ingrese el nombre del producto"<<endl;
	cin>>nombre;
	cout<<"Ingrese el precio del producto"<<endl;
	cin>>precio;
	producto a(nombre,precio);
	return a;
}
void guardar(lista x) {
	ofstream salida("datosLista.txt", ios::app);
	nodo* aux = x.getPrimerPtr();
	if(x.getPrimerPtr()==0)
		cout<<"No hay nada para guardar";
	while(aux != 0) {
		salida<<aux->getValor().getNombre()<<" "<<aux->getValor().getPrecio()<<endl;
		aux = aux->getSiguientePtr();
	}
	salida.close();
	menu(x);
}
