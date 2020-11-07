#include "Control.h"

Control::Control(){
	
	Cliente* c1 = new Cliente("Emanuel","402540125","8798746","9999w",true,"Ema2821@gmail.com","Heredia",5);
	Cliente* c2 = new Cliente("Jose","902540125","4646468","9999w",false,"Joseam89@gmail.com","Heredia",9);
	Cliente* c3 = new Cliente("Marcos","202540125","65465412","9999w",true,"marsa46@gmail.com","Heredia",4);
	
	Repartidor* r1 = new Repartidor("Victor", "4654564", "24586", "5asd4", true, "vict@gmail.com", "Palmares", 7.3, 0);
	Repartidor* r2 = new Repartidor("Kevin", "465454", "34586", "234d4", false, "kev@gmail.com", "Heredia", 2.3, 2);
	Repartidor* r3 = new Repartidor("Warner", "4gseg564", "14586", "53gd4", false, "war@gmail.com", "San Jose", 1.3, 4);
	
	Pedido* p1 = new Pedido("402540125","Popeyes",c1->get_direccion(),"Entregado","4x Alitas 4000\n",4520,"11:12","_:_","4654564");
	Pedido* p2 = new Pedido("902540125","Popeyes",c2->get_direccion(),"Entregado","8x Alitas 6000\n",6780,"11:12","12:30","4654564");
	Pedido* p3 = new Pedido("202540125","Popeyes",c3->get_direccion(),"Entregado","4x Alitas 4000\n",4520,"11:55","01:00","4654564");
	
	
	Menu = new Interfaz(p1,p2,p3,r1,r2,r3,c1,c2,c3);
	
	
}
void Control::menu_cliente(){

	//LLenando combos de los 7 restaurantes:
	
	//KFC
	

	Combo uno("4 Alitas", 4000); Combo dos("6 Alitas", 5000); Combo tre("8 Alitas", 6000);
	Combo cuat("Porc. Muslo", 7000); Combo cinc("Porc. Pechuga", 8000); Combo sei("Bucket de Alitas", 9000);
	Combo sie("Bucket de Muslos", 10000); Combo och("Familiar #1", 11000); Combo nue("Familiar #2", 12000);
	ContenedorCombo Popeyes(uno, dos, tre, cuat, cinc, sei, sie, och, nue);
	
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
	if(Menu->Clientes->BuscarCliente(verificar)==false){
		cout<<"==========================================\n";
		cout<<"Necesitamos algunos de tus datos para proseguir\n\n";
		cout<<"Digite su nombre: ";cin>>Nombre;cout<<"\n";
		cout<<"Digite su numero de telefono: ";cin>>NumTel;cout<<"\n";
		cout<<"Digite su numero de tarjeta: ";cin>>NumTarje;cout<<"\n";
		cout<<"Digite su correo: ";cin>>Correo;cout<<"\n";
		cout<<"Digite su Ubicacion: ";cin>>Ubica;cout<<"\n";
		cout<<"==========================================\n";
		cout<<"Se inscribio en la app exitosamente\n";
		cout<<"==========================================\n";
		cout<<"Espere mientras ingresa al menu...\n";
		cout<<"==========================================\n";
		Sleep(3600);
		Cliente *c11 = new Cliente(Nombre,verificar,NumTel,NumTarje,true,Correo,Ubica,0);
		Menu->Clientes->Agregar(c11);
		Menu->GuardaClientes(c11);
		
		do{
			Cliente *Inscrito = Menu->Clientes->user(verificar);
			system("cls");
			cout<<"=============Restaurantes===========\n";
			cout<<Menu->Restau->mostrar_lista();
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
							cout<<"=======Eleccion de Restaurante======\n";
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
											cout<<Popeyes.tostring_contene_combo();
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
														conten.append(Popeyes.combos[0].tostring_combo());
														total+=Popeyes.combos[0].get_precio();
														break;
													case 2:
														conten.append(Popeyes.combos[1].tostring_combo());
														total+=Popeyes.combos[1].get_precio();
														break;
													case 3:
														conten.append(Popeyes.combos[2].tostring_combo());
														total+=Popeyes.combos[2].get_precio();
														break;
													case 4:
														conten.append(Popeyes.combos[3].tostring_combo());
														total+=Popeyes.combos[3].get_precio();
														break;
													case 5:
														conten.append(Popeyes.combos[4].tostring_combo());
														total+=Popeyes.combos[4].get_precio();
														break;
													case 6:
														conten.append(Popeyes.combos[5].tostring_combo());
														total+=Popeyes.combos[5].get_precio();
														break;
													case 7:
														conten.append(Popeyes.combos[6].tostring_combo());
														total+=Popeyes.combos[6].get_precio();
														break;
													case 8:
														conten.append(Popeyes.combos[7].tostring_combo());
														total+=Popeyes.combos[7].get_precio();
														break;
													case 9:
														conten.append(Popeyes.combos[8].tostring_combo());
														total+=Popeyes.combos[8].get_precio();
														break;
													case 10:
														total*=1.13;
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"Popeyes",Inscrito->get_direccion(),"En preparacion",conten,total,"11:00","_:_","");										
														Menu->Pedidos->agregar_pedido(P1);
														Finalizar=1;
														system("cls");
														cout<<"===========================\n";
														cout<<"Orden: \n";
														cout<<P1->tostring_pedido();
														cout<<"===========================\n";
														cout<<"\nGracias por su compra!\n";
														cout<<"===========================\n";
														Sleep(3600);
														salir=1;
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
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"Wendys",Inscrito->get_direccion(),"En preparacion",conten,total,"11:00","_:_","");											
														Menu->Pedidos->agregar_pedido(P1);
														Finalizar=1;
														system("cls");
														cout<<"===========================\n";
														cout<<"\nOrden: \n";
														cout<<P1->tostring_pedido();
														cout<<"===========================\n";
														cout<<"Gracias por su compra!\n";
														cout<<"===========================\n";
														Sleep(3600);
														salir=1;
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
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"Dominos",Inscrito->get_direccion(),"En preparacion",conten,total,"11:00","_:_","");										
														Menu->Pedidos->agregar_pedido(P1);
														Finalizar=1;
														system("cls");
														cout<<"===========================\n";
														cout<<"\nOrden: \n";
														cout<<P1->tostring_pedido();
														cout<<"===========================\n";
														cout<<"Gracias por su compra!\n";
														cout<<"===========================\n";
														Sleep(3600);
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
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"Pizza Hut",Inscrito->get_direccion(),"En preparacion",conten,total,"11:19","_:_","");										
														Menu->Pedidos->agregar_pedido(P1);
														Finalizar=1;
														system("cls");
														cout<<"===========================\n";
														cout<<"Orden: \n";
														cout<<P1->tostring_pedido();
														cout<<"===========================\n";
														cout<<"Gracias por su compra!\n";
														cout<<"===========================\n";
														Sleep(3600);
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
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"Papa Jons",Inscrito->get_direccion(),"En preparacion",conten,total,"11:00","_:_","");										
														Menu->Pedidos->agregar_pedido(P1);
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
														total*=1.13;
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"Bygys",Inscrito->get_direccion(),"En preparacion",conten,total,"11:00","_:_","");										
														Menu->Pedidos->agregar_pedido(P1);
														Finalizar=1;
														system("cls");
														cout<<"===========================\n";
														cout<<"Orden: \n";
														cout<<P1->tostring_pedido();
														cout<<"===========================\n";
														cout<<"Gracias por su compra!\n";
														cout<<"===========================\n";
														Sleep(3600);
														salir=1;
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
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"Taco Bell",Inscrito->get_direccion(),"En preparacion",conten,total,"11:00 am","_:_","");										
														Menu->Pedidos->agregar_pedido(P1);
														Finalizar=1;
														system("cls");
														cout<<"===========================\n";
														cout<<"Orden: \n";
														cout<<P1->tostring_pedido();
														cout<<"===========================\n";
														cout<<"Gracias por su compra!\n";
														cout<<"===========================\n";
														Sleep(3600);
														salir=1;
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
			Cliente *Inscrito = Menu->Clientes->user(verificar);
			if(Menu->Pedidos->verifica_estado(Inscrito->get_cedula())==false){
				system("cls");
				cout<<"=============Restaurantes===========\n";
				cout<<Menu->Restau->mostrar_lista();
				cout<<"====================================\n";
				cout<<" 1. Realizar Pedido\n";
				cout<<" 2. Salir\n";
				cout<<"====================================\n";
				cout<<"Opcion:  ";
				cin>>menu;
			}else{
				cout<<"====================================\n";
				cout<<"Su pedido esta en espera o en camino\n";
				cout<<"====================================\n";
				menu="2";
			}
			try{
				if(menu!="1"&&menu!="2"){
					throw menu;
				}else{
					switch(stoi(menu)){
					case 1:
						do{
							cout<<"=======Eleccion de Restaurante======\n";
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
											cout<<Popeyes.tostring_contene_combo();
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
														conten.append(Popeyes.combos[0].tostring_combo());
														total+=Popeyes.combos[0].get_precio();
														break;
													case 2:
														conten.append(Popeyes.combos[1].tostring_combo());
														total+=Popeyes.combos[1].get_precio();
														break;
													case 3:
														conten.append(Popeyes.combos[2].tostring_combo());
														total+=Popeyes.combos[2].get_precio();
														break;
													case 4:
														conten.append(Popeyes.combos[3].tostring_combo());
														total+=Popeyes.combos[3].get_precio();
														break;
													case 5:
														conten.append(Popeyes.combos[4].tostring_combo());
														total+=Popeyes.combos[4].get_precio();
														break;
													case 6:
														conten.append(Popeyes.combos[5].tostring_combo());
														total+=Popeyes.combos[5].get_precio();
														break;
													case 7:
														conten.append(Popeyes.combos[6].tostring_combo());
														total+=Popeyes.combos[6].get_precio();
														break;
													case 8:
														conten.append(Popeyes.combos[7].tostring_combo());
														total+=Popeyes.combos[7].get_precio();
														break;
													case 9:
														conten.append(Popeyes.combos[8].tostring_combo());
														total+=Popeyes.combos[8].get_precio();
														break;
													case 10:
														total*=1.13;
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"Popeyes",Inscrito->get_direccion(),"En preparacion",conten,total,"11:00","_:_","");										
														Menu->Pedidos->agregar_pedido(P1);
														Finalizar=1;
														system("cls");
														cout<<"===========================\n";
														cout<<"Orden: \n";
														cout<<P1->tostring_pedido();
														cout<<"===========================\n";
														cout<<"Gracias por su compra!\n";
														cout<<"===========================\n";
														Sleep(3600);
														salir=1;
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
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"Wendys",Inscrito->get_direccion(),"En preparacion",conten,total,"11:00","_:_","");											
														Menu->Pedidos->agregar_pedido(P1);
														Finalizar=1;
														system("cls");
														cout<<"===========================\n";
														cout<<"Orden: \n";
														cout<<P1->tostring_pedido();
														cout<<"===========================\n";
														cout<<"\nGracias por su compra!\n";
														cout<<"===========================\n";
														Sleep(3600);
														salir=1;
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
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"Dominos",Inscrito->get_direccion(),"En preparacion",conten,total,"11:00","_:_","");										
														Menu->Pedidos->agregar_pedido(P1);
														Finalizar=1;
														system("cls");
														cout<<"===========================\n";
														cout<<"Orden: \n";
														cout<<P1->tostring_pedido();
														cout<<"===========================\n";
														cout<<"Gracias por su compra!\n";
														cout<<"===========================\n";
														Sleep(3600);
														salir=1;
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
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"Pizza Hut",Inscrito->get_direccion(),"En preparacion",conten,total,"11:00","_:_","");										
														Menu->Pedidos->agregar_pedido(P1);
														Finalizar=1;
														system("cls");
														cout<<"===========================\n";
														cout<<"Orden: \n";
														cout<<P1->tostring_pedido();
														cout<<"===========================\n";
														cout<<"Gracias por su compra!\n";
														cout<<"===========================\n";
														Sleep(3600);
														salir=1;
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
												if(combos!="1"&&combos!="2"&&combos!="3"&&combos!="4"&&combos!="5"&&combos!="6"&&combos!="7"&&combos!="8"&&combos!="9"&&combos!="10",""){
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
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"Papa Jons",Inscrito->get_direccion(),"En preparacion",conten,total,"11:00 am","_:_","");										
														Menu->Pedidos->agregar_pedido(P1);
														Finalizar=1;
														system("cls");
														cout<<"===========================\n";
														cout<<"Orden: \n";
														cout<<P1->tostring_pedido();
														cout<<"===========================\n";
														cout<<"Gracias por su compra!\n";
														cout<<"===========================\n";
														Sleep(3600);
														salir=1;
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
														total*=1.13;
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"Bygys",Inscrito->get_direccion(),"En preparacion",conten,total,"11:00","_:_","");										
														Menu->Pedidos->agregar_pedido(P1);
														Finalizar=1;
														system("cls");
														cout<<"===========================\n";
														cout<<"Orden: \n";
														cout<<P1->tostring_pedido();
														cout<<"===========================\n";
														cout<<"Gracias por su compra!\n";
														cout<<"===========================\n";
														Sleep(3600);
														salir=1;
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
														Pedido *P1 = new Pedido(Inscrito->get_cedula(),"Taco Bell",Inscrito->get_direccion(),"En preparacion",conten,total,"11:00","_:_","");										
														Menu->Pedidos->agregar_pedido(P1);
														Finalizar=1;
														system("cls");
														cout<<"===========================\n";
														cout<<"Orden: \n";
														cout<<P1->tostring_pedido();
														cout<<"===========================\n";
														cout<<"Gracias por su compra!\n";
														cout<<"===========================\n";
														Sleep(3600);
														salir=1;
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
	
	//costos de envio
	
	const int costo_km_habil = 1000;
	//const int costo_km_feria = 1500;
	
	srand(time(NULL));
	
	int kem = 1 + rand()% 11;  //para kmetros
	double precio;
	string op2, op3, op4, op5, op6;
	
	string op;	
	string hora;
	
	//variables para Repartidor nuevo
	
	string id; string nombre; string num_tel; string tarje; string direc; string correo;
	
	float kilo = 0;
	int amonesta = 0;
	bool est = false;
	
	//Pedido en preparacion
	
	Pedido *owo = Menu->Pedidos->pedido();
	
	//op menu principal
	
	string iwi;
	
	do{
		
		cout<<"Bienvenido a CletaEats: "<<endl;
		cout<<"Digite 1 para iniciar session"<<endl;
		cout<<"Digite 2 para salir"<<endl;
		cin>>iwi;
		
		try{
			
			if(iwi!="1"&&iwi!="2"){
				
				throw iwi;
				
			}
			
			if(iwi=="1"){
				
				do{
					
					cout<<"Digite su ID: "<<endl;
					cin>>id;
					system("pause");
					system("cls");
					
					//SI EL REPARTIDOR NO EXISTE AGREGAR A LISTA
					
					if(Menu->Repartidores->buscar_reparti(id)==false){
						
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
								
								Repartidor *r11 = new Repartidor(nombre, id, num_tel, tarje, est, correo, direc, kilo, amonesta); 
								Menu->Repartidores->agregar_reparti(r11);
								Menu->GuardaRepartidores(r11);
								cout<<"Su usuario fua aniadido exitosamente"<<endl;
								system("pause");
								system("cls");
								break;
								
							}else{
								
								break;
								
							}
							
						}catch(string op){
							
							cout<<"Opcion invalida"<<endl;
							system("pause");
							system("cls");
							break;
							
						}
						
					}else{  //SI EL REPARTIDOR EXISTE
						
						Repartidor *uwu = Menu->Repartidores->userR(id);
						
						cout<<"Bienvenido de nuevo: "<<uwu->get_nombre()<<endl;
						system("pause");
						system("cls");
						
						cout<<"Desea aceptar un pedido?"<<endl;
						cout<<"Digite 1 para si o 2 para no: "<<endl;
						cin>>op2;
						system("pause");
						system("cls");
						
						try{  //arreglar
							
							if(op2!="1"&&op2!="2"){
								
								throw op2;
								
							}
							
							if(op2=="1"){  //si acepta el pedido
								
								if(uwu->get_num_amonesta() > 4){ 
									
									cout<<"Lo sentimos, pero debido a su numero de amonestaciones no puede realizar entregas"<<endl;
									system("pause");
									system("cls");
									break;
									
								}
								
								//Pedido *owo = Menu->Pedidos->pedido();
								precio = owo->get_precio();  //obtengo precio del pedido
								cout<<"El pedido disponible para aceptar la entrega es: "<<owo->tostring_pedido()<<endl;
								cout<<"\nDigite 1 para aceptarlo o 2 para rechazarlo: "<<endl;
								cin>>op3;
								system("pause");
								system("cls");
								
								try{
									
									if(op3!="1"&&op3!="2"){
										
										throw op3;
										
									}
									
									//estados: en camino, suspendido y entregado
									
									if(op3=="1"){
										uwu->set_estado(true);
										owo->set_id_reparti(uwu->get_cedula());
										cout<<"Desea pasar el estado del pedido a: En camino  "<<endl;
										cout<<"1: SI || 2.NO"<<endl;
										cin>>op4;
										system("pause");
										system("cls");
										
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
											system("pause");
											system("cls");
											break;
											
										}
										
									}else{
										
										cout<<"Usted ha rechazado el pedido"<<endl;
										break;
										
									}
									
									
								}catch(string op3){
									
									cout<<"Opcion invalida"<<endl;
									system("pause");
									system("cls");
									break;
									
								}
								
							}else{
								
								cout<<"Saliendo"<<endl;
								system("pause");
								system("cls");
								break;
								
							}
							
						}catch(string op2){
							
							cout<<"Opcion invalida"<<endl;
							system("pause");
							system("cls");
							break;
							
						}//despues del set a en camino
						
						cout<<"Desea pasar el estado del pedido a: 1: Entregado || 2: Suspendido"<<endl;
						cin>>op5;
						system("pause");
						system("cls");
						
						try{
							
							if(op5!="1"&&op4!="2"){
								
								throw op5;
								
							}
							
							if(op5=="1"){ //si lo entrega
								
								int tot = kem * costo_km_habil;
								int km = uwu->get_num_kms_diario();
								km += kem;
								uwu->set_num_kms_diario(km);  //aumento de los km recorridos
								
								cout<<"Usted ha pasado el estado del pedido a entregado: "<<endl;
								cout<<"El numero de Kilometros recorridos fue de: "<<kem<<endl;
								cout<<"Monto de los Kilometros recorridos: "<<tot<<endl;
								precio+=tot;
								owo->set_precio(precio);
								owo->set_estado("Entregado");
								cout<<"Digite la hora en la que entrego el pedido: "<<endl;
								getline(cin, hora);
								owo->set_hora_fin(hora);
								
								Menu->GuardaPedidos(owo->get_id_clie(),owo);
								
								uwu->set_estado(false);
								
								cout<<"\n\nLos "<<tot<<" seran depositados en su tarjeta n:"<<uwu->get_num_tarje()<<endl;
								system("pause");
								system("cls");
								break;
								
							}else{ //si lo suspende
								
								cout<<"El pedido no ha sido entregado, su estado ha sido cambiado a: Suspendido"<<endl;
								system("pause");
								system("cls");
								cout<<"Saliendo"<<endl;
								system("pause");
								system("cls");
								break;
								
							}
							
						}catch(string op5){
							
							cout<<"Opcion invalida"<<endl;
							system("pause");
							system("cls");
							break;
							
						}//pasar a suspendido o entregado
						
					}
					
				} while(iwi!="2");
				
			}else{
				
				cout<<"Saliendo"<<endl;
				break;
				
			}
			
		}catch(string iwi){
			
			cout<<"Opcion invalida"<<endl;
			system("pause");
			system("cls");
			
		}
		
	} while(iwi!="2");
	
}
void Control::menu_admin(){
	
	string op, id;
	
	do{
		
		cout<<"Bienvenido: Administrador"<<endl;
		
		cout<<"Escoga la accion que desea realizar: "<<endl;
		
		cout<<"\n1. Ver la lista de clientes"<<endl;
		cout<<"2. Ver la lista de repartidores"<<endl;
		cout<<"3. Ver los pedidos de un cliente en especifico"<<endl;
		cout<<"4. Ver la lista de quejas de un repartidor en especifico"<<endl;
		cout<<"5. Ver Restaurante con mayor numero de envios"<<endl;
		cout<<"6. Ver Restaurante con menor numero de envios"<<endl;
		cout<<"7. Ver el total de dinero vendido por cada Restaurante"<<endl;
		cout<<"8. Ver Total vendido por todos los Restaurantes"<<endl;
		cout<<"9. Ver cliente con mas pedidos"<<endl;
		cout<<"10. Ver hora en la que se realizaron mas pedidos"<<endl;
		cout<<"11. Salir"<<endl;
		cin>>op;
		system("pause");
		system("cls");
		
		try{
			
			if(op!="1"&&op!="2"&&op!="3"&&op!="4"&&op!="5"&&op!="6"&&op!="7"&&op!="8"&&op!="9"&&op!="10"&&op!="11"){
				
				throw(op);
				
			}
			
			switch(stoi(op)){
				
			case 1:
				
				cout<<"Lista de clientes: "<<endl;
				Menu->LeerClientes();
				system("pause");
				system("cls");
				break;
				
			case 2:
				
				cout<<"Lista de repartidores: "<<endl;
				Menu->LeerRepartidores();
				system("pause");
				system("cls");
				break;
				
			case 3:
				
				cout<<"Para ver los pedidos de un cliente, digite el id de dicho cliente: "<<endl;
				cin>>id;
				
				if(Menu->Clientes->checkC(id)==true){
					
					Menu->LeerPedidos(id);
					system("pause");
					system("cls");
					break;
					
				}else{
					
					cout<<"Cedula no registrada"<<endl;
					system("pause");
					system("cls");
					break;
					
				}
				
			case 4:
				   
				   cout<<"Para ver la lista de quejas de un repartidor, digite el id de dicho repartidor"<<endl;
				   cin>>id;
				   
				   if(Menu->Repartidores->checkR(id)==true){
					   
					   //Menu->leer_queja(id);
					   system("pause");
					   system("cls");
					   break;
					   
					   
				   }else{
					   
					   cout<<"Cedula de repartidor no registrada"<<endl;
					   break;
					   
				   }
				   
				   break;
				   
			case 5:
				
				cout<<"El restaurante con mas pedidos es: "<<Menu->Restau->mas_pedidos()<<endl;
				
				system("pause");
				system("cls");
				
				break;
				
			case 6:
				
				cout<<"El resturante con menos pedidos es: "<<Menu->Restau->menos_pedidos()<<endl;
				
				system("pause");
				system("cls");
				
				break;
				
			case 7:
				
				cout<<"Detalle del total vendido por cada Restaurante: "<<endl;
				
				cout<<Menu->Restau->total_resta();
				
				system("pause");
				system("cls");
				
				break;
				
			case 8:
				
				cout<<"El total de dinero recaudado por todos los restaurantes es de: "<<Menu->Restau->total_all()<<endl;
				
				system("pause");
				system("cls");
				
				break;
				
			case 9:
				
				cout<<"El cliente con mas pedidos es: "<<endl;
				
				Menu->Client_MayorP();
				
				system("pause");
				system("cls");
				
				break;
				
			case 10:
				
				Menu->Pedidos->hora_pico();
				cout<<"\n"<<endl;
				
				system("pause");
				system("cls");
				
				break;
				
			case 11:
				
				cout<<"Saliendo..."<<endl;
				system("pause");
				break;
				
			default:
				
				cout<<"Opcion invalida"<<endl;
				system("pause");
				system("cls");
				break;
				
			}
			
		}catch(string op){
			
			cout<<"Opcion invalida"<<endl;
			system("pause");
			system("cls");
			
		}
		
		
	} while(op!="11");	
	
}
void Control::menu_quejas(){
	
	string verificar;
	string Num;
	string contenido="";
	
	
	cout<<"==========================================\n";
	cout<<"Digite su ID: ";
	cin>>verificar;
	if(Menu->Clientes->BuscarCliente(verificar)==false){
		system("cls");
		cout<<"==========================================\n";
		cout<<"El id no esta registrado, volviendo al menu\n";
		cout<<"==========================================\n";
		Sleep(1600);
	}else{
		NodoPedido *Ver_Ultimo_Ped = Menu->Pedidos->get_head();
		
		Pedido *Queja = NULL;
		
		while(Ver_Ultimo_Ped!=NULL){
			if(Ver_Ultimo_Ped->get_pedido()->get_id_clie()==verificar&&Ver_Ultimo_Ped->get_pedido()->get_estado()=="Entregado"){
				Queja = Ver_Ultimo_Ped->get_pedido();
			}
			Ver_Ultimo_Ped = Ver_Ultimo_Ped->get_sig_pedido();
		}
		if(Queja==NULL){
			cout<<"================================\n";
			cout<<"No ha realizado ningun Pedido\n";
			cout<<"================================\n";
			Sleep(1600);
		}else{
			string id_repa = Queja->get_id_reparti();
			cout<<"================================\n";
			cout<<"Presentacion: ";
			cin>>Num;
			contenido.append("Presentacion: "+Num+"\n");
			cout<<"Amabilidad: ";
			cin>>Num;
			contenido.append(" Amabilidad: "+Num+"\n");
			cout<<"Tiempo de espera: ";
			cin>>Num;
			contenido.append(" Tiempo de espera: "+Num+"\n");
			cout<<"General: ";
			cin>>Num;
			contenido.append(" General: "+Num+"\n");
			Menu->queja(id_repa,contenido);
		} 
		
	}
	
	
}
Control::~Control(){
}

