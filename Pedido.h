#ifndef PEDIDO_H
#define PEDIDO_H
#include <iostream>
#include <sstream>

using namespace std;

class Pedido {
	
private:
	
	static int num;
	string estado;
	int id;
	double precio;
	string hora_inicio;
	string hora_final;
	
public:
	
	Pedido(string, double, string, string);
	~Pedido();
	
	//sets
	
	void set_estado(string estado);
	void set_id(int id);
	void set_precio(double precio);
	void set_hora_ini(string hora_inicio);
	void set_hora_fin(string hora_final);
	
	//gets
	
	string get_estado();
	int get_id();
	double get_precio();
	string get_hora_ini();
	string get_hora_fin();
	
	//methods
	
	string tostring_pedido();
	
};

#endif
