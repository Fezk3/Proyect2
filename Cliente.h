#ifndef CLIENTE_H
#define CLIENTE_H
#include "persona.h"
#include <fstream>

//falta pointer a pedido

class Cliente : public Persona
{
	
public:
	
	Cliente();
	Cliente(string, string, string, string, bool, string, string,int);
	~Cliente();
	
	//methods
	
	void Aumentar();
	int getNum_Pedidos();
	string TostringCliente();
	
	//autos
	
	void autosave(ofstream&);
	Cliente& autoread(ifstream&);
	
	
private:
	int Num_Pedidos;
	
};

#endif
