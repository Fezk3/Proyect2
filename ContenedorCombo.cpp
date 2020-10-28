#include "ContenedorCombo.h"

ContenedorCombo::ContenedorCombo(Combo *uno, Combo *dos, Combo *tres, Combo *cua, Combo *cinc, Combo *seis, Combo *sie, Combo *och, Combo *nue){
	
	combos[0] = uno;	combos[3] = cua;	combos[6] = sie; 
	combos[1] = dos;	combos[4] = cinc;	combos[7] = och;
	combos[2] = tres;	combos[5] = seis;	combos[8] = nue;
	
}

ContenedorCombo::~ContenedorCombo(){
	
	
}

//methods

string ContenedorCombo::tostring_contene_combo(){
	
	stringstream x;
	
	for(int i=0;i<9;i++){
		
		x<<combos[i]->tostring_combo()<<endl;
		
	}
	
	return x.str();
	
}
