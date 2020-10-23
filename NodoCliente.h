#ifndef NODOCLIENTE_H
#define NODOCLIENTE_H
#include "Cliente.h"

class NodoCliente
{
	
private:
	
	Cliente* Client;
	NodoCliente* siguiente;
	
public:
	
	NodoCliente(Cliente*);
	virtual ~NodoCliente();
	void set_cliente(Cliente *);
	Cliente*get_cliente();
	NodoCliente *get_siguiente();
	void set_siguiente(NodoCliente *);
	
};

#endif
