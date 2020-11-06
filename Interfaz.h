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
	
	void GuardaRepartidores(Repartidor *);
	void LeerRepartidores();
	void GuardaClientes(Cliente *);
	void LeerClientes();
	void GuardaPedidos(string id, Pedido *L);
	void LeerPedidos(string id);
	void queja(string,string);
	void leer_queja(string);
	void Client_MayorP();
	
	//archivos
	
	void guardar_listas();
	void cargar_lista_cliente();
	void cargar_lista_reparti();
	
};

#endif
