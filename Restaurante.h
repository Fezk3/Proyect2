#ifndef RESTAURANTE_H
#define RESTAURANTE_H
#include <iostream>
#include <sstream>
#include <fstream>
#include "ContenedorCombo.h"

using namespace std;

class Restaurante {
	
private:
	
	string nombre;
	string ced_juridica;
	string direcc;
	string tipo_comida;
	int cant_pedidos;
	double total;
	
public:
	
	Restaurante();
	Restaurante(string nombre, string ced_juridica, string direcc, string tipo_comida, int cant_pedidos, double total);
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
	
	//archivos
	
	void autosave(ofstream&);
	Restaurante& autoread(ifstream&);
	
};

#endif
