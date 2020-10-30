#include "Control.h"



Control::Control(){
	
	Cliente* c1 = new Cliente("Emanuel","402540125","8798746","9999w",true,"Ema2821@gmail.com","Heredia",5);
	Cliente* c2 = new Cliente("Jose","902540125","4646468","9999w",false,"Joseam89@gmail.com","Heredia",9);
	Cliente* c3 = new Cliente("Marcos","202540125","65465412","9999w",true,"marsa46@gmail.com","Heredia",4);
	
	Repartidor* r1 = new Repartidor("Victor", "4654564", "24586", "5asd4", true, "vict@gmail.com", "Palmares", 7.3, 0);
	Repartidor* r2 = new Repartidor("Kevin", "465454", "34586", "234d4", false, "kev@gmail.com", "Heredia", 2.3, 2);
	Repartidor* r3 = new Repartidor("Warner", "4gseg564", "14586", "53gd4", false, "war@gmail.com", "San Jose", 1.3, 4);
	
	Pedido* p1 = new Pedido("402540125","Popeyes","Entregado","4x Alitas 4000\n",4520,"11:12 am","12:30 pm");
	Pedido* p2 = new Pedido("902540125","Popeyes","Entregado","8x Alitas 6000\n",6780,"11:12 am","12:30 pm");
	Pedido* p3 = new Pedido("202540125","Popeyes","Entregado","4x Alitas 4000\n",4520,"11:55 am","01:00 pm");
	
	Interfaz* Menu = new Interfaz(p1,p2,p3,r1,r2,r3,c1,c2,c3);
	
	
}
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
	
	//***********************************************************************************************************************************
	
	
	string verificar="";
	string iden;
	string Nombre;
	string Ced;
	string NumTel;
	string NumTarje;
	string Correo;
	string Ubica;
	
	string menu="",supmenus="",combos="";
	
	int salir=0;
	int salir2=0;
	int Finalizar=0;
	cout<<"==========================================\n";
	cout<<"Digite su ID: ";
	cin>>verificar;
	if(Contr->Clientes->BuscarCliente(verificar)==false){
		cout<<"==========================================\n";
		cout<<"Necesitamos algunos de tus datos para proseguir\n\n";
		cout<<"Digite su nombre: ";cin>>Nombre;cout<<"\n";
		cout<<"Digite su identificacion: ";cin>>iden;cout<<"\n";
		cout<<"Digite su numero de telefono: ";cin>>NumTel;cout<<"\n";
		cout<<"Digite su numero de tarjeta: ";cin>>NumTarje;cout<<"\n";
		cout<<"Digite su correo: ";cin>>Correo;cout<<"\n";
		cout<<"Digite su Ubicacion: ";cin>>Ubica;cout<<"\n";
		cout<<"==========================================\n";
		cout<<"Se inscribio en la appm exitosamente\n";
		cout<<"Espere mientras ingresa al menu...\n";
		cout<<"==========================================\n";
		Sleep(3600);
		Cliente *c1 = new Cliente(Nombre,iden,NumTel,NumTarje,true,Correo,Ubica,0);
		Contr->Clientes->Agregar(c1);
		
		do{
			Cliente *Inscrito = Contr->Clientes->user(iden);
			system("cls");
			cout<<"=============Restaurantes===========\n";
			cout<<Contr->Restau->mostrar_lista();
			cout<<"====================================\n";
			cout<<" 1. Realizar Pedido\n";
			cout<<" 2. Salir\n";
			cout<<"====================================\n";
			cout<<"Opcion:  ";
			cin>>menu;
			try{
				if(menu!="1"&&menu!="2"){
					throw menu;
				}else{
					switch(stoi(menu)){
					case 1:
						do{
							cout<<"==============Eleccion==============\n";
							cout<<"Opcion:  ";
							cin>>supmenus;
							cout<<"====================================\n";
							try{
								if(supmenus!="1"&&supmenus!="2"&&supmenus!="3"&&supmenus!="4"&&supmenus!="5"&&supmenus!="6"&&supmenus!="7"){
									throw supmenus;
								}else{
									string conten="";
									double total=0;
									switch(stoi(supmenus)){
									case 1:
										do{
											system("cls");
											cout<<"====================================\n";
											cout<<KFC.tostring_contene_combo();
											cout<<"10. Salir\n";
											cout<<"====================================\n";
											cout<<"Opcion: ";
											cin>>combos;
											try{
												if(combos!="1"&&combos!="2"&&combos!="3"&&combos!="4"&&combos!="5"&&combos!="6"&&combos!="7"&&combos!="8"&&combos!="9"&&combos!="10"){
													throw combos;
												}else{
													switch(stoi(combos)){
													case 1:
														conten.append(KFC.combos[0].tostring_combo());
														total+=KFC.combos[0].get_precio();
														break;
													case 2:
														conten.append(KFC.combos[1].tostring_combo());
														total+=KFC.combos[1].get_precio();
														break;
													case 3:
														conten.append(KFC.combos[2].tostring_combo());
														total+=KFC.combos[2].get_precio();
														break;
													case 4:
														conten.append(KFC.combos[3].tostring_combo());
														total+=KFC.combos[3].get_precio();
														break;
													case 5:
														conten.append(KFC.combos[4].tostring_combo());
														total+=KFC.combos[4].get_precio();
														break;
													case 6:
														conten.append(KFC.combos[5].tostring_combo());
														total+=KFC.combos[5].get_precio();
														break;
													case 7:
														conten.append(KFC.combos[6].tostring_combo());
														total+=KFC.combos[6].get_precio();
														break;
													case 8:
														conten.append(KFC.combos[7].tostring_combo());
														total+=KFC.combos[7].get_precio();
														break;
													case 9:
														conten.append(KFC.combos[8].tostring_combo());
														total+=KFC.combos[8].get_precio();
														break;
													case 10:
														total*=1.13;
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"KFC","Entregado",conten,total,"11:00 am","11:50");										
														Contr->Pedidos->agregar_pedido(P1);
														Finalizar=1;
														break;
													}
												}
												
											}catch(string combos){
												cout<<"====================================\n";
												cout<<"Opciono no valida...\n";
												cout<<"====================================\n";
											}
										}while(Finalizar!=1);
										total=0;
										Finalizar=0;
										salir2 = 1;
										break; 
									case 2:
										do{
											system("cls");
											cout<<"====================================\n";
											cout<<Wendys.tostring_contene_combo();
											cout<<"10. Salir\n";
											cout<<"====================================\n";
											cout<<"Opcion: ";
											cin>>combos;
											try{
												if(combos!="1"&&combos!="2"&&combos!="3"&&combos!="4"&&combos!="5"&&combos!="6"&&combos!="7"&&combos!="8"&&combos!="9"&&combos!="10"){
													throw combos;
												}else{
													switch(stoi(combos)){
													case 1:
														conten.append(Wendys.combos[0].tostring_combo());
														total+=Wendys.combos[0].get_precio();
														break;
													case 2:
														conten.append(Wendys.combos[1].tostring_combo());
														total+=Wendys.combos[1].get_precio();
														break;
													case 3:
														conten.append(Wendys.combos[2].tostring_combo());
														total+=Wendys.combos[2].get_precio();
														break;
													case 4:
														conten.append(Wendys.combos[3].tostring_combo());
														total+=Wendys.combos[3].get_precio();
														break;
													case 5:
														conten.append(Wendys.combos[4].tostring_combo());
														total+=Wendys.combos[4].get_precio();
														break;
													case 6:
														conten.append(Wendys.combos[5].tostring_combo());
														total+=Wendys.combos[5].get_precio();
														break;
													case 7:
														conten.append(Wendys.combos[6].tostring_combo());
														total+=Wendys.combos[6].get_precio();
														break;
													case 8:
														conten.append(Wendys.combos[7].tostring_combo());
														total+=Wendys.combos[7].get_precio();
														break;
													case 9:
														conten.append(Wendys.combos[8].tostring_combo());
														total+=Wendys.combos[8].get_precio();
														break;
													case 10:
														total*=1.13;
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"Wendys","Entregado",conten,total,"11:00 am","11:50");											
														Contr->Pedidos->agregar_pedido(P1);
														Finalizar=1;
														break;
													}
												}
												
											}catch(string combos){
												cout<<"====================================\n";
												cout<<"Opciono no valida...\n";
												cout<<"====================================\n";
											}
										}while(Finalizar!=1);
										total=0;
										Finalizar=0;
										salir2 = 1;
										break; 
									case 3:
										do{
											system("cls");
											cout<<"====================================\n";
											cout<<Dominos.tostring_contene_combo();
											cout<<"10. Salir\n";
											cout<<"====================================\n";
											cout<<"Opcion: ";
											cin>>combos;
											try{
												if(combos!="1"&&combos!="2"&&combos!="3"&&combos!="4"&&combos!="5"&&combos!="6"&&combos!="7"&&combos!="8"&&combos!="9"&&combos!="10"){
													throw combos;
												}else{
													switch(stoi(combos)){
													case 1:
														conten.append(Dominos.combos[0].tostring_combo());
														total+=Dominos.combos[0].get_precio();
														break;
													case 2:
														conten.append(Dominos.combos[1].tostring_combo());
														total+=Dominos.combos[1].get_precio();
														break;
													case 3:
														conten.append(Dominos.combos[2].tostring_combo());
														total+=Dominos.combos[2].get_precio();
														break;
													case 4:
														conten.append(Dominos.combos[3].tostring_combo());
														total+=Dominos.combos[3].get_precio();
														break;
													case 5:
														conten.append(Dominos.combos[4].tostring_combo());
														total+=Dominos.combos[4].get_precio();
														break;
													case 6:
														conten.append(Dominos.combos[5].tostring_combo());
														total+=Dominos.combos[5].get_precio();
														break;
													case 7:
														conten.append(Dominos.combos[6].tostring_combo());
														total+=Dominos.combos[6].get_precio();
														break;
													case 8:
														conten.append(Dominos.combos[7].tostring_combo());
														total+=Dominos.combos[7].get_precio();
														break;
													case 9:
														conten.append(Dominos.combos[8].tostring_combo());
														total+=Dominos.combos[8].get_precio();
														break;
													case 10:
														total*=1.13;
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"Dominos","Entregado",conten,total,"11:00 am","11:50");										
														Contr->Pedidos->agregar_pedido(P1);
														Finalizar=1;
														break;
													}
												}
												
											}catch(string combos){
												cout<<"====================================\n";
												cout<<"Opciono no valida...\n";
												cout<<"====================================\n";
											}
										}while(Finalizar!=1);
										total=0;
										Finalizar=0;
										salir2 = 1;
										break; 
									case 4:
										do{
											system("cls");
											cout<<"====================================\n";
											cout<<PizzaH.tostring_contene_combo();
											cout<<"10. Salir\n";
											cout<<"====================================\n";
											cout<<"Opcion: ";
											cin>>combos;
											try{
												if(combos!="1"&&combos!="2"&&combos!="3"&&combos!="4"&&combos!="5"&&combos!="6"&&combos!="7"&&combos!="8"&&combos!="9"&&combos!="10"){
													throw combos;
												}else{
													switch(stoi(combos)){
													case 1:
														conten.append(PizzaH.combos[0].tostring_combo());
														total+=PizzaH.combos[0].get_precio();
														break;
													case 2:
														conten.append(PizzaH.combos[1].tostring_combo());
														total+=PizzaH.combos[1].get_precio();
														break;
													case 3:
														conten.append(PizzaH.combos[2].tostring_combo());
														total+=PizzaH.combos[2].get_precio();
														break;
													case 4:
														conten.append(PizzaH.combos[3].tostring_combo());
														total+=PizzaH.combos[3].get_precio();
														break;
													case 5:
														conten.append(PizzaH.combos[4].tostring_combo());
														total+=PizzaH.combos[4].get_precio();
														break;
													case 6:
														conten.append(PizzaH.combos[5].tostring_combo());
														total+=PizzaH.combos[5].get_precio();
														break;
													case 7:
														conten.append(PizzaH.combos[6].tostring_combo());
														total+=PizzaH.combos[6].get_precio();
														break;
													case 8:
														conten.append(PizzaH.combos[7].tostring_combo());
														total+=PizzaH.combos[7].get_precio();
														break;
													case 9:
														conten.append(PizzaH.combos[8].tostring_combo());
														total+=PizzaH.combos[8].get_precio();
														break;
													case 10:
														total*=1.13;
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"Pizza Hut","Entregado",conten,total,"11:00 am","11:50");										
														Contr->Pedidos->agregar_pedido(P1);
														Finalizar=1;
														break;
													}
												}
												
											}catch(string combos){
												cout<<"====================================\n";
												cout<<"Opciono no valida...\n";
												cout<<"====================================\n";
											}
										}while(Finalizar!=1);
										total=0;
										Finalizar=0;
										salir2 = 1;
										break; 
									case 5:
										do{
											system("cls");
											cout<<"====================================\n";
											cout<<PapaJ.tostring_contene_combo();
											cout<<"10. Salir\n";
											cout<<"====================================\n";
											cout<<"Opcion: ";
											cin>>combos;
											try{
												if(combos!="1"&&combos!="2"&&combos!="3"&&combos!="4"&&combos!="5"&&combos!="6"&&combos!="7"&&combos!="8"&&combos!="9"&&combos!="10"){
													throw combos;
												}else{
													switch(stoi(combos)){
													case 1:
														conten.append(PapaJ.combos[0].tostring_combo());
														total+=PapaJ.combos[0].get_precio();
														break;
													case 2:
														conten.append(PapaJ.combos[1].tostring_combo());
														total+=PapaJ.combos[1].get_precio();
														break;
													case 3:
														conten.append(PapaJ.combos[2].tostring_combo());
														total+=PapaJ.combos[2].get_precio();
														break;
													case 4:
														conten.append(PapaJ.combos[3].tostring_combo());
														total+=PapaJ.combos[3].get_precio();
														break;
													case 5:
														conten.append(PapaJ.combos[4].tostring_combo());
														total+=PapaJ.combos[4].get_precio();
														break;
													case 6:
														conten.append(PapaJ.combos[5].tostring_combo());
														total+=PapaJ.combos[5].get_precio();
														break;
													case 7:
														conten.append(PapaJ.combos[6].tostring_combo());
														total+=PapaJ.combos[6].get_precio();
														break;
													case 8:
														conten.append(PapaJ.combos[7].tostring_combo());
														total+=PapaJ.combos[7].get_precio();
														break;
													case 9:
														conten.append(PapaJ.combos[8].tostring_combo());
														total+=PapaJ.combos[8].get_precio();
														break;
													case 10:
														total*=1.13;
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"Papa Jons","Entregado",conten,total,"11:00 am","11:50");										
														Contr->Pedidos->agregar_pedido(P1);
														Finalizar=1;
														break;
													}
												}
												
											}catch(string combos){
												cout<<"====================================\n";
												cout<<"Opciono no valida...\n";
												cout<<"====================================\n";
											}
										}while(Finalizar!=1);
										total=0;
										Finalizar=0;
										salir2 = 1;
										break; 
									case 6:
										do{
											system("cls");
											cout<<"====================================\n";
											cout<<Bugys.tostring_contene_combo();
											cout<<"10. Salir\n";
											cout<<"====================================\n";
											cout<<"Opcion: ";
											cin>>combos;
											try{
												if(combos!="1"&&combos!="2"&&combos!="3"&&combos!="4"&&combos!="5"&&combos!="6"&&combos!="7"&&combos!="8"&&combos!="9"&&combos!="10"){
													throw combos;
												}else{
													switch(stoi(combos)){
													case 1:
														conten.append(Bugys.combos[0].tostring_combo());
														total+=Bugys.combos[0].get_precio();
														break;
													case 2:
														conten.append(Bugys.combos[1].tostring_combo());
														total+=Bugys.combos[1].get_precio();
														break;
													case 3:
														conten.append(Bugys.combos[2].tostring_combo());
														total+=Bugys.combos[2].get_precio();
														break;
													case 4:
														conten.append(Bugys.combos[3].tostring_combo());
														total+=Bugys.combos[3].get_precio();
														break;
													case 5:
														conten.append(Bugys.combos[4].tostring_combo());
														total+=Bugys.combos[4].get_precio();
														break;
													case 6:
														conten.append(Bugys.combos[5].tostring_combo());
														total+=Bugys.combos[5].get_precio();
														break;
													case 7:
														conten.append(Bugys.combos[6].tostring_combo());
														total+=Bugys.combos[6].get_precio();
														break;
													case 8:
														conten.append(Bugys.combos[7].tostring_combo());
														total+=Bugys.combos[7].get_precio();
														break;
													case 9:
														conten.append(Bugys.combos[8].tostring_combo());
														total+=Bugys.combos[8].get_precio();
														break;
													case 10:
														Finalizar=1;
														cout<<conten<<"\n";
														cout<<total*1.13<<"\n";
														break;
													}
												}
												
											}catch(string combos){
												cout<<"====================================\n";
												cout<<"Opciono no valida...\n";
												cout<<"====================================\n";
											}
										}while(Finalizar!=1);
										total=0;
										Finalizar=0;
										salir2 = 1;
										break; 
									case 7:
										do{
											system("cls");
											cout<<"====================================\n";
											cout<<TB.tostring_contene_combo();
											cout<<"10. Salir\n";
											cout<<"====================================\n";
											cout<<"Opcion: ";
											cin>>combos;
											try{
												if(combos!="1"&&combos!="2"&&combos!="3"&&combos!="4"&&combos!="5"&&combos!="6"&&combos!="7"&&combos!="8"&&combos!="9"&&combos!="10"){
													throw combos;
												}else{
													switch(stoi(combos)){
													case 1:
														conten.append(TB.combos[0].tostring_combo());
														total+=TB.combos[0].get_precio();
														break;
													case 2:
														conten.append(TB.combos[1].tostring_combo());
														total+=TB.combos[1].get_precio();
														break;
													case 3:
														conten.append(TB.combos[2].tostring_combo());
														total+=TB.combos[2].get_precio();
														break;
													case 4:
														conten.append(TB.combos[3].tostring_combo());
														total+=TB.combos[3].get_precio();
														break;
													case 5:
														conten.append(TB.combos[4].tostring_combo());
														total+=TB.combos[4].get_precio();
														break;
													case 6:
														conten.append(TB.combos[5].tostring_combo());
														total+=TB.combos[5].get_precio();
														break;
													case 7:
														conten.append(TB.combos[6].tostring_combo());
														total+=TB.combos[6].get_precio();
														break;
													case 8:
														conten.append(TB.combos[7].tostring_combo());
														total+=TB.combos[7].get_precio();
														break;
													case 9:
														conten.append(TB.combos[8].tostring_combo());
														total+=TB.combos[8].get_precio();
														break;
													case 10:
														total*=1.13;
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"","Entregado",conten,total,"11:00 am","11:50");										
														Contr->Pedidos->agregar_pedido(P1);
														Finalizar=1;
														break;
													}
												}
												
											}catch(string combos){
												cout<<"====================================\n";
												cout<<"Opciono no valida...\n";
												cout<<"====================================\n";
											}
										}while(Finalizar!=1);
										total=0;
										Finalizar=0;
										salir2 = 1;
										break; 
									}
								}
							}
							catch(string supmenus){
								cout<<"====================================\n";
								cout<<"Opciono no valida...\n";
								cout<<"====================================\n";
							}
						}while(salir2!=1);
						salir2=0;
						break;
					case 2:
						cout<<"====================================\n";
						cout<<"Saliendo...\n";
						cout<<"====================================\n";						
						Sleep(3600);
						salir=1;
						break;
					}
				}
			}
			catch(string menu){
				cout<<"====================================\n";
				cout<<"Opciono no valida...\n";
				cout<<"====================================\n";
			}
		}while(salir!=1);
		
		
	}else{
		do{
			Cliente *Inscrito = Contr->Clientes->user(verificar);
			system("cls");
			cout<<"=============Restaurantes===========\n";
			cout<<Contr->Restau->mostrar_lista();
			cout<<"====================================\n";
			cout<<" 1. Realizar Pedido\n";
			cout<<" 2. Salir\n";
			cout<<"====================================\n";
			cout<<"Opcion:  ";
			cin>>menu;
			try{
				if(menu!="1"&&menu!="2"){
					throw menu;
				}else{
					switch(stoi(menu)){
					case 1:
						do{
							cout<<"==============Eleccion==============\n";
							cout<<"Opcion:  ";
							cin>>supmenus;
							cout<<"====================================\n";
							try{
								if(supmenus!="1"&&supmenus!="2"&&supmenus!="3"&&supmenus!="4"&&supmenus!="5"&&supmenus!="6"&&supmenus!="7"){
									throw supmenus;
								}else{
									string conten="";
									double total=0;
									switch(stoi(supmenus)){
									case 1:
										do{
											system("cls");
											cout<<"====================================\n";
											cout<<KFC.tostring_contene_combo();
											cout<<"10. Salir\n";
											cout<<"====================================\n";
											cout<<"Opcion: ";
											cin>>combos;
											try{
												if(combos!="1"&&combos!="2"&&combos!="3"&&combos!="4"&&combos!="5"&&combos!="6"&&combos!="7"&&combos!="8"&&combos!="9"&&combos!="10"){
													throw combos;
												}else{
													switch(stoi(combos)){
													case 1:
														conten.append(KFC.combos[0].tostring_combo());
														total+=KFC.combos[0].get_precio();
														break;
													case 2:
														conten.append(KFC.combos[1].tostring_combo());
														total+=KFC.combos[1].get_precio();
														break;
													case 3:
														conten.append(KFC.combos[2].tostring_combo());
														total+=KFC.combos[2].get_precio();
														break;
													case 4:
														conten.append(KFC.combos[3].tostring_combo());
														total+=KFC.combos[3].get_precio();
														break;
													case 5:
														conten.append(KFC.combos[4].tostring_combo());
														total+=KFC.combos[4].get_precio();
														break;
													case 6:
														conten.append(KFC.combos[5].tostring_combo());
														total+=KFC.combos[5].get_precio();
														break;
													case 7:
														conten.append(KFC.combos[6].tostring_combo());
														total+=KFC.combos[6].get_precio();
														break;
													case 8:
														conten.append(KFC.combos[7].tostring_combo());
														total+=KFC.combos[7].get_precio();
														break;
													case 9:
														conten.append(KFC.combos[8].tostring_combo());
														total+=KFC.combos[8].get_precio();
														break;
													case 10:
														total*=1.13;
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"KFC","Entregado",conten,total,"11:00 am","11:50");										
														Contr->Pedidos->agregar_pedido(P1);
														Finalizar=1;
														break;
													}
												}
												
											}catch(string combos){
												cout<<"====================================\n";
												cout<<"Opciono no valida...\n";
												cout<<"====================================\n";
											}
										}while(Finalizar!=1);
										total=0;
										Finalizar=0;
										salir2 = 1;
										break; 
									case 2:
										do{
											system("cls");
											cout<<"====================================\n";
											cout<<Wendys.tostring_contene_combo();
											cout<<"10. Salir\n";
											cout<<"====================================\n";
											cout<<"Opcion: ";
											cin>>combos;
											try{
												if(combos!="1"&&combos!="2"&&combos!="3"&&combos!="4"&&combos!="5"&&combos!="6"&&combos!="7"&&combos!="8"&&combos!="9"&&combos!="10"){
													throw combos;
												}else{
													switch(stoi(combos)){
													case 1:
														conten.append(Wendys.combos[0].tostring_combo());
														total+=Wendys.combos[0].get_precio();
														break;
													case 2:
														conten.append(Wendys.combos[1].tostring_combo());
														total+=Wendys.combos[1].get_precio();
														break;
													case 3:
														conten.append(Wendys.combos[2].tostring_combo());
														total+=Wendys.combos[2].get_precio();
														break;
													case 4:
														conten.append(Wendys.combos[3].tostring_combo());
														total+=Wendys.combos[3].get_precio();
														break;
													case 5:
														conten.append(Wendys.combos[4].tostring_combo());
														total+=Wendys.combos[4].get_precio();
														break;
													case 6:
														conten.append(Wendys.combos[5].tostring_combo());
														total+=Wendys.combos[5].get_precio();
														break;
													case 7:
														conten.append(Wendys.combos[6].tostring_combo());
														total+=Wendys.combos[6].get_precio();
														break;
													case 8:
														conten.append(Wendys.combos[7].tostring_combo());
														total+=Wendys.combos[7].get_precio();
														break;
													case 9:
														conten.append(Wendys.combos[8].tostring_combo());
														total+=Wendys.combos[8].get_precio();
														break;
													case 10:
														total*=1.13;
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"Wendys","Entregado",conten,total,"11:00 am","11:50");											
														Contr->Pedidos->agregar_pedido(P1);
														Finalizar=1;
														break;
													}
												}
												
											}catch(string combos){
												cout<<"====================================\n";
												cout<<"Opciono no valida...\n";
												cout<<"====================================\n";
											}
										}while(Finalizar!=1);
										total=0;
										Finalizar=0;
										salir2 = 1;
										break; 
									case 3:
										do{
											system("cls");
											cout<<"====================================\n";
											cout<<Dominos.tostring_contene_combo();
											cout<<"10. Salir\n";
											cout<<"====================================\n";
											cout<<"Opcion: ";
											cin>>combos;
											try{
												if(combos!="1"&&combos!="2"&&combos!="3"&&combos!="4"&&combos!="5"&&combos!="6"&&combos!="7"&&combos!="8"&&combos!="9"&&combos!="10"){
													throw combos;
												}else{
													switch(stoi(combos)){
													case 1:
														conten.append(Dominos.combos[0].tostring_combo());
														total+=Dominos.combos[0].get_precio();
														break;
													case 2:
														conten.append(Dominos.combos[1].tostring_combo());
														total+=Dominos.combos[1].get_precio();
														break;
													case 3:
														conten.append(Dominos.combos[2].tostring_combo());
														total+=Dominos.combos[2].get_precio();
														break;
													case 4:
														conten.append(Dominos.combos[3].tostring_combo());
														total+=Dominos.combos[3].get_precio();
														break;
													case 5:
														conten.append(Dominos.combos[4].tostring_combo());
														total+=Dominos.combos[4].get_precio();
														break;
													case 6:
														conten.append(Dominos.combos[5].tostring_combo());
														total+=Dominos.combos[5].get_precio();
														break;
													case 7:
														conten.append(Dominos.combos[6].tostring_combo());
														total+=Dominos.combos[6].get_precio();
														break;
													case 8:
														conten.append(Dominos.combos[7].tostring_combo());
														total+=Dominos.combos[7].get_precio();
														break;
													case 9:
														conten.append(Dominos.combos[8].tostring_combo());
														total+=Dominos.combos[8].get_precio();
														break;
													case 10:
														total*=1.13;
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"Dominos","Entregado",conten,total,"11:00 am","11:50");										
														Contr->Pedidos->agregar_pedido(P1);
														Finalizar=1;
														break;
													}
												}
												
											}catch(string combos){
												cout<<"====================================\n";
												cout<<"Opciono no valida...\n";
												cout<<"====================================\n";
											}
										}while(Finalizar!=1);
										total=0;
										Finalizar=0;
										salir2 = 1;
										break; 
									case 4:
										do{
											system("cls");
											cout<<"====================================\n";
											cout<<PizzaH.tostring_contene_combo();
											cout<<"10. Salir\n";
											cout<<"====================================\n";
											cout<<"Opcion: ";
											cin>>combos;
											try{
												if(combos!="1"&&combos!="2"&&combos!="3"&&combos!="4"&&combos!="5"&&combos!="6"&&combos!="7"&&combos!="8"&&combos!="9"&&combos!="10"){
													throw combos;
												}else{
													switch(stoi(combos)){
													case 1:
														conten.append(PizzaH.combos[0].tostring_combo());
														total+=PizzaH.combos[0].get_precio();
														break;
													case 2:
														conten.append(PizzaH.combos[1].tostring_combo());
														total+=PizzaH.combos[1].get_precio();
														break;
													case 3:
														conten.append(PizzaH.combos[2].tostring_combo());
														total+=PizzaH.combos[2].get_precio();
														break;
													case 4:
														conten.append(PizzaH.combos[3].tostring_combo());
														total+=PizzaH.combos[3].get_precio();
														break;
													case 5:
														conten.append(PizzaH.combos[4].tostring_combo());
														total+=PizzaH.combos[4].get_precio();
														break;
													case 6:
														conten.append(PizzaH.combos[5].tostring_combo());
														total+=PizzaH.combos[5].get_precio();
														break;
													case 7:
														conten.append(PizzaH.combos[6].tostring_combo());
														total+=PizzaH.combos[6].get_precio();
														break;
													case 8:
														conten.append(PizzaH.combos[7].tostring_combo());
														total+=PizzaH.combos[7].get_precio();
														break;
													case 9:
														conten.append(PizzaH.combos[8].tostring_combo());
														total+=PizzaH.combos[8].get_precio();
														break;
													case 10:
														total*=1.13;
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"Pizza Hut","Entregado",conten,total,"11:00 am","11:50");										
														Contr->Pedidos->agregar_pedido(P1);
														Finalizar=1;
														break;
													}
												}
												
											}catch(string combos){
												cout<<"====================================\n";
												cout<<"Opciono no valida...\n";
												cout<<"====================================\n";
											}
										}while(Finalizar!=1);
										total=0;
										Finalizar=0;
										salir2 = 1;
										break; 
									case 5:
										do{
											system("cls");
											cout<<"====================================\n";
											cout<<PapaJ.tostring_contene_combo();
											cout<<"10. Salir\n";
											cout<<"====================================\n";
											cout<<"Opcion: ";
											cin>>combos;
											try{
												if(combos!="1"&&combos!="2"&&combos!="3"&&combos!="4"&&combos!="5"&&combos!="6"&&combos!="7"&&combos!="8"&&combos!="9"&&combos!="10"){
													throw combos;
												}else{
													switch(stoi(combos)){
													case 1:
														conten.append(PapaJ.combos[0].tostring_combo());
														total+=PapaJ.combos[0].get_precio();
														break;
													case 2:
														conten.append(PapaJ.combos[1].tostring_combo());
														total+=PapaJ.combos[1].get_precio();
														break;
													case 3:
														conten.append(PapaJ.combos[2].tostring_combo());
														total+=PapaJ.combos[2].get_precio();
														break;
													case 4:
														conten.append(PapaJ.combos[3].tostring_combo());
														total+=PapaJ.combos[3].get_precio();
														break;
													case 5:
														conten.append(PapaJ.combos[4].tostring_combo());
														total+=PapaJ.combos[4].get_precio();
														break;
													case 6:
														conten.append(PapaJ.combos[5].tostring_combo());
														total+=PapaJ.combos[5].get_precio();
														break;
													case 7:
														conten.append(PapaJ.combos[6].tostring_combo());
														total+=PapaJ.combos[6].get_precio();
														break;
													case 8:
														conten.append(PapaJ.combos[7].tostring_combo());
														total+=PapaJ.combos[7].get_precio();
														break;
													case 9:
														conten.append(PapaJ.combos[8].tostring_combo());
														total+=PapaJ.combos[8].get_precio();
														break;
													case 10:
														total*=1.13;
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"Papa Jons","Entregado",conten,total,"11:00 am","11:50");										
														Contr->Pedidos->agregar_pedido(P1);
														Finalizar=1;
														break;
													}
												}
												
											}catch(string combos){
												cout<<"====================================\n";
												cout<<"Opciono no valida...\n";
												cout<<"====================================\n";
											}
										}while(Finalizar!=1);
										total=0;
										Finalizar=0;
										salir2 = 1;
										break; 
									case 6:
										do{
											system("cls");
											cout<<"====================================\n";
											cout<<Bugys.tostring_contene_combo();
											cout<<"10. Salir\n";
											cout<<"====================================\n";
											cout<<"Opcion: ";
											cin>>combos;
											try{
												if(combos!="1"&&combos!="2"&&combos!="3"&&combos!="4"&&combos!="5"&&combos!="6"&&combos!="7"&&combos!="8"&&combos!="9"&&combos!="10"){
													throw combos;
												}else{
													switch(stoi(combos)){
													case 1:
														conten.append(Bugys.combos[0].tostring_combo());
														total+=Bugys.combos[0].get_precio();
														break;
													case 2:
														conten.append(Bugys.combos[1].tostring_combo());
														total+=Bugys.combos[1].get_precio();
														break;
													case 3:
														conten.append(Bugys.combos[2].tostring_combo());
														total+=Bugys.combos[2].get_precio();
														break;
													case 4:
														conten.append(Bugys.combos[3].tostring_combo());
														total+=Bugys.combos[3].get_precio();
														break;
													case 5:
														conten.append(Bugys.combos[4].tostring_combo());
														total+=Bugys.combos[4].get_precio();
														break;
													case 6:
														conten.append(Bugys.combos[5].tostring_combo());
														total+=Bugys.combos[5].get_precio();
														break;
													case 7:
														conten.append(Bugys.combos[6].tostring_combo());
														total+=Bugys.combos[6].get_precio();
														break;
													case 8:
														conten.append(Bugys.combos[7].tostring_combo());
														total+=Bugys.combos[7].get_precio();
														break;
													case 9:
														conten.append(Bugys.combos[8].tostring_combo());
														total+=Bugys.combos[8].get_precio();
														break;
													case 10:
														Finalizar=1;
														cout<<conten<<"\n";
														cout<<total*1.13<<"\n";
														break;
													}
												}
												
											}catch(string combos){
												cout<<"====================================\n";
												cout<<"Opciono no valida...\n";
												cout<<"====================================\n";
											}
										}while(Finalizar!=1);
										total=0;
										Finalizar=0;
										salir2 = 1;
										break; 
									case 7:
										do{
											system("cls");
											cout<<"====================================\n";
											cout<<TB.tostring_contene_combo();
											cout<<"10. Salir\n";
											cout<<"====================================\n";
											cout<<"Opcion: ";
											cin>>combos;
											try{
												if(combos!="1"&&combos!="2"&&combos!="3"&&combos!="4"&&combos!="5"&&combos!="6"&&combos!="7"&&combos!="8"&&combos!="9"&&combos!="10"){
													throw combos;
												}else{
													switch(stoi(combos)){
													case 1:
														conten.append(TB.combos[0].tostring_combo());
														total+=TB.combos[0].get_precio();
														break;
													case 2:
														conten.append(TB.combos[1].tostring_combo());
														total+=TB.combos[1].get_precio();
														break;
													case 3:
														conten.append(TB.combos[2].tostring_combo());
														total+=TB.combos[2].get_precio();
														break;
													case 4:
														conten.append(TB.combos[3].tostring_combo());
														total+=TB.combos[3].get_precio();
														break;
													case 5:
														conten.append(TB.combos[4].tostring_combo());
														total+=TB.combos[4].get_precio();
														break;
													case 6:
														conten.append(TB.combos[5].tostring_combo());
														total+=TB.combos[5].get_precio();
														break;
													case 7:
														conten.append(TB.combos[6].tostring_combo());
														total+=TB.combos[6].get_precio();
														break;
													case 8:
														conten.append(TB.combos[7].tostring_combo());
														total+=TB.combos[7].get_precio();
														break;
													case 9:
														conten.append(TB.combos[8].tostring_combo());
														total+=TB.combos[8].get_precio();
														break;
													case 10:
														total*=1.13;
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"Taco Bell","Entregado",conten,total,"11:00 am","11:50");										
														Contr->Pedidos->agregar_pedido(P1);
														Finalizar=1;
														break;
													}
												}
												
											}catch(string combos){
												cout<<"====================================\n";
												cout<<"Opciono no valida...\n";
												cout<<"====================================\n";
											}
										}while(Finalizar!=1);
										total=0;
										Finalizar=0;
										salir2 = 1;
										break; 
									}
								}
							}
							catch(string supmenus){
								cout<<"====================================\n";
								cout<<"Opciono no valida...\n";
								cout<<"====================================\n";
							}
						}while(salir2!=1);
						salir2=0;
						break;
					case 2:
						cout<<"====================================\n";
						cout<<"Saliendo...\n";
						cout<<"====================================\n";						
						Sleep(3600);
						salir=1;
						break;
					}
				}
			}
			catch(string menu){
				cout<<"====================================\n";
				cout<<"Opciono no valida...\n";
				cout<<"====================================\n";
			}
		}while(salir!=1);
	}
	
	
	
}

