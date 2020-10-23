#include "Repartidor.h"

Repartidor::Repartidor(string nombre, string num_cedula, int num_tel, string num_tarje, bool estado, string correo, string direccion, float num_kms_diario, int num_amonesta) : Persona(nombre, num_cedula, num_tel,num_tarje, estado, correo, direccion) {
	
	this->num_kms_diario = num_kms_diario;
	this->num_amonesta = num_amonesta;
	
}
Repartidor::~Repartidor() {
	
}

//sets

void Repartidor::set_num_kms_diario(float num_kms_diario) {
	
	this->num_kms_diario = num_kms_diario;
	
}
void Repartidor::set_num_amonesta(int num_amonesta) {
	
	this->num_amonesta = num_amonesta;
	
}

//gets

float Repartidor::get_num_kms_diario() {
	
	return num_kms_diario;
	
}
int Repartidor::get_num_amonesta() {
	
	return num_amonesta;
	
}

//Methods

void Repartidor::set_estado_pedido(string estado){
	
	p1->set_estado(estado);
	
}

string Repartidor::get_estado_pedido(){
	
	return p1->get_estado();
	
}

string Repartidor::tostringRepa() {
	
	stringstream x;
	
	x << TostringPer();
	x << "Numero de kms diario: " << get_num_kms_diario() << endl;
	x << "Numero de amonestaciones: " << get_num_amonesta() << endl;
	
	return x.str();
	
}
