#ifndef CONTENEDORCOMBO_H
#define CONTENEDORCOMBO_H
#include "Combo.h"

const int y = 9;

class ContenedorCombo{
	
private:
	
	Combo combos[y];
	
public:
	
	ContenedorCombo(Combo , Combo, Combo, Combo, Combo, Combo, Combo, Combo, Combo);
	~ContenedorCombo();
	
	//methods
	
	string tostring_contene_combo();
	
};

#endif
