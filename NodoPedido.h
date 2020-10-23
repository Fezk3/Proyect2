#ifndef NODOPEDIDO_H
#define NODOPEDIDO_H
#include "Pedido.h"

class NodoPedido {
	
private:
	
	Pedido* pedido;
	NodoPedido *sigui_ped;
	
public:
	
	NodoPedido(Pedido* pedido);
	~NodoPedido();
	
	//Sets
	
	void set_pedido(Pedido *pedido);
	void set_sig_pedido(NodoPedido* sig);
	
	//Gets
	
	Pedido *get_pedido();
	NodoPedido *get_sig_pedido();
	
};

#endif
