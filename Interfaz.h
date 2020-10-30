#ifndef INTERFAZ_H
#define INTERFAZ_H
#include "ListaReparti.h"
#include "ListaPedido.h"
#include "ListaCliente.h"
#include "ContenedorRest.h"
#include <fstream>

class Interfaz
{
	
public:
	
	ContenedorRest* Restau;
	ListaClientes* Clientes;
	ListaPedido* Pedidos;
	ListaReparti* Repartidores;
	Interfaz(Pedido *, Pedido *, Pedido*, Repartidor *, Repartidor *, Repartidor *, Cliente *, Cliente *, Cliente *);
	virtual ~Interfaz();
	
	/*void GuardaRestaurante();
	void LeerRestaurante();*/
	
	void GuardaRepartidores();
	void LeerRepartidores();
	void GuardaClientes();
	void LeerClientes();
	void GuardaPedidos(string id, Pedido *L);
	void LeerPedidos(string id);
	void Client_MayorP();
	
};

#endif
