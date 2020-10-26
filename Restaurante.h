#ifndef RESTAURANTE_H
#define RESTAURANTE_H
#include <iostream>
#include <sstream>

using namespace std;

//const int z = 9;

class Restaurante {
	
private:
	
	string nombre;
	string ced_juridica;
	string direcc;
	string tipo_comida;
	int cant_pedidos;
	double total;
	//double combos[z];
	
public:
	
	Restaurante(string nombre, string ced_juridica, string direcc, string tipo_comida, int cant_pedidos);
	~Restaurante();
	
	//sets
	
	void set_nombre(string nombre);
	void set_ced_juridica(string ced_juridica);
	void set_direcc(string direcc);
	void set_tipo_comida(string tipo_comida);
	void set_cant_pedidos();
	void set_total(double total);
	
	//gets
	
	string get_nombre();
	string get_ced_juridica();
	string get_direcc();
	string get_tipo_comida();
	int get_cant_pedidos();
	double get_total();
	
	//methods
	
	string tostringRest();
	
};

#endif
