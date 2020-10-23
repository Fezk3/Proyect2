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
	void Imprimir();
	bool BuscarCliente(string);
	virtual ~ListaClientes();
	
};

#endif
