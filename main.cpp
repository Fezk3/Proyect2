#include "Control.h"

int main() {
	
	Control c1;
	
	string op="";
	
	do{
		try{
			system("cls");
			cout<<"Digite que tipo de usuario es usted: "<<endl;
			cout<<"1. Cliente"<<endl;
			cout<<"2. Repartidor"<<endl;
			cout<<"3. Salir\n";
			cin>>op;
			if(op!="1"&&op!="2"&&op!="3"){
				throw op;
			}else{
				switch(stoi(op)){
				case 1:
					system("cls");
					cout<<"Abriendo el menu de Clientes...\n";
					Sleep(3600);
					c1.menu_cliente();
					break;
				case 2:
					system("cls");
					cout<<"Abriendo el menu de Repartidores...\n";
					Sleep(3600);
					c1.menu_repartidor();
					break;
				case 3:
					cout<<"Saliendo...\n";
					Sleep(3600);
					exit(0);
					break;
				}
			}
		}
		catch(string op){
			cout<<"No digito una opcion valida\n";
		}
	}while(true);
	
	/*
	Repartidor* rep1 = new Repartidor("Victor", "4654564", 24586, "5asd4", true, "vict@gmail.com", "Palmares", 7.3, 0);
	Repartidor* rep2 = new Repartidor("Kevin", "465454", 34586, "234d4", false, "kev@gmail.com", "Heredia", 2.3, 2);
	Repartidor* rep3 = new Repartidor("Warner", "4gseg564", 14586, "53gd4", false, "war@gmail.com", "San Jose", 1.3, 4);
	
	ListaReparti* listaRep = new ListaReparti;
	
	listaRep->agregar_reparti(rep1);
	listaRep->agregar_reparti(rep2);
	listaRep->agregar_reparti(rep3);
	listaRep->mostrarlistaR();
	
	listaRep->eliminar_reparti();
	
	cout << "Despues del borrado" << endl;
	
	listaRep->mostrarlistaR();
	
	Pedido* ped1 = new Pedido("en camino", 2500, "1:20 pm", "1:45 pm");
	
	ListaPedido* lispe = new ListaPedido();
	
	cout << "Pedidos:" << endl;
	
	lispe->agregar_pedido(ped1);
	lispe->mostrar_pedidos();
	*/
	/*
	
	Restaurante* r1 = new Restaurante("uwu", "as1f", "Palmares", "Rapida", 5);
	cout<<r1->tostringRest();
	
	*/
	
	return 0;
	
}
