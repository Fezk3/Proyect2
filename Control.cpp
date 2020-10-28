#include "Control.h"


void Control::menu_cliente(){

	Interfaz* Contr = new Interfaz();
	Cliente* Clien1 = new Cliente("Emanuel","402540125",89646441,"9999w",true,"Ema2821@gmail.com","Heredia",5);
	Cliente* Clien2 = new Cliente("Jose","902540125",72645446,"9999w",false,"Joseam89@gmail.com","Heredia",9);
	Cliente* Clien3 = new Cliente("Marcos","202540125",69646841,"9999w",true,"marsa46@gmail.com","Heredia",4);
	
	Contr->Clientes->Agregar(Clien1);
	Contr->Clientes->Agregar(Clien2);
	Contr->Clientes->Agregar(Clien3);
	
	string verificar="";
	string Nombre;
	string Ced;
	int NumTel;
	string NumTarje;
	string Correo;
	string Ubica;
	
	string menu="",supmenus="",combos="";
	
	int salir=0;
	int salir2=0;
	int Finalizar=0;
	do{
		system("cls");
		cout<<"========Menu Clientes=========\n";
		cout<<"l";
		cout<<"==============================\n";
		cout<<" 1. Realizar Pedido\n";
		cout<<" 2. Salir\n";
		cout<<"==============================\n";
		cout<<"Opcion:  ";
		cin>>menu;
		try{
			if(menu!="1"&&menu!="2"){
				throw menu;
			}else{
				switch(stoi(menu)){
				case 1:
					do{
						cout<<"==========Eleccion============\n";
						cout<<" 1. KFC\n";
						cout<<" 2. Dominos\n";
						cout<<"==============================\n";
						cout<<"Opcion:  ";
						cin>>supmenus;
						try{
							if(supmenus!="1"&&supmenus!="2"&&supmenus!="3"&&supmenus!="4"&&supmenus!="5"&&supmenus!="6"&&supmenus!="7"&&supmenus!="8"){
								throw supmenus;
							}else{
								string Pedido="";
								int total=0;
								switch(stoi(supmenus)){
								case 1:
									do{
										cout<<" 1. Una alita  2000\n";
										cout<<" 2. Dos Alitas  3000\n";
										cout<<" 3. Salir\n";
										cout<<"Opcion: ";
										cin>>combos;
										try{
											if(combos!="1"&&combos!="2"&&combos!="3"){
												throw combos;
											}else{
												switch(stoi(combos)){
												case 1:
													Pedido.append("Combo #1 Alitas  2000\n");
													total+=2000;
													break;
												case 2:
													Pedido.append("Combo #2 Alitas  3000\n");
													total+=3000;
													break;
												case 3:
													Finalizar=1;
													cout<<Pedido<<"\n";
													cout<<total*1.13<<"\n";
													break;
												}
											}
											
										}catch(string combos){
											cout<<"OP no valida";
										}
									}while(Finalizar!=1);
									Finalizar=0;
								}
							}
						}
						catch(string supmenus){
							cout<<"Opcion no valida, vuelva a intertarlo\n";
						}
					}while(salir2!=1);
					salir2=0;
					break;
				case 2:
					cout<<"Saliendo...\n";
					Sleep(3600);
					salir=1;
					break;
				}
			}
		}
		catch(string menu){
			cout<<"Opcion no valida, vulevalo a intentar\n";
		}
	}while(salir!=1);
	
	delete Clien1;	delete Clien2;	delete Clien3; delete Contr;
	
}

void Control::menu_repartidor(){
	
	
	
	
}
