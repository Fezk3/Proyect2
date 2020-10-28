#include "Control.h"

void Control::menu_cliente(){

	//LLenando combos de los 7 restaurantes:
	
	//KFC
	
	Combo uno("4 Alitas", 4000); Combo dos("6 Alitas", 5000); Combo tre("8 Alitas", 6000);
	Combo cuat("Porc. Muslo", 7000); Combo cinc("Porc. Pechuga", 8000); Combo sei("Bucket de Alitas", 9000);
	Combo sie("Bucket de Muslos", 10000); Combo och("Familiar #1", 11000); Combo nue("Familiar #2", 12000);
	ContenedorCombo KFC(uno, dos, tre, cuat, cinc, sei, sie, och, nue);
	
	//Wendy's
	
	Combo uno1("Dave's", 4000); Combo dos2("Baconator", 5000); Combo tre3("10 Nuggets", 6000);
	Combo cuat4("Classic Sandwitch", 7000); Combo cinc5("Grilled Sandwitch", 8000); Combo sei6("Spicy Sandwitch", 9000);
	Combo sie7("Beacon Jalapenio", 10000); Combo och8("Pretzel Bacon", 11000); Combo nue9("Asiago Ranch", 12000);
	ContenedorCombo Wendys(uno1, dos2, tre3, cuat4, cinc5, sei6, sie7, och8, nue9);
	
	//Dominos
	
	Combo u1no("Gluten Free", 4000); Combo d2os("Margarita", 5000); Combo t3re("Campinia", 6000);
	Combo c4uat("Pepperoni", 7000); Combo c5inc("Hawaiana", 8000); Combo s6ei("Pecado Carnal", 9000);
	Combo s7ie("Buffalo Chicken", 10000); Combo o8ch("Oklahoma", 11000); Combo n9ue("Texas BBQ", 12000);
	ContenedorCombo Dominos(u1no, d2os, t3re, c4uat, c5inc, s6ei, s7ie, o8ch, n9ue);
	
	//Pizza HUT
	
	Combo un1o("Personal", 4000); Combo do2s("Mediana", 5000); Combo tr3e("Grande", 6000);
	Combo cu4at("Hawaiana", 7000); Combo ci5nc("Meat lover", 8000); Combo se6i("Super suprema", 9000);
	Combo si7e("Veggie Lover", 10000); Combo oc8h("Pepperoni Lover", 11000); Combo nu9e("Brasilenia", 12000);
	ContenedorCombo PizzaH(un1o, do2s, tr3e, cu4at, ci5nc, se6i, si7e, oc8h, nu9e);
	
	// Papa Johns
	
	Combo unno("Vegetariana", 4000); Combo doss("Vegana", 5000); Combo tress("The Works", 6000);
	Combo cuatr("Americana", 7000); Combo cinco("Hawaiana", 8000); Combo seii("Suprema", 9000);
	Combo siet("Italina", 10000); Combo ocho("Pepperoni", 11000); Combo nuev("Spinach Alfredo", 12000);
	ContenedorCombo PapaJ(unno, doss, tress, cuatr, cinco, seii, siet, ocho, nuev);
	
	// Bugys
	
	Combo unoo("4 Alitas", 4000); Combo dosd("6 Alitas", 5000); Combo tret("8 Alitas", 6000);
	Combo cuatro("Porc. Muslo", 7000); Combo cincoo("Porc. Pechuga", 8000); Combo seiss("Bucket de Alitas", 9000);
	Combo siete("Bucket de Muslos", 10000); Combo ochu("Familiar #1", 11000); Combo nuevee("Familiar #2", 12000);
	ContenedorCombo Bugys(unoo, dosd, tret, cuatro, cincoo, seiss, siete, ochu, nuevee);
	
	// Taco bell
	
	Combo unou("Fiesta Fries", 4000); Combo dosu("Chalupa", 5000); Combo treu("Chrunchy wrap", 6000);
	Combo cuatu("Monster Burrito", 7000); Combo cincu("Full box", 8000); Combo seiu("Big Bell", 9000);
	Combo sieu("Super Bell", 10000); Combo ochuu("Mystery box", 11000); Combo nueu("WOMBO COMBO", 12000);
	ContenedorCombo TB(unou, dosu, treu, cuatu, cincu, seiu, sieu, ochuu, nueu);
	
	
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