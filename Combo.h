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
	
	Combo(string nombre, double precio);
	~Combo();
	
	//methods
	
	string tostring_combo();
	
};

#endif
