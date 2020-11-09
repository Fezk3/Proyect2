#include "Pedido.h"

int Pedido::num = 1;

Pedido::Pedido(string id_clie,string nombre_rest,string cli_direcc,string estado, string contenido, double precio,string id_reparti) {
	
	int num_pedido = num;
	this->id_clie=id_clie;
	this->nombre_rest=nombre_rest;
	this->cli_direcc=cli_direcc;
	this->contenido = contenido;
	this->estado = estado;
	this->id = num_pedido;
	this->precio = precio;
	this->id_reparti = id_reparti;
	this->hora_final="";
	this->hora_inicio="";
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
void Pedido::set_hora_ini() {
	
	string  hour=to_string(ObtineHora());
	string mins=to_string(ObtineMinutos());
	string Com = hour+":"+mins;
	this->hora_inicio = Com;
	
}
void Pedido::set_hora_fin() {
	
	string  hour=to_string(ObtineHora());
	string mins=to_string(ObtineMinutos());
	string Com = hour+":"+mins;
	this->hora_final = Com;
	
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
	x << "Cliente: " << get_id_clie() << endl;
	x << "Repartidor: " << get_id_reparti() << endl;
	x << "Direccion: " << get_cli_direcc() << endl;
	x << "Restaurante: "<<get_nombre_rest() << endl;
	x << "Estado: " << get_estado() << endl;
	x << "Pedido: \n" << get_contenido() << endl;
	x << "Total a pagar con IVA: "<< get_precio()<<endl;
	x << "\nHora de preparacion: " << hora_inicio << endl;
	x << "Hora de entrega: " << hora_final << endl;

	return x.str();
	
}

int Pedido::ObtineHora( ) {
	
	int hora=0;
	time_t now=time(0);
	tm * time=localtime(&now);
	
	hora=time->tm_hour;
	
	return hora;
	
}
int Pedido::ObtineMinutos( ) {
	int minutos=0;
	time_t now=time(0);
	tm * time=localtime(&now);
	
	minutos=time->tm_min;
	
	return minutos;
}

