#include "Combo.h"

Combo::Combo(string nombre, double precio){
	
	this->nombre = nombre;
	this->precio = precio;
	
}

Combo::~Combo(){
	
}

//methods

string Combo::tostring_combo(){
	
	stringstream x;
	
	x<<"Combo: "<<nombre<<"                  Precio: "<<precio<<endl;
	
	return x.str();
	
}
