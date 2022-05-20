// MENU DE TeixeiraRodrigo
//
//
//
//
//
//
//


int TeixeiraRodrigoSumaN()
{
	int c=0,n;
	float x,a=0;
	cout<<"\n SUMA DE VARIOS NUMERO "<<endl;
	cout<<"Ingrese n: "; cin>>n;
	do{
		cout<<"Ingrese x: "; cin>>x;
		c=c+1;
		a=a+x;
	}while(c<n);
	cout<<"la suma de= "<<n<< "Numeros fue= : "<<a<<endl;
  return 0;

}

int TeixeiraRodrigoCompara(){
	
float TRA,TRB;
	cout<<"INGRESE LOS VALORES A   B  \n";
	cin>>TRA>>TRB;
if(TRA==TRB){
	cout<<"el valor=" <<TRA<< "es igual a=" <<TRB;
}else{
	if(TRA<TRB){
		cout<<"el valor=" <<TRA<<"es menor que=" <<TRB;
}else{
	cout<<"el valor de=" <<TRA<< "es mayor que=" <<TRB;
}
}
cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Comparacion de dos numeros"<<endl;
cout<<"//==> Archivo : TeixeiraRodrigo-Compara.cpp"<<endl;
cout<<"//==>Autor: Teixeira Rodrigo"<<endl;
cout<<"//==>Fecha de elaboración: 2022-03-25"<<endl;              
cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;        
cout<<"//================================================="<<endl;
return 0;
	
}

int TeixeiraRodrigoPuntoVenta(){
	
int TRc=0,TRcp;
	float TRvp, TRa=0, TRvb, TRvIVA, TRvdes, TRvf, TRIVA=0.12, TRdes=0.10;
        cout<<"Ingrese la cantidad de productos : "<<endl;
	cin>>TRcp;
	do{
	cout<<"Ingrede el valor de cada producto : "<<endl;
        cin>>TRvp;
	TRc=TRc+1;
	TRa=TRa+TRvp;
	}while(TRc<TRcp);{
		TRvb=TRa;
	cout<<"El valor bruto es : "<<TRvb<<endl;
		TRvIVA=TRvb*TRIVA;
	cout<<"El valor del IVA es : "<<TRvIVA<<endl;
		TRvdes=TRvb*TRdes;
	cout<<"El valor del descuento es : "<<TRvdes<<endl;
		TRvf=TRvb+TRvIVA-TRvdes;
	cout<<"El valor final a pagar es : "<<TRvf<<endl;
	}
	cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Punto de Venta"<<endl;
cout<<"//==> Archivo : TeixeiraRodrigo-PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: Teixeira Rodrigo"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-02"<<endl;              
cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;        
cout<<"//================================================="<<endl;
return 0;
	
}

int TeixeiraRodrigolaedad(){
	
int TRaa,TRma,TRda,TRan,TRmn,TRdn,TRa,TRm,TRd;



cout<<"Ingrese la fecha actual (aaaa_mm_dd): "; 
cin>>TRaa>>TRma>>TRda;
cout<<"Ingrese la fecha de nacimiento (aaaa_mm_dd): "; 
cin>>TRan>>TRmn>>TRdn;
if(TRda>TRdn)
{
	TRd=TRda-TRdn;
}else{
	TRda=TRda+30;
	TRma=TRma-1;
	TRd=TRda-TRdn;
}
if(TRma>TRmn)
{
	TRm=TRma-TRmn;
}else{
	TRma=TRma+12;
	TRaa=TRaa-1;
	TRm=TRma-TRmn;
}

TRa=TRaa-TRan;

cout<<"La persona tiene :"<<TRa<<" años "<<TRm<< " meses y  "<<TRd<< " dias "<<endl;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Edad"<<endl;
cout<<"//==> Archivo : TeixeiraRodrigo-laedad.cpp"<<endl;
cout<<"//==>Autor: Teixeira Rodrigo"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-02"<<endl;              
cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;        
cout<<"//================================================="<<endl;
return 0;


}

int TeixeiraRodrigoCuentaMoneda(){
	
 int TRcm, TRc=0, TRc1=0, TRc2=0;
  float TRvm, TRa=0, TRa1=0, TRa2=0, TRcstn=0.10;
	cout<<"Cantidad de monedas a ingresar : ";
	cin>>TRcm;
	do{
		cout<<"Ingrese el valor de la moneda (0.10, o.25) : ";
		cin>>TRvm;
		TRc=TRc+1;
		TRa=TRa+TRvm;
		if(TRvm==TRcstn){
			TRc1=TRc1+1;
			TRa1=TRa1+TRvm;
		}else{
			TRc2=TRc2+1;
			TRa2=TRa2+TRvm;
		}
	}while(TRc<TRcm);
cout<<"El resultado fue : "<<endl;
cout<<"Cantidad de monedad ingresadas : "<<TRc<<endl;
cout<<"Cantidad total de dinero ingresado : "<<TRa<<endl;
cout<<"Cantidad de monedas de 0.10c ingresadas : "<<TRc1<<endl;
cout<<"Cantidad total de dinero en monedas de 0.10c : "<<TRa1<<endl;
cout<<"Cantidad de monedas de 0.25c ingresadas : "<<TRc2<<endl;
cout<<"Cantidad total de dinero en monedas de 0.25c : "<<TRa2<<endl;
cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Contador de monedas"<<endl;
cout<<"//==> Archivo : TeixeiraRodrigo-CuentaMoneda.cpp"<<endl;
cout<<"//==>Autor: Teixeira Rodrigo"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-01"<<endl;              
cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;        
cout<<"//================================================="<<endl;
return 0;
	
}



int TeixeiraRodrigomenu()
{
	int op,flag;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE Teixeira Rodrigo**************"<<endl<<endl;
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
					 TeixeiraRodrigoSumaN();			
					break;
				case 2:
					system("clear");
					cout<<"\nCOMPARA 2 NUIMEROS ";
					TeixeiraRodrigoCompara();
					break;
				case 3:
				        system("clear");
					cout<<"\n PUNTO DE VENTA ";
					TeixeiraRodrigoPuntoVenta();
					break;
				case 4:
					system("clear");
					cout<<"\n CALCULA LA EDAD ";
					TeixeiraRodrigolaedad();
					break;
				case 5:
					system("clear");
					cout<<"\n MAQUINA CUANTA MONEDAS ";
					TeixeiraRodrigoCuentaMoneda();
					break;
				
				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
				   flag=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla
				   
	}while(op!=0);
	
	cout<<"================================================\n";
	cout<<"                 Teixeira Rodrigo               \n";
	cout<<" Gmail:rodrigo.texeira.gonzalez@utelvt.edu.ecu  \n";
	cout<<"=================================================\n";

	return(0);

}
