#include "ListaReparti.h"

ListaReparti::ListaReparti() {
	
	this->ini = NULL;
	
}

ListaReparti::~ListaReparti() {
	
	NodoReparti* nodoBorrar;
	
	while (ini != NULL) {
		
		nodoBorrar = ini;
		ini = ini->get_sig();
		nodoBorrar->set_sig(NULL);
		delete nodoBorrar;
		
	}
	
}

void ListaReparti::agregar_reparti(Repartidor* repa) {
	
	NodoReparti* aux = new NodoReparti(repa);  //asigno el repartidor en un nodo repartidor auxiliar
	
	if (ini == NULL) 
	{
		
		ini = aux;
		
	}
	else
	{
		
		aux->set_sig(ini);
		ini = aux;
		
	}
	
}
bool ListaReparti::buscar_reparti(string id) {  //si esta en estado disponible (true) y tiene menos de 3 amonestaciones
	
	NodoReparti* aux = ini;
	
	while (aux != NULL)
	{
		
		if (aux->get_dato()->get_cedula() == id) {return true; break; }
		aux = aux->get_sig();
		
	}
	
	return false;
	
}

void ListaReparti::eliminar_reparti() { 
	
	NodoReparti* Aux = ini;
	NodoReparti* Aux2;
	
	if (Aux == NULL)
	{
		
		cout << "No hay Clientes\n";
		
	}
	if (Aux->get_dato()->get_num_amonesta() > 3)
	{
		Aux2 = Aux->get_sig();
		delete Aux;
		ini = Aux2;
	}
	else
	{
		while (Aux != NULL)
		{
			if (Aux->get_dato()->get_num_amonesta() > 3) {
				
				Aux->set_sig(Aux->get_sig()->get_sig());
				
			}
			
			Aux = Aux->get_sig();
			
		}
		
	}
	
}

void ListaReparti::mostrarlistaR() {  
	
	NodoReparti* aux = ini;
	
	if (aux == NULL) {
		
		cout << "Lista vacia";
		
	}
	else {
		
		cout<<"Repartidores con 0 amonestacions: "<<endl;
		
		while (aux != NULL) {
			
			if(aux->get_dato()->get_num_amonesta()==0){
				
				cout << aux->get_dato()->tostringRepa() << endl;  //lamando al tostring del repartidor de dicho nodo
				//aux = aux->get_sig();
				
			}
			
			aux = aux->get_sig();
			
		}
		
	}
	
}

bool ListaReparti::checkR(string num_ced){  //checks si el repartidor esta en la ListaReparti, si false llamar agragar else continua
	
	NodoReparti *aux = ini;
	
	if(aux==NULL){
		
		cout<<"La lista de Repatidores esta vacia"<<endl;
		return false;
		
	}else{
		
		while(aux!=NULL){
			
			if(aux->get_dato()->get_cedula() == num_ced){
				
				return true;
				
			}
			
		}
		
	}
	
	return false;
	
}



NodoReparti *ListaReparti::get_ini(){
	
	return ini;
	
}

Repartidor *ListaReparti::userR(string id){ 
	
	NodoReparti *aux = ini;

	while(aux!=NULL){
		
		if(aux->get_dato()->get_cedula()==id){
			
			return aux->get_dato();
			
		}
		
		aux = aux->get_sig();
		
	}
}
