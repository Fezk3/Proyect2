#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <sstream>

using namespace std;

class Persona 
{
	
private:
	
	string nombre;
	string cedula;
	string num_tel;
	string num_tarje;
	bool estado;
	string correo;
	string direccion;
	
public:
	
	Persona();
	Persona(string, string, string, string, bool, string, string);
	~Persona();
	
	//sets
	
	void set_nombre(string nombre);
	void set_cedula(string cedula);
	void set_num_tel(string num_tel);
	void set_num_tarje(string num_tarje);
	void set_estado(bool estado);
	void set_correo(string correo);
	void set_direccion(string direccion);
	
	//gets
	
	string get_nombre();
	string get_cedula();
	string get_num_tel();
	string get_num_tarje();
	bool get_estado();
	string get_correo();
	string get_direccion();
	
	//tostring
	
	string TostringPer();
	
};

#endif
