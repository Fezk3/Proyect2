#include "Cliente.h"

Cliente::Cliente(string nombre, string cedula, string num_tel, string num_tarje, bool estado, string correo, string direccion,int Num_Pedidos) :Persona(nombre, cedula, num_tel, num_tarje, estado, correo, direccion) {
	
	this->Num_Pedidos=Num_Pedidos;
}

Cliente::Cliente(){
	
	nombre = "";
	cedula = "";
	num_tel = "";
	num_tarje = "";
	estado = true;
	correo = "";
	direccion = "";
	Num_Pedidos = 0;
	
}

Cliente::~Cliente() {
	
}

void Cliente::Aumentar(){
	
	this-> Num_Pedidos++;
	
}

int Cliente::getNum_Pedidos(){
	
	return Num_Pedidos;
	
}

string Cliente::TostringCliente(){
	
	stringstream ss;
	
	ss<<TostringPer();
	ss<<"Pedidos realizados: "<<Num_Pedidos<<"\n";
	
	return ss.str();
	
}

void Cliente::autosave(ofstream &z){
	
	z << nombre <<endl;
	z << cedula <<endl;
	z << num_tel <<endl;
	z << num_tarje <<endl;
	z << estado <<endl;
	z << correo <<endl;
	z << direccion <<endl;
	z << Num_Pedidos <<endl;
	
}

Cliente& Cliente::autoread(ifstream &z){
	
	string nombre1, cedula1, num_tel1, num_tarje1, correo1, direccion1;
	bool estado1;
	int Num_Pedidos1;
	
	getline(z, nombre1);
	z >> cedula1;
	z >> num_tel1;
	z >> num_tarje1;
	z >> estado1;
	z >> correo1;
	z >> direccion1;
	z >> Num_Pedidos1;
	
	z.ignore();
	
	return (*new Cliente(nombre1, cedula1, num_tel1, num_tarje1, estado1, correo1, direccion1, Num_Pedidos1));
	
}
