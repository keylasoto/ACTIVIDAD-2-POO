#include <iostream>
#include "Docente.cpp"
#include "Estudiante.cpp"
using namespace std;

main(){
	Docente d1;
	cout<<"Ingresar docente: ";
	d1.leer();
	Estudiante e1;
	cout<<"Ingresar estudiante: ";
	e1.leer();
	
	return 0;
};
