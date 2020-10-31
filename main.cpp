#include "Control.h"

int main() {
	
	Control *c1;
	
	c1 = new Control();
	
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
					Sleep(1600);
					c1->menu_cliente();
					break;
				case 2:
					system("cls");
					cout<<"Abriendo el menu de Repartidores...\n";
					Sleep(1600);
					c1->menu_repartidor();
					break;
				case 3:
					cout<<"Saliendo...\n";
					Sleep(1600);
					exit(0);
					break;
				}
			}
		}
		catch(string op){
			cout<<"No digito una opcion valida\n";
		}
	}while(true);
	
	delete c1;
	
	return 0;
	
}
