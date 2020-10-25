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
	Interfaz();
	virtual ~Interfaz();
	
	/*void GuardaRestaurante();
	void LeerRestaurante();*/
	
	void GuardaRepartidores();
	void LeerRepartidores();
	void GuardaClientes();
	void LeerClientes();
	void GuardaPedidos();
	void LeerPedidos();
	void Client_MayorP();
	
};

#endif
