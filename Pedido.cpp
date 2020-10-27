#include "Pedido.h"

int Pedido::num = 1;

Pedido::Pedido(string estado, double precio, string hora_inicio, string hora_final) {
	
	int num_pedido = num;
	
	this->estado = estado;
	this->id = num_pedido;
	this->precio = precio;
	this->hora_inicio = hora_inicio;
	this->hora_final = hora_final;
	
	num ++;
	
}

Pedido::~Pedido(){
}

//Sets

void Pedido::set_estado(string estado) {
	
	this->estado = estado;
	
}
void Pedido::set_id(int id) {
	
	this->id = id;
	
}
void Pedido::set_precio(double precio) {
	
	this->precio = precio;
	
}
void Pedido::set_hora_ini(string hora_ini) {
	
	this->hora_inicio = hora_ini;
	
}
void Pedido::set_hora_fin(string hora_fin) {
	
	this->hora_final = hora_final;
	
}

//Gets

string Pedido::get_estado() {
	
	return estado;
	
}
int Pedido::get_id() {
	
	return id;
	
}
double Pedido::get_precio() {
	
	return precio;
	
}
string Pedido::get_hora_ini() {
	
	return hora_inicio;
	
}
string Pedido::get_hora_fin() {
	
	return hora_final;
	
}

//Methods

string Pedido::tostring_pedido() {  //concatenar el combo en main y enviarlo
	
	stringstream x;
	
	x << "Id: " << get_id() << endl;
	x << "Estado: " << get_estado() << endl;
	x << "Hora de preparacion: " << get_hora_ini() << endl;
	x << "Hora de entrega: " << get_hora_fin() << endl;

	return x.str();
	
}
