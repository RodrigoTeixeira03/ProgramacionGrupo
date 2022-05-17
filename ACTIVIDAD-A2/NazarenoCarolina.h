// MENU DE Nazareno Carolina
//
//
//
//
//
//
//


int NazarenoCarolinaSumaN(){
int Nc_cc=0,Nc_c;
	float Nc_n,Nc_st=0;
	
	cout<<"Ingrese la cantidad de numero que desea sumar: ";
	cin>>Nc_c;
	
	do{

	cout<<"Ingrese los numeros ";
	cin>>Nc_n;
	Nc_cc=Nc_cc+1;
	Nc_st=Nc_st+Nc_n;
	
	}while(Nc_cc<Nc_c);
	
	cout<< "El resultado de la suma total es: "<< Nc_st <<endl;
	
	cout<<endl<<"//================================================"<<endl;
    cout<<"//==> Nombre del programa: Calcular la suma de dos numeros"<<endl;
    cout<<"//==> Archivo : NazarenoCarolina_SumaN.cpp"<<endl;
    cout<<"//==>Autor: Carolina Nazareno"<<endl;
    cout<<"//==>Fecha de elaboración: 2022-05-01"<<endl;
    cout<<"//==>Fecha ultima actualización: 2022-05-12"<<endl;
    cout<<"//================================================="<<endl;

	return 0;
}

int NazarenoCarolinaCompara(){
float Nc_N1, Nc_N2;

cout<<"Ingrese  N1:" ; 
cin>>Nc_N1;

cout<<"Ingrese N2: " ; 
cin>>Nc_N2;

if(Nc_N1==Nc_N2){
	
cout<< " el valor de N1="<<Nc_N1<<":es igual a N2="<<Nc_N2<<endl;
}else{

if(Nc_N1<Nc_N2) 
{
	cout<< " El valor de N1="<<Nc_N1<<": ES MENOR A N2="<<Nc_N2<<endl;

}else{ 
	cout<<"El valor de N2="<<Nc_N2<<":ES MENOR A N1="<<Nc_N1<<endl;
}
}

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Comparacion de dos números"<<endl;
cout<<"//==> Archivo : NazarenoCarolina_Compara.cpp"<<endl;
cout<<"//==>Autor: Carolina Nazareno"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-01"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-12"<<endl;
cout<<"//================================================="<<endl;

return(0);
	
	
}

int NazarenoCarolinaPuntoVenta(){
float Nc_x,Nc_c=0,Nc_A=0,Nc_P,Nc_Vb,Nc_Viva,Nc_Vdes,Nc_Vf;
  
  cout<<"Ingrese el valor de P:"; 
  cin>>Nc_P;
  
  do
  {

  cout<<"Ingrese el valor de x:"; 
  cin>>Nc_x;
  
  Nc_c=Nc_c+1;
  Nc_A=Nc_A+Nc_x;


  }
  
  while(Nc_c<Nc_P);
  Nc_Vb=Nc_A;
  Nc_Viva=Nc_Vb*0.12;
  Nc_Vdes=Nc_Vb*0.10;
  Nc_Vf=Nc_Vb+Nc_Viva-Nc_Vdes;
  
  cout<<"valor final a pagar es de:";
  cout<<Nc_Vf<<endl;
  
 cout<<endl<<"//================================================"<<endl;
 cout<<"//==> Nombre del programa: Punto de venta"<<endl;
 cout<<"//==> Archivo : NazarenoCarolina_PuntoVenta.cpp"<<endl;
 cout<<"//==>Autor: Carolina Nazareno"<<endl;
 cout<<"//==>Fecha de elaboración: 2022-05-01"<<endl;
 cout<<"//==>Fecha ultima actualización: 2022-05-12"<<endl;
 cout<<"//================================================="<<endl;

return 0;
}


