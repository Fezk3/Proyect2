#include "Repartidor.h"

Repartidor::Repartidor(string nombre, string num_cedula, string num_tel, string num_tarje, bool estado, string correo, string direccion, float num_kms_diario, int num_amonesta) : Persona(nombre, num_cedula, num_tel,num_tarje, estado, correo, direccion) {
	
	this->num_kms_diario = num_kms_diario;
	this->num_amonesta = num_amonesta;
	
}

Repartidor::Repartidor(){
	
	nombre = "";
	cedula = "";
	num_tel = "";
	num_tarje = "";
	estado = true;
	correo = "";
	direccion = "";
	num_kms_diario = 0;
	num_amonesta = 0;
	
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

void Repartidor::autosave(ofstream&z){
	
	z << nombre <<endl;
	z << cedula <<endl;
	z << num_tel <<endl;
	z << num_tarje <<endl;
	z << estado <<endl;
	z << correo <<endl;
	z << direccion <<endl;
	z << num_kms_diario <<endl;
	z << num_amonesta <<endl;
	
}

Repartidor& Repartidor::autoread(ifstream&z){
	
	string nombre1, cedula1, num_tel1, num_tarje1, correo1, direccion1;
	bool estado1;
	float num_kms_diario1;
	int num_amonesta1;
	
	getline(z, nombre1);
	z >> cedula1;
	z >> num_tel1;
	z >> num_tarje1;
	z >> estado1;
	z >> correo1;
	z >> direccion1;
	z >> num_kms_diario1;
	z >> num_amonesta1;
	
	z.ignore();
	
	return(*new Repartidor(nombre1, cedula1, num_tel1, num_tarje1,estado1, correo1, direccion1, num_kms_diario1, num_amonesta1));
	
}

void Repartidor::AmonestarMas ( ) {
	num_amonesta++;
}

