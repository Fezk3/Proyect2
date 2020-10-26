#include "Interfaz.h"

Interfaz::Interfaz() {
	
	Clientes = new ListaClientes();
	Pedidos = new ListaPedido();
	Repartidores = new ListaReparti();
	Restau = new ContenedorRest();
	
}

Interfaz::~Interfaz() {
	
}

/*
void Interfaz::GuardaRestaurante(){

string Escribir;


ofstream Resta("./Restaurante/ListaRestaurante.txt",ios::out);

while(Aux!=NULL){
Escribir= Aux->get_cliente()->TostringPer();
Resta<<Escribir;
Resta<<"\n\n";
Aux=Aux->get_siguiente();
}

Resta.close();

}
void Interfaz::LeerRestaurante(){

string Escribir;

ifstream Resta("./Restaurante/ListaRestaurante.txt",ios::in);

while(!Resta.eof()){

getline(Resta,Escribir);
Escribir.append("\n");
cout<<Escribir;
}

Resta.close();

}
*/

void Interfaz::GuardaRepartidores(){
	
	NodoReparti *Aux = Repartidores->get_ini();
	string Escribir;
	
	
	ofstream Reparti("./Repartidores/Lista/ListaRepartidores.txt",ios::app);
	
	while(Aux!=NULL){
		Escribir= Aux->get_dato()->tostringRepa();
		Reparti<<Escribir;
		Reparti<<"\n=================================================================\n\n";
		Aux=Aux->get_sig();
	}
	
	Reparti.close();
	
}

void Interfaz::LeerRepartidores(){
	
	
	string Escribir;
	
	ifstream Reparti("./Repartidores/Lista/ListaRepartidores.txt",ios::in);
	
	while(!Reparti.eof()){
		
		getline(Reparti,Escribir);
		Escribir.append("\n");
		cout<<Escribir;
	}
	
	Reparti.close();
	
}

void Interfaz::GuardaClientes(){
	
	NodoCliente *Aux = Clientes->get_head();
	string Escribir;
	
	
	ofstream Client("./Cliente/Lista/ListaClientes.txt",ios::app);
	
	while(Aux!=NULL){
		Escribir= Aux->get_cliente()->TostringCliente();
		Client<<Escribir;
		Client<<"\n=================================================================\n\n";
		Aux=Aux->get_siguiente();
	}
	
	Client.close();
	
}

void Interfaz::LeerClientes(){
	
	string Escribir;
	
	ifstream Client("./Cliente/Lista/ListaClientes.txt",ios::in);
	
	while(!Client.eof()){
		
		getline(Client,Escribir);
		Escribir.append("\n");
		cout<<Escribir;
	}
	
	Client.close();
	
}

void Interfaz::GuardaPedidos(){
	
	NodoPedido *Aux = Pedidos->get_head();
	string Escribir;
	
	
	ofstream Pedi("./Pedidos/ListaPedidos.txt",ios::app);
	
	while(Aux!=NULL){
		Escribir= Aux->get_pedido()->tostring_pedido();;
		Pedi<<Escribir;
		Pedi<<"\n=================================================================\n\n";
		Aux=Aux->get_sig_pedido();
	}
	
	Pedi.close();
}

void Interfaz::LeerPedidos(){
	
	string Escribir;
	
	ifstream Pedi("./Pedidos/ListaPedidos.txt",ios::in);
	
	while(!Pedi.eof()){
		
		getline(Pedi,Escribir);
		Escribir.append("\n");
		cout<<Escribir;
	}
	
	Pedi.close();
	
}

void Interfaz::Client_MayorP(){
	
	NodoCliente *Aux = Clientes->get_head();
	int mayor=0;
	string ElMayor;
	
	while(Aux!=NULL){
		if(Aux->get_cliente()->getNum_Pedidos()>mayor){
			mayor=Aux->get_cliente()->getNum_Pedidos();
			ElMayor=Aux->get_cliente()->TostringCliente();
		}
		Aux=Aux->get_siguiente();
	}
	cout<<ElMayor<<"\n";
	
}
