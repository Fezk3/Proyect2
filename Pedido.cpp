#include "Pedido.h"

int Pedido::num = 1;

Pedido::Pedido(string id_clie,string nombre_rest,string cli_direcc,string estado, string contenido, double precio, string hora_inicio, string hora_final,string id_reparti) {
	
	int num_pedido = num;
	this->id_clie=id_clie;
	this->nombre_rest=nombre_rest;
	this->cli_direcc=cli_direcc;
	this->contenido = contenido;
	this->estado = estado;
	this->id = num_pedido;
	this->precio = precio;
	this->hora_inicio = hora_inicio;
	this->hora_final = hora_final;
	this->id_reparti = id_reparti;
	
	num ++;
	
}

Pedido::~Pedido(){
}

//Sets

void Pedido::set_id_clie(string id_clie){
	
	this->id_clie=id_clie;
	
}
void Pedido::set_id_reparti(string id_reparti){
	
	this->id_reparti=id_reparti;
	
}
void Pedido::set_cli_direcc(string cli_direcc){
	
	this->cli_direcc=cli_direcc;
	
}
void Pedido::set_nombre_rest(string nombre_rest){
	
	this->nombre_rest=nombre_rest;
	
}
void Pedido::set_estado(string estado) {
	
	this->estado = estado;
	
}
void Pedido::set_id(int id) {
	
	this->id = id;
	
}
void Pedido::set_contenido(string  contenido){
	
	this->contenido = contenido;
	
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

string Pedido::get_id_clie(){
	
	return id_clie;
	
}
string Pedido::get_id_reparti(){
	
	return id_reparti;
	
}
string Pedido::get_cli_direcc(){
	
	return cli_direcc;
	
}
string Pedido::get_nombre_rest(){
	
	return nombre_rest;
	
}

string Pedido::get_estado() {
	
	return estado;
	
}
int Pedido::get_id() {
	
	return id;
	
}
string Pedido::get_contenido(){
	
	return contenido;
	
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
	x << "Restaurante: "<<get_nombre_rest() << endl;
	x << "Estado: " << get_estado() << endl;
	x << "Pedido: \n" << get_contenido() << endl;
	x << "Hora de preparacion: " << get_hora_ini() << endl;
	x << "Hora de entrega: " << get_hora_fin() << endl;

	return x.str();
	
}
