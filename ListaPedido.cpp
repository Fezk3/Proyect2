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

bool ListaPedido::eliminar_pedido(){
	
	
	return true;
	
}

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
	double h_pico = 0;
	int cont = 0;
	
	if(aux!=NULL){
		
		cout<<"Lista de Pedidos vacia"<<endl;
		
	}else{
		
		while(aux!=NULL){
			
			//h_pico += aux->get_pedido()->get_hora_ini();
			cont++;
			aux = aux->get_sig_pedido();
			
		}
		
	}
	
	cout<<"La hora en la que se realizan mas pedidos es: "<<h_pico/cont<<endl; 
	
}
