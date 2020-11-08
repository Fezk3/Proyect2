#ifndef CONTROL_H
#define CONTROL_H
#include <time.h>
#include <windows.h>
#include "Interfaz.h"

class Control{
	
private:
	
	Interfaz *Menu;
	
public:
	
	Control();
	void menu_cliente();
	void menu_repartidor();
	void menu_quejas(string);
	void menu_admin();
	virtual ~Control();
	
	//listas 
	
	void guardarlistas();
	void cargarlistas();
	
};
	
#endif
