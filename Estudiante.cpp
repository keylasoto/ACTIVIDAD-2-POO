#include"Persona.cpp"
#include "Persona.cpp"
#include <iostream>
using namespace std;

class Estudiante:public Persona{
	//Atributos
	private:
		string carnet;
	//Constructor
	public:
		Estudiante(){
		}
	//Setter
	void setCarnet(string carn){
		carnet=carn;
	}
	//Getter
	string getCarnet(){return carnet;}
	//Leer
	void leer(){
		Persona:
		:leer();
		cout<<"Carnet: ";
		cin>>carnet;
	}
};