void Control::guardarlistas(){
	
	string op;
	
	do{
		
		cout<<"Desea guardar las listas utilizadas en esta seccion?"<<endl;
		cout<<"1. Si     ||      2. No"<<endl;
		cin>>op;
		system("pause");
		system("cls");
		
		try{
			
			if(op=="1"){
				
				Menu->guardar_listas();
				Menu->guardar_restau();
				cout<<"Listas guardadas con exito"<<endl;
				system("pause");
				system("cls");
				break;
				
			}else if(op=="2"){
				
				cout<<"No se han guardado las listas"<<endl;
				system("pause");
				system("cls");
				break;
				
			}else{
				
				cout<<"Opcion invalida"<<endl;
				system("pause");
				system("cls");
				
			}
			
		}catch(string op){
			
			cout<<"Opcion invalida";
			system("pause");
			system("cls");
			
		}
		
	}while(op!="2");
	
}

void Control::cargarlistas(){
	
	string op;
	
	do{
		
		cout<<"Desea cargar las listas de Clientes y Repartidores almacenadas?"<<endl;
		cout<<"1. Si     ||      2. No"<<endl;
		cin>>op;
		system("pause");
		system("cls");
		
		try{
			
			if(op=="1"){
				
				Menu->cargar_lista_cliente();
				Menu->cargar_lista_reparti();
				Menu->cargar_restau();
				
				cout<<"Listas cargadas con exito"<<endl;
				system("pause");
				system("cls");
				break;
				
			}else if(op=="2"){
				
				cout<<"No se han cargado las listas"<<endl;
				system("pause");
				system("cls");
				break;
				
			}else{
				
				cout<<"Opcion invalida";
				system("pause");
				system("cls");
				
			}
			
		}catch(string op){
			
			cout<<"Opcion invalida";
			system("pause");
			system("cls");
			
		}
		
	}while(op!="2");
	
}