void Control::menu_repartidor(){
	
	//pedido prueba
	/*
	Pedido* ped1 = new Pedido("en preparacion","combo 1 uwu",2500, "1:20 pm", "1:45 pm");
	
	Interfaz *faz = new Interfaz;
	
	faz->Pedidos->agregar_pedido(ped1);
	*/
	srand(time(NULL));
	
	int kem = 1 + rand()% 11;  //para kmetros
	string op2, op3, op4, op5, op6;
	
	string op;	
	Interfaz* Rep = new Interfaz();
	
	//variables para Repartidor
	
	string id; string nombre; string num_tel; string tarje; string direc; string correo;
	
	float kilo = 0;
	int amonesta = 0;
	bool est = false;
	
	
	cout<<"Bienvenido a CletaEats: "<<endl;
	
	
	do{
		
		cout<<"Digite su ID: "<<endl;
		cin>>id;
		
		//SI EL REPARTIDOR NO EXISTE AGREGAR A LISTA
		
		if(Rep->Repartidores->buscar_reparti(id)==false){
			
			cout<<"Usted aun no esta registrado en la app, desea registrarse?"<<endl;
			cout<<"Digite 1 para registrarse o 2 para salir"<<endl;
			cin>>op;
			
			try{
				
				if(op!="1"&&op!="2"){
					
					throw op;
					
				}
				
				if(op=="1"){  //Pidiendo info del repartidor NUEVO
					
					cout<<"Escriba su id: "<<endl;
					cin>>id;
					cout<<"Escriba su nombre: "<<endl;
					cin>>nombre;
					cout<<"Escriba su numero de telefono: "<<endl;
					cin>>num_tel;
					cout<<"Escriba su numero de tarjeta: "<<endl;
					cin>>tarje;
					cout<<"Escriba su direccion: "<<endl;
					cin>>direc;
					cout<<"Escriba su correo electronico: "<<endl;
					cin>>correo;
					
					//creando objeto Repartidor en ejecucion y agregando a lista
					
					Repartidor *r1 = new Repartidor(nombre, id, num_tel, tarje, est, correo, direc, kilo, amonesta); 
					Rep->Repartidores->agregar_reparti(r1);
					cout<<"Su usuario fuae aniadido exitosamente"<<endl;
					break;
					
				}else{
					
					break;
					
				}
				
			}catch(string op){
				
				cout<<"Opcion invalida"<<endl;
				
			}
			
		}else{  //SI EL REPARTIDOR EXISTE
			
			Repartidor *uwu = Rep->Repartidores->userR(id);
			
			cout<<"Bienvenido de nuevo: "<<uwu->get_nombre()<<endl;
			system("pause");
			system("cls");
			
			cout<<"Desea aceptar un pedido?"<<endl;
			cout<<"Digite 1 para si o 2 para no: "<<endl;
			cin>>op2;
			
			try{  //arreglar
				
				if(op2!="1"&&op2!="2"){
					
					throw op2;
					
				}
				
				if(op2=="1"){
					
					Pedido *owo = Rep->Pedidos->pedido();
					cout<<"El pedido disponible para aceptar la entrega es: "<<owo->tostring_pedido()<<endl;
					cout<<"\nDigite 1 para aceptarlo o 2 para rechazarlo: "<<endl;
					cin>>op3;
					
					try{
						
						if(op3!="1"&&op3!="2"){
							
							throw op3;
							
						}
						
						//estados: en camino, suspendido y entregado
						
						if(op3=="1"){
							
							cout<<"Desea pasar el estado del pedido a: En camino  "<<endl;
							cin>>op4;
							
							try{
								
								
								if(op4!="1"&&op4!="2"){
									
									throw op3;
									
								}
								
								if(op4=="1"){
									
									owo->set_estado("En camino");
									cout<<"Usted ha cambiado exitosamente el estado del pedido a: En camino"<<endl;
									
								}else{
									
									cout<<"Esperando a que pase a en camino"<<endl;
									
								}
								
								
							}catch(string op4){
								
								cout<<"Opcion invalida"<<endl;
								
							}
							
						}else{
							
							cout<<"Usted ha rechazado el pedido"<<endl;
							exit(1);
							
						}
						
						
					}catch(string op3){
						
						cout<<"Opcion invalida"<<endl;
						
						
					}
					
					
				}else{
					
					cout<<"Saliendo"<<endl;
					exit(1);
					
				}
				
			}catch(string op2){
				
				cout<<"Opcion invalida"<<endl;
				
			}
			
		}
		
		
	} while(true);
	
	//delete r1;
	
}
