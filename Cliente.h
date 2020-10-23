#ifndef CLIENTE_H
#define CLIENTE_H

#include "persona.h"

//falta pointer a pedido

class Cliente : public Persona
{
	
public:
	
	Cliente(string, string, int, string, bool, string, string);
	~Cliente();
	
};

#endif
