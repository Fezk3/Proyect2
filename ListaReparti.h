#ifndef LISTAREPARTI_H
#define LISTAREPARTI_H
#include <fstream>
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
	bool checkR(string num_cedula);
	NodoReparti *get_ini();
	void queja(string,string);
	void leer_queja(string);
	
};

#endif
