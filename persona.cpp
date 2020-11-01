#include "Persona.h"

Persona::Persona() {
	
	nombre = "";
	cedula = "";
	num_tel = "";
	num_tarje = "";
	estado = false;
	correo = "";
	direccion = "";
	
}

Persona::Persona(string nombre, string cedula, string num_tel, string num_tarje, bool estado, string correo, string direccion) {
	
	this->nombre = nombre;
	this->cedula = cedula;
	this->num_tel = num_tel;
	this->num_tarje = num_tarje;
	this->estado = estado;
	this->correo = correo;
	this->direccion = direccion;
	
}

Persona::~Persona() {
	
}

//sets

void Persona::set_nombre(string nombre) {
	
	this->nombre = nombre;
	
}

void Persona::set_cedula(string cedula) {
	
	this->cedula = cedula;
	
}

void Persona::set_num_tel(string num_tel) {
	
	this->num_tel = num_tel;
	
}

void Persona::set_num_tarje(string num_tarje) {
	
	this->num_tarje = num_tarje;
	
}

void Persona::set_estado(bool estado) {
	
	this->estado = estado;
	
}

void Persona::set_correo(string correo) {
	
	this->correo = correo;
	
}

void Persona::set_direccion(string direccion) {
	
	this->direccion = direccion;
	
}
//gets

string Persona::get_nombre() {
	
	return nombre;
	
}

string Persona::get_cedula() {
	
	return cedula;
	
}

string Persona::get_num_tel() {
	
	return num_tel;
	
}

string Persona::get_num_tarje() {
	
	return num_tarje;
	
}

bool Persona::get_estado() {
	
	return estado;
	
}

string Persona::get_correo() {
	
	return correo;
	
}

string Persona::get_direccion() {
	
	return direccion;
	
}

//Methods

string Persona::TostringPer() {
	
	stringstream x;
	
	x << "Nombre: " << get_nombre() << endl;
	x << "Cedula: " << get_cedula() << endl;
	x << "Numero telefonico: " << get_num_tel() << endl;
	x << "Numero de tarjeta: " << get_num_tarje() << endl;
	
	if(get_estado() == true) {
		
		x << "Estado: Disponible"<< endl;
		
	}
	else {
		
		x << "Estado: Ocupado" << endl;
		
	}
	
	x << "Correo: " << get_correo() << endl;
	x << "Direccion: " << get_direccion() << endl;
	
	return x.str();
	
}
