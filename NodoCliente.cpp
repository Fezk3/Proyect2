#include "NodoCliente.h"

NodoCliente::NodoCliente(Cliente* Nuevo) {
	
	Client = Nuevo;
	siguiente = NULL;
	
}

NodoCliente::~NodoCliente() {
	
}

void NodoCliente::set_siguiente(NodoCliente* Nuevo) {
	
	siguiente = Nuevo;
	
}

NodoCliente* NodoCliente::get_siguiente() {
	
	return siguiente;
	
}

void NodoCliente::set_cliente(Cliente* Nuevo) {
	
	Client = Nuevo;
	
}
Cliente* NodoCliente::get_cliente() {
	
	return Client;
	
}
