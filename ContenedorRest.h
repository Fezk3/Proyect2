#ifndef CONTENEDORREST_H
#define CONTENEDORREST_H
#include "Restaurante.h"

const int x = 7;

class ContenedorRest{
	
private:
	
	Restaurante *contenedor[x];
	
public:
	
	ContenedorRest();
	~ContenedorRest();
	
	//methods
	
	Restaurante menos_pedidos();
	Restaurante mas_pedidos();
	
};

#endif
