#include "Interfaz.h"

Interfaz::Interfaz(Pedido *p1, Pedido *p2, Pedido *p3, Repartidor *r1, Repartidor *r2, Repartidor *r3, Cliente *c1, Cliente *c2, Cliente *c3) {
	
	Clientes = new ListaClientes();
	Pedidos = new ListaPedido();
	Repartidores = new ListaReparti();
	Restau = new ContenedorRest();
	
	//Inicializando listas con objetos
	
	//Clientes->Agregar(c1); Clientes->Agregar(c2); Clientes->Agregar(c3); 
	Pedidos->agregar_pedido(p1); Pedidos->agregar_pedido(p2); Pedidos->agregar_pedido(p3);
	//Repartidores->agregar_reparti(r1); Repartidores->agregar_reparti(r2); Repartidores->agregar_reparti(r3); 
	
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

void Interfaz::GuardaRepartidores(Repartidor *Nuevo){
	
	string Escribir;
	
	
	ofstream Reparti("./Repartidores/Lista/ListaRepartidores.txt",ios::app);
	
	Escribir = Nuevo->tostringRepa();
	
	Reparti<<Escribir;
	
	Reparti<<"\n=================================================================\n\n";
	
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

void Interfaz::GuardaClientes(Cliente *Nuevo){
	
	string Escribir;
	
	
	ofstream Client("./Cliente/Lista/ListaClientes.txt",ios::app);
	
	Escribir= Nuevo->TostringCliente();
	Client<<Escribir;
	Client<<"\n=================================================================\n\n";
	
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

void Interfaz::GuardaPedidos(string id, Pedido *L){
	
	Cliente *Aux = Clientes->user(id);
	Aux->Aumentar();
	
	string Escribir;
	
	ofstream Pedi("./Cliente/Pedidos/"+id+".txt",ios::app);
	
	Escribir = L->tostring_pedido();
	Pedi<<Escribir;
	Pedi<<"\n=================================================================\n\n";
	
	Pedi.close();
}

void Interfaz::LeerPedidos(string id){
	
	string Escribir;
	
	
	ifstream Pedi("./Cliente/Pedidos/"+id+".txt",ios::in);
	
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
void Interfaz::queja(string id, string recla){
	
	ofstream reclamo("./Repartidores/Quejas/"+id+".txt",ios::app); 
	
	
	reclamo<<'-'<<recla<<"\n";
	reclamo<<"==========================\n";
	
	reclamo.close();
	
}
void Interfaz::leer_queja(string id){
	
	string impri;
	
	ifstream reclamo("./Repartidores/Quejas/"+id+".txt",ios::in);
	
	while(!reclamo.eof()){
		
		getline(reclamo, impri);
		cout<<impri<<endl;
		
	}
	
	reclamo.close();
	
}

void Interfaz::guardar_listas(){
	
	ofstream cli;
	ofstream rep;
	
	cli.open("listacliente.txt");
	rep.open("listareparti.txt");
	
	NodoCliente *aux1 = Clientes->get_head();
	NodoReparti *aux2 = Repartidores->get_ini();
	
	while(aux1!=NULL){
		
		Cliente *c = aux1->get_cliente();
		c->autosave(cli);
		aux1 = aux1->get_siguiente();
		delete c;
		
	}
	
	while(aux2!=NULL){
		
		Repartidor *r = aux2->get_dato();
		r->autosave(rep);
		aux2 = aux2->get_sig();
		delete r;		
		
	}
	
	cli.close();
	rep.close();
	
	delete aux1;
	delete aux2;
	
}

void Interfaz::cargar_lista_cliente(){
	
	Cliente *n = new Cliente();
	Cliente *aux = new Cliente();
	
	ifstream z;
	
	//ListaClientes *nueva = new ListaClientes();
	
	z.open("listacliente.txt");
	
	if(!z || z.good() == false){
		
		z.close();
		//Clientes =  new ListaClientes();
		
	}else{
		
		while(z.eof() == false){
			
			n = &aux->autoread(z);
			
			if(n->get_nombre() != ""){
				
				Clientes->Agregar(n);
				
			}
			
		}
		
	}
	
	z.close();
	
	delete aux; 
	delete n;
	
}

void Interfaz::cargar_lista_reparti(){
	
	Repartidor *r = new Repartidor();
	Repartidor *aux1 =  new Repartidor();
	
	ifstream z;
	
	//ListaReparti *nuevaR = new ListaReparti();
	
	z.open("listareparti.txt");
	
	if(!z || z.good() == false){
		
		z.close();
		//Repartidores = new ListaReparti();
		
	}else{
		
		while(z.eof() == false){
			
			r = &aux1->autoread(z);
			
			if(r->get_nombre() != ""){
				
				Repartidores->agregar_reparti(r);
				
			}
			
		}
		
	}
	
	z.close();
	
	delete r; 
	delete aux1;
	
}
