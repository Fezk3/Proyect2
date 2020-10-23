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
		cout << repa->get_nombre() << " se ha agregado a la lista de repartidores\n";
		
	}
	else
	{
		
		aux->set_sig(ini);
		ini = aux;
		cout << repa->get_nombre() << " se ha agregado a la lista de repartidores\n";
		
	}
	
}
bool ListaReparti::buscar_reparti() {  //si esta en estado disponible (true) y tiene menos de 3 amonestaciones
	
	NodoReparti* aux = ini;
	
	while (aux != NULL)
	{
		
		if ((aux->get_dato()->get_estado() == true) && (aux->get_dato()->get_num_amonesta() < 4)) {
			
			return true;
			
		}
		
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
		
		
		while (aux != NULL) {
			
			cout << aux->get_dato()->tostringRepa() << endl;  //lamando al tostring del repartidor de dicho nodo
			aux = aux->get_sig();
			
		}
		
	}
	
}
