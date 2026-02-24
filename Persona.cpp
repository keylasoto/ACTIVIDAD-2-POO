#include <iostream>
using namespace std;
class Persona{
	//Atributos
	protected:
	string cui,nombres,apellidos,direccion,fecha_nacimiento;
	int telefono;
	bool genero;
	//Constructor
	protected: 
	Persona(){
	}
	Persona(string cui, string nom, string ape, string dir,string fn, int tel, bool gen){
		cui=cui;
		nombres=nom;
		apellidos=ape;
		direccion=dir;
		fecha_nacimiento=fn;
		telefono=tel;
		genero=gen;
	}
	void actualizar();
	void borrar();
};
