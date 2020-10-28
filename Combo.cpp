#include "Combo.h"

Combo::Combo(stirng nombre, double float){
	
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
