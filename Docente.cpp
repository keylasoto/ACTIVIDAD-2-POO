#include "Persona.cpp"
#include <iostream>
using namespace std;

class Docente:public Persona{
	//Atributos
	private: 
	string codigo;
	string nit;
	float salario;
	string profesion;
	
	//Constructor
	public:
		Docente(){
		}
		//Setter
		void setDatos(string cod,string n,float sal,string prof){
			codigo=cod;
			nit=n;
			salario=sal;
			profesion=prof;
		}
		//Getter
		string getCodigo(){return codigo;}
		string getNit(){return nit;}
		float getSalario(){return salario;}
		string getProfesion(){return profesion;}
		//Leer
		void leer(){
			Persona:leer();
			cout<<"Codigo: ";
			cin>>codigo;
			cout<<"NIT: ";
			cin>>nit;
			cout<<"Salario: ";
			cin>>salario;
			cout<<"Profesion: ";
			cin>>profesion;
		}

};
