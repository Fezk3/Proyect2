#include "ListaCliente.h"

ListaClientes::ListaClientes() {
	
	Head = NULL;
	
}
void ListaClientes::Agregar(Cliente *ClienteN){
	
	NodoCliente *Nuevo = new NodoCliente(ClienteN);
	
	if (Head==NULL)
	{
		Head = Nuevo;
	}
	else {
		Nuevo->set_siguiente(Head);
		Head = Nuevo;
	}
	
}
void ListaClientes::Imprimir(){
	
	NodoCliente *Aux = Head;
	
	if (Head == NULL)
	{
		cout << "No hay Clientes\n";
	}
	else {
		while (Aux!=NULL)
		{
			cout << Aux->get_cliente()->TostringPer()<<"\n";
			Aux = Aux->get_siguiente();
		}
	}
}
bool ListaClientes::BuscarCliente(string Ced){
	
	NodoCliente* Aux = Head;
	
	if (Head == NULL)
	{
		cout << "No hay Clientes\n";
		return false;
	}
	else {
		while (Aux!=NULL)
		{
			if (Aux->get_cliente()->get_cedula() == Ced) {return true; break; }
			Aux = Aux->get_siguiente();
		}
		return false;
	}
	
}
ListaClientes::~ListaClientes() {
	
	NodoCliente *Borrar;
	while(Head!=NULL){
		Borrar=Head;
		Head=Head->get_siguiente();
		delete Borrar;
	}
	
}
