#ifndef CONTENEDORCOMBO_H
#define CONTENEDORCOMBO_H
#include "Combo.h"

const int y = 9;

class ContenedorCombo{
	
public:
	
	ContenedorCombo(Combo , Combo, Combo, Combo, Combo, Combo, Combo, Combo, Combo);
	Combo combos[y];
	~ContenedorCombo();
	
	//methods
	
	string tostring_contene_combo();
	
};

#endif
