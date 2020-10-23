#include "ContenedorRest.h"

ContenedorRest::ContenedorRest(){
	
	/*for(int i=0;i<7;i++){
		
		contenedor = new Restaurante();
		
	}*/
	
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




