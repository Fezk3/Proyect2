#ifndef CONTENEDORREST_H
#define CONTENEDORREST_H
#include "Restaurante.h"

const int x = 7;

class ContenedorRest{
	
public:
	
	Restaurante *contenedor[x];
	

	
	ContenedorRest();
	~ContenedorRest();
	
	//methods
	
	string mostrar_lista();
	string  menos_pedidos();
	string mas_pedidos();
	string total_resta();
	double total_all();
	string listado_resta();
	
};

#endif
