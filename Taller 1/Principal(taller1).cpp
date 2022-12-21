/*
La función main() controla la ejecución de las funciones leer(xxx),
mostrar(xxx) y guardar(xxx, yyy), las cuales se implementan utilizando plantillas
(template<class T>).*/
#include <iostream>
#include <string>//Inclusion de bibliotecas 
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using std::cout;
using std::cin;
using std::endl;//Declaracion del estandar de salida y entrada 
using std::string;
using std::ofstream;
template<class LLENAR>//Declaracion de plantilla para que la funcion llene las matrices numericas
void llenar(LLENAR [][2]);
template<class LEER>//Declaracion de plantilla que se usara para la funcion que recibe datos
void leer(LEER [][2]);
template<class MOSTRAR>//Declaracion de plantilla que se usara para la funcion que muestra los datos
void mostrar(MOSTRAR [][2]);
template<class GUARDAR>//Declaracion de plantilla que se usara para la funcion que guarda en .txt
void guardar(GUARDAR [][2],string );
int main(int argc, char** argv) {
	int edad [3][2];//Definicion de matrices que guardan la informacion
	string nombre [3][2];
	float precio [3][2];
	llenar (edad);//Envio de las matrices a las funciones que se inicialice su valor las matrices numericas(añadido por el estudiante)
	llenar (precio);
	leer (edad);//Envio de las matrices a las funciones que llenan su valor por medio del usuario
	leer (precio);
	leer (nombre);
	mostrar (edad);//Envio de matrices para que las funciones muestren que hay en ellas
	mostrar (precio);
	mostrar (nombre);
	guardar (nombre, "arregloNombre.txt");//Envio de matrices y un nombre de archivo para que se guarden en un .txt
	guardar(edad, "arregloEdad.txt");
	guardar(precio,"arregloPrecio.txt");
	return 0;
}
template<class LLENAR>//Plantilla para que se inicialice cualquier tipo de dato numerico
void llenar(LLENAR a[][2]){//Funcion que se encarga de inicializar las matrices numericas
    for(int i=0;i<3;i++){
        for(int o=0;o<2;o++){
            a[i][o]=0;
        }
    }
}
template<class LEER>//Plantilla para que se ingrese cualquier tipo de dato
void leer(LEER b[][2]) {//Funcion que se encarga de correr la matriz para hacer ingreso de datos
	cout<<"Por favor ingrese los valores"<<endl;
	for (int i=0; i<3; i++) {
		for(int o=0; o<2; o++) {
		    cout<<"Dato "<<i+1<<"-"<<o+1<<endl;
			cin>>b[i][o];
		}
		cout<<endl;
	}
}
template<class MOSTRAR>//Plantilla para que se muestre cualquier tipo de dato
void mostrar(MOSTRAR b[][2]) {//Funcion que se encarga de correr la matriz para mostrar los valores digitados
    cout<<"------------------------------------------------------------"<<endl;
	cout<<"Valores digitados"<<endl;
	for(int i=0; i<3; i++) {
		for(int j=0; j<2; j++) {
			cout<<b[i][j]<<"\t";
		}
		cout<<endl;
	}
}
template<class GUARDAR>//Plantilla para que se guarde cualquier tipo de dato en un .txt
void guardar(GUARDAR c[][2],string d) {//Funcion que se encarga de correr la matriz para guardar en un .txt los valores de las matrices
	ofstream salida(d.c_str());
	cout<<"------------------------------------------------------------"<<endl;
	cout<<"Valores guardados"<<endl;
	salida<<"Valores guardados"<<endl;
	for(int i=0; i<3; i++) {
		for(int j=0; j<2; j++) {
			salida<<c[i][j]<<"\t";
		}
		salida<<endl;
	}
}
