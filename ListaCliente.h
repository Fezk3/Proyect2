#ifndef LISTACLIENTE_H
#define LISTACLIENTE_H
#include "NodoCliente.h"

class ListaClientes
{

private:
	
	NodoCliente* Head;
	
public:
	
	ListaClientes();
	void Agregar(Cliente* Nuevo);
	
	//void Imprimir();
	
	Cliente *user(string id);
	bool BuscarCliente(string);
	virtual ~ListaClientes();
	void clientes_acti();
	void clientes_suspen();
	bool checkC(string);
	void cliente_maspedi();
	NodoCliente *get_head();
	
};

#endif
