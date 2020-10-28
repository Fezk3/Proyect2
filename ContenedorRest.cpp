#include "ContenedorRest.h"

ContenedorRest::ContenedorRest(){
	
	contenedor[0] = new Restaurante("KFC", "5466", "Heredia", "Rapida", 0);
	contenedor[1] = new Restaurante("Wendy's", "1235", "Heredia", "Rapida", 0);
	contenedor[2] = new Restaurante("Dominos", "6452", "Heredia", "Rapida", 0);
	contenedor[3] = new Restaurante("Pizza Hut", "8764", "Heredia", "Rapida", 0);
	contenedor[4] = new Restaurante("Papa Johns", "0565", "Heredia", "Rapida", 0);
	contenedor[5] = new Restaurante("Buggies", "7385", "Heredia", "Rapida", 0);
	contenedor[6] = new Restaurante("Taco Bell", "9452", "Heredia", "Rapida", 0);
	
}

ContenedorRest::~ContenedorRest(){
	
	for(int i=0;i<7;i++){
		
		delete contenedor[i];
		
	}
	
}

//methods

string ContenedorRest::menos_pedidos(){
	
	int menos = contenedor[0]->get_cant_pedidos();
	string menos1;
	
	for(int i=1;i<7;i++){
		
		if(menos > contenedor[i]->get_cant_pedidos()){
			
			menos1 = contenedor[i]->get_nombre();
			
		}
		
	}
	
	return menos1;
	
}

string ContenedorRest::mas_pedidos(){
	
	int mas = contenedor[0]->get_cant_pedidos();
	string mas1;
	
	for(int i=1;i<7;i++){
		
		if(mas < contenedor[i]->get_cant_pedidos()){
			
			mas1 = contenedor[i]->get_nombre();
			
		}
		
	}
	
	return mas1;
	
}

string ContenedorRest::total_resta(){
	
	stringstream z;
	
	for(int i =0;i<7;i++){
		
		z<<"Total vendido del restaurante "<<contenedor[i]->get_nombre()<<" ¢"<<contenedor[i]->get_total()<<endl;
		
	}
	
	return z.str();
	
}

double ContenedorRest::total_all(){
	
	double tot = 0;
	
	for(int i=0;i<7;i++){
		
		tot += contenedor[i]->get_total();
		
	}
	
	return tot;
	
}

string ContenedorRest::listado_resta(){
	
	stringstream x;
	
	for(int i=0;i<7;i++){
		
		x<<contenedor[i]->tostringRest()<<endl;
		
	}
	
	return x.str();
	
}

string ContenedorRest::mostrar_lista(){
	
	stringstream x;
	
	for(int i=0;i<7;i++){
		
		x<<"Restaurante: "<<contenedor[i]->get_nombre()<<"		Tipo de comida: "<<contenedor[i]->get_tipo_comida()<<endl;
		
	}
	
	return x.str();
	
}
