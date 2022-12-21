#ifndef PERSONA_H
#define PERSONA_H
#include<string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::ios;


class persona 
{
	private:
		string nombre;
		char sexo;
		int edad;
	public:
		persona();
		~persona();
		void setNombre(string);
		void setEdad(int);
		void setSexo(char);
		string getNombre();
		char getSexo();
		int getEdad();
		void imprimir();
		
	protected:
};

#endif
