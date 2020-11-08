#include "ListaPedido.h"

ListaPedido::ListaPedido(){
	
	this->head = NULL;
	
}

ListaPedido::~ListaPedido(){
	
	NodoPedido* nodoBorrar;
	
	while (head != NULL) {
		
		nodoBorrar = head;
		head = head->get_sig_pedido();
		nodoBorrar->set_sig_pedido(NULL);
		delete nodoBorrar;
		
	}
	
}

void ListaPedido::agregar_pedido(Pedido* pedido) {
	
	NodoPedido* aux = new NodoPedido(pedido);
	
	if (head == NULL) {
		
		head = aux;
		
	}
	else
	{
		
		aux->set_sig_pedido(head);
		head = aux;
		
	}
	
}
/*
bool ListaPedido::eliminar_pedido(){
	
	
	return true;
	
}
*/
void ListaPedido::mostrar_pedidos() {
	
	NodoPedido* aux = head;
	
	if (aux == NULL) {
		
		cout << "Lista vacia";
		
	}
	else {
		
		
		while (aux != NULL) {
			
			cout << aux->get_pedido()->tostring_pedido() << endl;  //lamando al tostring del repartidor de dicho nodo
			aux = aux->get_sig_pedido();
			
		}
		
	}
	
}

void ListaPedido::hora_pico(){
	
	NodoPedido *aux = head;
	int cont = 0;
	int hora = 0;
	
	if(aux==NULL){
		
		cout<<"Lista de Pedidos vacia"<<endl;
		
	}else{
		
		while(aux!=NULL){
			
			cont++;
			hora += stoi(aux->get_pedido()->get_hora_ini());
			aux = aux->get_sig_pedido();
			
		}
		cout<<"La hora en la que se realizan mas pedidos es: "<<hora/cont;//h_pico/cont<<endl; 
	}
	
}

NodoPedido *ListaPedido::get_head(){
	
	return head;
	
}

Pedido *ListaPedido::pedido(){
	
	NodoPedido *aux = head;
	
	while(aux!=NULL){
		
		if(aux->get_pedido()->get_estado() == "En preparacion"){
			
			return aux->get_pedido();
			
		}
		
		aux = aux->get_sig_pedido();
		
	}
	
	return NULL;
	
}
bool ListaPedido::verifica_estado(string id){
	
	NodoPedido *aux = head;
	
	while(aux!=NULL){
		
		if((aux->get_pedido()->get_estado() == "En preparacion"&&aux->get_pedido()->get_id_clie()==id)||(aux->get_pedido()->get_estado()== "Suspendido"&&aux->get_pedido()->get_id_clie()==id)||(aux->get_pedido()->get_estado() == "En camino"&&aux->get_pedido()->get_id_clie()==id)){
			
			return true;
			
		}
		
		aux = aux->get_sig_pedido();
	}
	return false;
}

