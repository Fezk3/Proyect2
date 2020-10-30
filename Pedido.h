#ifndef PEDIDO_H
#define PEDIDO_H
#include <iostream>
#include <sstream>

using namespace std;

class Pedido {
	
private:
	
	static int num;
	string id_clie;
	string nombre_rest;
	string estado;
	int id;
	string contenido;
	double precio;
	string hora_inicio;
	string hora_final;
	
public:
	
	Pedido(string,string,string, string, double, string, string);
	~Pedido();
	
	//sets
	
	void set_estado(string estado);
	void set_id_clie(string id_clie);
	void set_nombre_rest(string nombre_rest);
	void set_id(int id);
	void set_contenido(string contenido);
	void set_precio(double precio);
	void set_hora_ini(string hora_inicio);
	void set_hora_fin(string hora_final);
	
	//gets
	
	string get_estado();
	string get_id_clie();
	string get_nombre_rest();
	int get_id();
	string get_contenido();
	double get_precio();
	string get_hora_ini();
	string get_hora_fin();
	
	//methods
	
	string tostring_pedido();
	
};

#endif
