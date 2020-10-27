#ifndef REPARTIDOR_H
#define REPARTIDOR_H
#include "Persona.h"
#include "Pedido.h"

//#include "Pedido.h"   para hacer set al estado del pedido

const int costo_km_habil = 1000;
const int costo_km_feria = 1500;

class Repartidor : public Persona {
	
private:
	
	float num_kms_diario;
	int num_amonesta;
	Pedido *p1;
	
public:
	
	Repartidor(string nombre, string num_cedula, int num_tel, string num_tarje, bool estado, string correo, string direccion,float num_kms_diario, int num_amonesta);
	~Repartidor();
	
	//sets
	
	void set_num_kms_diario(float num_kms_diario);
	void set_num_amonesta(int amonesta);
	
	//gets
	
	float get_num_kms_diario();
	int get_num_amonesta();
	
	//methods
	
	void set_estado_pedido(string estado);
	string get_estado_pedido();
	
	//tostring
	
	string tostringRepa();
	
};

#endif
