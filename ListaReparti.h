#ifndef LISTAREPARTI_H
#define LISTAREPARTI_H

#include "NodoReparti.h"

class ListaReparti {
	
private:
	
	NodoReparti* ini;
	
public:
	
	ListaReparti();
	~ListaReparti();
	
	//Methods
	
	void agregar_reparti(Repartidor* repa);
	bool buscar_reparti();
	void eliminar_reparti();
	void mostrarlistaR();
	
};

#endif
