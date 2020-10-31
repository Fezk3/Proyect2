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
/*
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
*/
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

void ListaClientes::clientes_acti(){
	
	NodoCliente *aux = Head;
	
	if(aux == NULL){
		
		cout<<"No hay clientes activos"<<endl;
		
	}else{
		
		while(aux!=NULL){
			
			if(aux->get_cliente()->get_estado()==true){
				
				cout<<aux->get_cliente()->TostringPer()<<endl;
				//aux = aux->get_siguiente();
				
			}
			
			aux = aux->get_siguiente();
			
		}
		
		
	}
	
}

void ListaClientes::clientes_suspen(){
	
	NodoCliente *aux = Head;
	
	if(aux == NULL){
		
		cout<<"No hay clientes activos"<<endl;
		
	}else{
		
		while(aux!=NULL){
			
			if(aux->get_cliente()->get_estado()==false){
				
				cout<<aux->get_cliente()->TostringPer()<<endl;
				//aux = aux->get_siguiente();
				
			}
			
			aux = aux->get_siguiente();
			
		}
		
		
	}
	
}

bool ListaClientes::checkC(string num_ced){  //if false -> agregar, else -> continue
	
	NodoCliente *aux = Head;
	
	if(aux == NULL){
		
		cout<<"La lista esta vacia"<<endl;
		return false;
		
	}else{
		
		while(aux!=NULL){
			
			if(aux->get_cliente()->get_cedula() == num_ced){
				
				return true;
				
			}
			
		}
		
	}
	
	return false;
	
}

NodoCliente *ListaClientes::get_head(){
	
	return Head;
	
}

Cliente *ListaClientes::user(string id){ 
	
	NodoCliente *aux = Head;
	
	while(aux!=NULL){
		
		if(aux->get_cliente()->get_cedula()==id){
			
			return aux->get_cliente();
			
		}
		
		aux = aux->get_siguiente();
		
	}
	
}

void ListaClientes::queja(string id, string recla){
	
	ofstream reclamo("./Quejas/"+id+".txt",ios::app); 
	
	if(reclamo.fail()){
		cout<<"Error\n";
		exit(1);
	}
	if(reclamo.good()){
		reclamo<<'-'<<recla<<"\n\n";
	}
	
	reclamo.close();
	
}

void ListaClientes::leer_queja(string id){
	
	string impri;
	
	ifstream reclamo("./Quejas/"+id+".txt",ios::in);
	
	while(!reclamo.eof()){
		
		getline(reclamo, impri);
		cout<<impri<<endl;
		
	}
	
	reclamo.close();
	
}
