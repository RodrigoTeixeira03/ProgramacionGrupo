//Trabajo de CoimeJohn



int CoimeJohnCompara(){
int CJ_num1, CJ_num2;
	cout<<"ingresar el primer numero: "<<endl;
	cin>>CJ_num1;
	cout<<"ingresar el segundo numero: "<<endl;
	cin>>CJ_num2;
	if(CJ_num1==CJ_num2){
		cout<<"son iguales";
	}
	else if(CJ_num1 < CJ_num2){
		cout<<"El segundo numero es mayor";
	}
	else {
		cout<<"el primer numero es mayor";
	}

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: CoimeJohnCompara"<<endl;
cout<<"//==> Archivo : CoimeJohn-Compara.CPP"<<endl;
cout<<"//==>Autor: COIME JOHN"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-18"<<endl;              
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;        
cout<<"//================================================="<<endl;
	return 0;

}

int CoimeJohnSumaN(){
	int CJ_N,CJ_i=0;
float CJ_a,CJ_S=0;
cout<<"ingrese el numero de veses que se va a sumar: ";
cin>>CJ_N;
do{
cout<<"ingrese una cantidad"<<endl;
cin>>CJ_a;
CJ_i=CJ_i+1;
CJ_S=CJ_S+CJ_a;
}
while(CJ_i<CJ_N);
cout<<"la cantidad final es: "<<CJ_S;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: CoimeJohnSumaN"<<endl;
cout<<"//==> Archivo : CoimeJohn-SumaN.cpp"<<endl;
cout<<"//==>Autor: COIME JOHN"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-18"<<endl;              
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;        
cout<<"//================================================="<<endl;
return 0;
}

int CoimeJohnPuntoVenta(){
	int CJ_i=0,CJ_p;
	float CJ_vp, CJ_a=0, CJ_vb, CJ_vIVA, CJ_vdes, CJ_vf, CJ_IVA=0.12, CJ_des=0.10;
        cout<<"cual es la cantidad de los productos : "<<endl;
	cin>>CJ_p;
	do{
	cout<<"Ingrede el valor de cada producto : "<<endl;
        cin>>CJ_vp;
	CJ_i=CJ_i+1;
	CJ_a=CJ_a+CJ_vp;
	}while(CJ_i<CJ_p);{
		CJ_vb=CJ_a;
	cout<<"El valor bruto es : "<<CJ_vb<<endl;
		CJ_vIVA=CJ_vb*CJ_IVA;
	cout<<"El valor del IVA es : "<<CJ_vIVA<<endl;
		CJ_vdes=CJ_vb*CJ_des;
	cout<<"El valor del descuento es : "<<CJ_vdes<<endl;
		CJ_vf=CJ_vb+CJ_vIVA-CJ_vdes;
	cout<<"El valor final es : "<<CJ_vf<<endl;
	}

	cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Punto de Venta"<<endl;
cout<<"//==> Archivo : Coimejohn-PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: COIME JOHN"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-18"<<endl;              
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;        
cout<<"//================================================="<<endl;
	return 0;

}


