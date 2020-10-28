#ifndef COMBO_H
#define COMBO_H
#include <iostream>
#include <sstream>

using namespace std;

class Combo{
	
private:
	
	string nombre;
	double precio;
	
public:
	
	Combo();
	Combo(string nombre, double precio);
	~Combo();
	string get_nombre_combo();
	double get_precio();
	
	//methods
	
	string tostring_combo();
	
};

#endif
