#include "Restaurante.h"

Restaurante::Restaurante(string nombre, string ced_juridica, string direcc, string tipo_comida, int cant_pedidos) {
	
	this->nombre = nombre;
	this->ced_juridica = ced_juridica;
	this->direcc = direcc;
	this->tipo_comida = tipo_comida;
	this->cant_pedidos = cant_pedidos;
	this->total = 0;
	
	double x = 4000.00;
	
	for (int i = 0;i < 9;i++) {
		
		combos[i] = x;
		x += 1000.00;
		
	}
	
}

Restaurante::~Restaurante() {
	
}

//sets

void Restaurante::set_nombre(string nombre) {
	
	this->nombre = nombre;
	
}

void Restaurante::set_ced_juridica(string ced_juridica) {
	
	this->ced_juridica = ced_juridica;
	
}

void Restaurante::set_direcc(string direcc) {
	
	this->direcc = direcc;
	
}

void Restaurante::set_tipo_comida(string tipo_comida) {
	
	this->tipo_comida = tipo_comida;
	
}

void Restaurante::set_cant_pedidos() {
	
	this->cant_pedidos+=1;
	
}

void Restaurante::set_total(double total){
	
	this->total=total;
	
}

//gets

string Restaurante::get_nombre() {
	
	return nombre;
	
}

string Restaurante::get_ced_juridica() {
	
	return ced_juridica;
	
}

string Restaurante::get_direcc() {
	
	return direcc;
	
}

string Restaurante::get_tipo_comida() {
	
	return tipo_comida;
	
}

int Restaurante::get_cant_pedidos() {
	
	return cant_pedidos;
	
}

double Restaurante::get_total(){
	
	return total;
	
}

//methods

string Restaurante::tostringRest() {
	
	stringstream x;
	
	x << "Nombre: " << get_nombre() << endl;
	x << "Cedula juridica: " << get_ced_juridica() << endl;
	x << "Direccion: " << get_direcc() << endl;
	x << "Tipo de comida: " << get_tipo_comida() << "\n\n";
	
	/*
	x << "Combos: " << "\n\n";
	
	for (int i = 0;i < 9;i++) {
		
		x << "Combo: " << i + 1 << "	 Precio: " << combos[i] << endl;
		
	}
	*/
	
	return x.str();
	
}