int NazarenoCarolinalaedad(){
int Nc_aa,Nc_ma,Nc_da,Nc_an,Nc_mn,Nc_dn,Nc_a,Nc_m,Nc_d;


cout<<"Ingrese la fecha actual (aaaa/mm/dd): "; 
cin>>Nc_aa>>Nc_ma>>Nc_da;

cout<<"Ingrese la fecha de nacimiento (aaaa/mm/dd): "; 
cin>>Nc_an>>Nc_mn>>Nc_dn;

if(Nc_da>Nc_dn)
{
	Nc_d=Nc_da-Nc_dn;
	
}else{

	Nc_da=Nc_da+30;
	Nc_ma=Nc_ma-1;
	Nc_d=Nc_da-Nc_dn;
}
if(Nc_ma>Nc_mn){
	
	Nc_m=Nc_ma-Nc_mn;
	
}else{
	
	Nc_mn=Nc_mn+12;
	Nc_aa=Nc_aa-1;
	Nc_m=Nc_ma-Nc_mn;
}

Nc_a=Nc_aa-Nc_an;


cout<<"La persona tiene :"<<Nc_a<<" años "<<Nc_m<< " meses "<<Nc_d<< " dias "<<endl;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Calcular la edad de una persona"<<endl;
cout<<"//==> Archivo : NazarenoCarolina_laedad.cpp"<<endl;
cout<<"//==>Autor: Carolina Nazareno"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-01"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-12"<<endl;
cout<<"//================================================="<<endl;

return 0;	
	
}


int NazarenoCarolinaCuentaMoneda(){
int Nc_c,Nc_sm=0,Nc_c1=0,Nc_c2=0,Nc_c3=0;
float Nc_tm,Nc_a=0,Nc_a1=0,Nc_a2=0,Nc_a3=0, Nc_m1=0.10 , Nc_m2=0.50, Nc_m3=0.25;

cout<<"Ingrese la cantidad de monedas: "; 
cin>>Nc_c;

do{

cout<<"Ingrese el tipo de las monedas:";
cin>>Nc_tm;

Nc_sm=Nc_sm+1;
Nc_a=Nc_a+1;

if(Nc_tm==Nc_m1){
Nc_c1=Nc_c1+1;
Nc_a1=Nc_a1+Nc_tm;
}

if(Nc_tm==Nc_m2){
Nc_c2=Nc_c2+1;
Nc_a2=Nc_a2+Nc_tm;
}



if(Nc_tm==Nc_m3){
Nc_c3=Nc_c3+1;
Nc_a3=Nc_a3+Nc_tm;
}

}while(Nc_sm<Nc_c);

cout<<"Se ingresaron "<<Nc_sm<<  " Monedas y un total de "<<Nc_sm<<"  monedas"<<endl;
cout<<"Se ingresaron "<<Nc_c1<<  " Monedas de 0.10 ctv y un total de   "<<Nc_c1<<"  monedas"<<endl;
cout<<"Se ingresaron "<<Nc_c2<<  " Monedas de 0.50 ctv y un total de"<<Nc_c2<<"  monedas"<<endl;
cout<<"Se ingresaron "<<Nc_c3<<  " Monedas de 0.25 ctv y un total de "<<Nc_c3<<"  monedas"<<endl;


cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Calcular la Cantidad de Moneda"<<endl;
cout<<"//==> Archivo : NazarenoCarolina_CuentaMoneda.cpp"<<endl;
cout<<"//==>Autor: Carolina Nazareno"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-01"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-12"<<endl;
cout<<"//================================================="<<endl;

return 0;	
}

int NazarenoCarolinamenu()
{
	int op,flag;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE Nazareno Carolina**************"<<endl<<endl;
			cout<<"1.- SUMA VARIOS NUMEROS \n";
			cout<<"2.- COMPARA 2 NUMEROS.\n";
			cout<<"3.- PUNTO DE VENTA \n"; 
			cout<<"4.- CALCULA EDAD. \n";
			cout<<"5.- MAQUINA CUANTA MONEDA.\n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
					//TRABAJO DEL INTEGRANTE 1.
					cout<<"\n SUMA VARIOS NUMEROS  "<<endl;
					 NazarenoCarolinaSumaN();			
					break;
				case 2:
					//TRABAJO DEL INTEGRANTE 2.
					cout<<"\nCOMPARA 2 NUIMEROS ";
					NazarenoCarolinaCompara();
					break;
				case 3:
					//TRABAJO DEL INTEGRANTE 3.
					cout<<"\n PUNTO DE VENTA ";
					NazarenoCarolinaPuntoVenta();
					break;
				case 4:
					//TRABAJO DEL INTEGRANTE 4.
					cout<<"\n CALCULA LA EDAD ";
					NazarenoCarolinalaedad();
					break;
				case 5:
					//TRABAJO DEL INTEGRANTE 4.
					cout<<"\n MAQUINA CUANTA MONEDAS ";
					NazarenoCarolinaCuentaMoneda();
					break;
				
				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
				   flag=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla
				   cout<<flag;
	}while(op!=0);
	

	return(0);

}
