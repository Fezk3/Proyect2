#ifndef LISTAPEDIDO_H
#define LISTAPEDIDO_H
#include "NodoPedido.h"

class ListaPedido {
	
private:
	
	NodoPedido *head;
	
public:
	
	ListaPedido();
	~ListaPedido();
	
	//Methods
	
	void agregar_pedido(Pedido *pedido);
	bool eliminar_pedido();
	void mostrar_pedidos();
	void hora_pico();
	NodoPedido *get_head();
	Pedido *pedido();
	
};

#endif
