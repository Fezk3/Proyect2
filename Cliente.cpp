#include "Cliente.h"

Cliente::Cliente(string nombre, string cedula, int num_tel, string num_tarje, bool estado, string correo, string direccion,int Num_Pedidos) :Persona(nombre, cedula, num_tel, num_tarje, estado, correo, direccion) {
	
	this->Num_Pedidos=Num_Pedidos;
}

Cliente::~Cliente() {
	
}

void Cliente::Aumentar(){
	
	Num_Pedidos++;
	
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