int CoimeJohnlaedad(){
int CJ_aa,CJ_ma,CJ_da,CJ_an,CJ_mn,CJ_dn,CJ_a,CJ_m,CJ_d;
	cout<<"ingrese el año actual: "<<endl; cin>>CJ_aa;
	cout<<"ingrese el mes actual: "<<endl; cin>>CJ_ma;
	cout<<"ingrese el dia actual: "<<endl; cin>>CJ_da;
	cout<<endl;
	cout<<"ingrese el año de nacimiento: "<<endl; cin>>CJ_an;
	cout<<"ingrese el mes de nacimiento: "<<endl; cin>>CJ_mn;
	cout<<"ingrese el dia de nacimiento: "<<endl; cin>>CJ_dn;
	if(CJ_da>=CJ_dn){
		CJ_d=CJ_da-CJ_dn;
		}
	else{
		CJ_ma=CJ_ma-1;
		CJ_da=CJ_da+30;
		CJ_d=CJ_da-CJ_dn;
	}
	if(CJ_ma>=CJ_mn){
		CJ_m=CJ_ma-CJ_mn;
	}
	else{
		CJ_aa=CJ_aa-1;
		CJ_ma=CJ_ma+12;

		CJ_m=CJ_ma-CJ_mn;
	}
	CJ_a=CJ_aa-CJ_an;
	cout<<endl;
	cout<<"tu edead actual es:"<<endl;
	cout<<CJ_a<<" años"<<endl;
	cout<<CJ_m<<" meses"<<endl;
	cout<<CJ_d<<" dias"<<endl;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: CoimeJohnlaedad"<<endl;
cout<<"//==> Archivo : CoimeJohn-laedad.cpp"<<endl;
cout<<"//==>Autor: COIME JOHN"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-18"<<endl;              
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;        
cout<<"//================================================="<<endl;
	return 0;

}


int CoimeJohnCuentaMoneda(){
int CJ_n, CJ_c, CJ_c1, CJ_c2, CJ_cl, CJ_cz;
	float CJ_x, CJ_al, CJ_a, CJ_a1, CJ_a2, CJ_az;
	CJ_c = 0;
	CJ_c1 = 0;
	CJ_c2 = 0;
	CJ_a = 0;
	CJ_a1 = 0;
	CJ_a2 = 0;
	cout<<"\n\tCuenta Moneda\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>CJ_n;
	do
	{

		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>CJ_x;
		CJ_c = CJ_c+1;
		CJ_a = CJ_a+CJ_x;
		if(CJ_x==0.25)
		{
			CJ_c1 = CJ_c1+1;
			CJ_a1 = CJ_x+CJ_a1;
		}
		else
			{
				CJ_c2 = CJ_c2+1;
				CJ_a2 = CJ_a2+CJ_x;
			}
   }
	while(CJ_c<CJ_n);
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<CJ_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<CJ_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<CJ_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<CJ_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<CJ_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<CJ_a1<<endl;
cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Cuenta monedas"<<endl;
cout<<"//==> Archivo : CoimeJohn-CuentaMoneda.cpp"<<endl;
cout<<"//==>Autor: COIME JOHN"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-18"<<endl;              
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;        
cout<<"//================================================="<<endl;
return 0;
	
}

int CoimeJohnmenu(){


	int op,flag4;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE Coime John**************"<<endl<<endl;
			cout<<"1.- SUMA VARIOS NUMEROS \n";
			cout<<"2.- COMPARA 2 NUMEROS.\n";
			cout<<"3.- PUNTO DE VENTA \n"; 
			cout<<"4.- CALCULA EDAD. \n";
			cout<<"5.- MAQUINA CUANTA MONEDA.\n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
				system("clear");	
					cout<<"\n SUMA VARIOS NUMEROS  "<<endl;
					 CoimeJohnSumaN();			
					break;
				case 2:
					system("clear");
					cout<<"\nCOMPARA 2 NUIMEROS ";
					CoimeJohnCompara();
					break;
				case 3:
				system("clear");
					cout<<"\n PUNTO DE VENTA ";
					CoimeJohnPuntoVenta();
					break;
				case 4:
					system("clear");
					cout<<"\n CALCULA LA EDAD ";
					CoimeJohnlaedad();
					break;
				case 5:
					system("clear");
					cout<<"\n MAQUINA CUANTA MONEDAS ";
					CoimeJohnCuentaMoneda();
					break;
				
				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
				                       flag4=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla

	}while(op!=0);
	
	cout<<"=========================================\n";
	cout<<"                 Coime John              \n";
	cout<<" Gmail: john.coime.bone@utelvt.edu.ec    \n";
        cout<<"=========================================\n";

	return(0);

}
