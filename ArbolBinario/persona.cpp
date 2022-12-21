#include "persona.h"

persona::persona()
{
	setNombre("NN");
	setEdad(0);
	setSexo('N');
}

persona::~persona()
{
	;
}

void persona::setNombre(string n){
	nombre=n;
}
void persona::setEdad(int e){
	edad=e;
}
void persona::setSexo(char s){
	sexo=s;
}
string persona::getNombre(){
	return nombre;
}
char persona::getSexo(){
	return sexo;
}
int persona::getEdad(){
	return edad;
}

void persona::imprimir(){
	cout<<"Nombre: "<<getNombre()<<"Sexo: "<<getSexo()<<"Edad: "<<getEdad();
}

