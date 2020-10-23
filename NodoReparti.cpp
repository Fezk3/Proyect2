#include "NodoReparti.h"

NodoReparti::NodoReparti(Repartidor *dato) {
	
	this->dato = dato;
	this->sig = NULL;
	
}
NodoReparti::~NodoReparti() {
	
}

//sets

void NodoReparti::set_dato(Repartidor* dato) {
	
	this->dato = dato;
	
}
void NodoReparti::set_sig(NodoReparti* sig) {
	
	this->sig = sig;
	
}

//gets

Repartidor *NodoReparti::get_dato() {
	
	return dato;
	
}
NodoReparti* NodoReparti::get_sig() {
	
	return sig;
	
}
