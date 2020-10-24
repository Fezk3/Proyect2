#include "NodoPedido.h"

NodoPedido::NodoPedido(Pedido* pedido) {
	
	this->pedido = pedido;
	this->sigui_ped = NULL;
	
}

NodoPedido::~NodoPedido(){
	
}

//Sets

void NodoPedido::set_pedido(Pedido* pedido) {
	
	this->pedido = pedido;
	
}
void NodoPedido::set_sig_pedido(NodoPedido* sigui_ped) {
	
	this->sigui_ped = sigui_ped;
	
}

//gets

Pedido* NodoPedido::get_pedido() {
	
	return pedido;
	
}
NodoPedido* NodoPedido::get_sig_pedido() {
	
	return sigui_ped;
	
}
