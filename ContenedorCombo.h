#ifndef CONTENEDORCOMBO_H
#define CONTENEDORCOMBO_H
#include "Combo.h"

const int x = 9;

class ContenedorCombo{
	
private:
	
	Combo *combos[x];
	
public:
	
	ContenedorCombo(Combo *, Combo*, Combo*, Combo*, Combo*, Combo*, Combo*, Combo*, Combo*);
	~ContenedorCombo();
	
	//methods
	
	string tostring_contene_combo();
	
};

#endif
