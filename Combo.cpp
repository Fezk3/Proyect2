#include "Combo.h"

Combo::Combo(string nombre, double precio){
	
	this->nombre = nombre;
	this->precio = precio;
	
}

Combo::Combo(){
	
	nombre = "uwu";
	precio = 52.2;
	
}

Combo::~Combo(){
	
}

string Combo::get_nombre_combo(){
	
	return nombre;
	
}

double Combo::get_precio(){
	
	return precio;
	
}

//methods

string Combo::tostring_combo(){
	
	stringstream x;
	
	x<<" "<<nombre<<"                  Precio: "<<precio<<endl;
	
	return x.str();
	
}
