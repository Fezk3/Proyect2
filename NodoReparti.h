#ifndef NODOREPARTI_H
#define NODOREPARTI_H
#include "Repartidor.h"

class NodoReparti {
	
private:
	
	Repartidor *dato;
	NodoReparti *sig;
	
public:
	
	NodoReparti(Repartidor *dato);
	~NodoReparti();
	
	//sets
	
	void set_dato(Repartidor* dato);
	void set_sig(NodoReparti* sig);
	
	//gets
	
	Repartidor *get_dato();
	NodoReparti *get_sig();
	
};

#endif
