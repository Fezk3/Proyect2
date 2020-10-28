#ifndef CLIENTE_H
#define CLIENTE_H
#include "persona.h"

//falta pointer a pedido

class Cliente : public Persona
{
	
public:
	
	Cliente(string, string, int, string, bool, string, string,int);
	~Cliente();
	
	//methods
	
	void Aumentar();
	int getNum_Pedidos();
	string TostringCliente();
	
	
private:
	int Num_Pedidos;
	
};

#endif
