// MENU DE Porozo Jose
//
//
//
//
//
//
//

int PorozoJoseSumaN()
{
int CONT=0,NU;
	
	float IN,ACUM=0;
	
	cout<<"Ingrese la cantidad de numero a sumar: ";
	
	cin>>NU;
	
	do{

	   cout<<"Ingrese los números ";
	   
	   cin>>IN;
	   
	   CONT=CONT+1;
	   
	   ACUM=ACUM+IN;
	   
	}while(CONT<NU);
	
	cout<< "El resultado de la suma total es igual: "<<ACUM<<endl;
	
	cout<<" //================================================\n";
    cout<<"//==> Nombre del programa: Suma de Numeros\n";
    cout<<"//==> Archivo : PorozoJose-SumaN.cpp\n";
    cout<<"//==>Autor: Porozo Jose\n";
    cout<<"//==>Fecha de elaboración: 2022-04-01\n";
    cout<<"//==>Fecha ultima actualización: 2022-05-12\n";
    cout<<"//=================================================\n";

	return 0;
}

int PorozoJoseCompara(){
	
float PJ_A, PJ_B;

    cout<<"Ingrese el numero A:" ; cin>>PJ_A;

    cout<<"Ingrese el numero B:" ; cin>>PJ_B;
    
     if(PJ_A==PJ_B){

           cout<<"El valor de A="<<PJ_A<<":es igual a B="<<PJ_B<<endl;
	
     }else{

        if(PJ_A<PJ_B)	{ 

             cout<<"El numero de A="<<PJ_A<<":es menor A B="<<PJ_B<<endl;
        }else{

          cout<<"El numero de B="<<PJ_B<<" :es menor A A="<<PJ_A<<endl;
        } 
     }

	
 cout<<" //================================================\n";
 cout<<"//==> Nombre del programa: Comparador de dos numeros\n";
 cout<<"//==> Archivo : PorozoJose-Compara.cpp\n";
 cout<<"//==>Autor: Porozo Jose\n";
 cout<<"//==>Fecha de elaboración: 2022-04-01\n";
 cout<<"//==>Fecha ultima actualización: 2022-05-12\n";
 cout<<"//=================================================\n";

exit(1);
}

int PorozoJosePuntoVenta()
{
 float PJ_x,PJ_c=0,PJ_B=0,PJ_Pr,PJ_Vb,PJ_Viva,PJ_Vdes,PJ_Vf,PJ_I=0.12,PJ_R=0.10;
  
  cout<<"Ingrese el valor de Pr  :"; 
  
  cin>>PJ_Pr;
  
  do
  {

     cout<<"Ingrese el valor de PJ_x:"; 
     
     cin>>PJ_x;
  
   PJ_c=PJ_c+1;
   
   PJ_B=PJ_B+PJ_x;


  }
  
  while(PJ_c<PJ_Pr);
  
           PJ_Vb=PJ_B;
           
           PJ_Viva=PJ_Vb*PJ_I;
           
           PJ_Vdes=PJ_Vb*PJ_R;
           
           PJ_Vf=PJ_Vb+PJ_Viva-PJ_Vdes;
  
  cout<<"valor final a pagar es de:";
  
  cout<<PJ_Vf<<endl;
  
  cout<<" //================================================\n";
  cout<<"//==> Nombre del programa: Punto Venta\n";
  cout<<"//==> Archivo : PorozoJose-PuntoVenta.cpp\n";
  cout<<"//==>Autor: Porozo Jose\n";
  cout<<"//==>Fecha de elaboración: 2022-04-01\n";
  cout<<"//==>Fecha ultima actualización: 2022-05-12\n";
  cout<<"//=================================================\n";
 return 0;  
	
}


int PorozoJoselaedad(){
	int PJ_ap,PJ_mp,PJ_dp,PJ_an,PJ_mn,PJ_dn,PJ_a,PJ_m,PJ_d;


    cout<<"Ingrese la fecha actual (aaaa_mm_dd): "; 

    cin>>PJ_ap>>PJ_mp>>PJ_dp;

    cout<<"Ingrese la fecha de nacimiento (aaaa_mm_dd): "; 

    cin>>PJ_an>>PJ_mn>>PJ_dn;
             if(PJ_dp>PJ_dn)
             {
	                PJ_d=PJ_dp-PJ_dn;
             }else{
             	
	            PJ_dp=PJ_dp+30;
      	  
	            PJ_mp=PJ_mp-1;
	  
	            PJ_d=PJ_dp-PJ_dn;
                 }
                   if(PJ_mp>PJ_mn)
                    {
                      PJ_m=PJ_mp-PJ_mn;
                    }else{
	                   PJ_mp=PJ_mp+12;
	   
	                     PJ_ap=PJ_ap-1;
	    
	                     PJ_m=PJ_mp-PJ_mn;
                    }

          PJ_a=PJ_ap-PJ_an;

         cout<<"La persona tiene :"<<PJ_a<<" años "<<PJ_m<< " meses "<<PJ_d<< " dias "<<endl;

       cout<<" //================================================\n";
       cout<<"//==> Nombre del programa: Calcular la edad\n";
       cout<<"//==> Archivo : PorozoJose-laedad.cpp\n";
       cout<<"//==>Autor: Porozo Jose\n";
       cout<<"//==>Fecha de elaboración: 2022-04-01\n";
       cout<<"//==>Fecha ultima actualización: 2022-05-12\n";
       cout<<"//=================================================\n";

return 0;
}
int PorozoJoseCuentaMoneda(){

int PJ_c,PJ_A=0,PJ_A1=0,PJ_A2=0,PJ_A3=0;
   
   float PJ_t,PJ_B=0,PJ_B1=0,PJ_B2=0,PJ_B3=0,PJ_D=0.10, PJ_D1=0.25, PJ_D2=0.50;
   
   cout<<"Ingrese la cantidad de monedas: "; cin>>PJ_c;
   
  do{

    cout<<"Ingrese el tipo de la moneda t=";cin>>PJ_t;
    
    PJ_A=PJ_A+1;
    
    PJ_B=PJ_B+1;
    
    if(PJ_t==PJ_D){
    	
        PJ_A1=PJ_A1+1;
        
        PJ_B1=PJ_B1+PJ_t;
    }

      if(PJ_t==PJ_D1){
      	
          PJ_A2=PJ_A2+1;
          
          PJ_B2=PJ_B2+PJ_t;
      }


       if(PJ_t==PJ_D2){
       	
          PJ_A3=PJ_A3+1;
          
          PJ_B3=PJ_B3+PJ_t;
       }
       
  }while(PJ_A<PJ_c);

cout<<"Usted cuenta con "<<PJ_A<<  " Moneda y un total de "<<PJ_A<<"  moneda"<<endl;

cout<<"Usted cuenta con "<<PJ_A1<<  " Moneda de $0.10 que suman    "<<PJ_A1<<"  moneda"<<endl;

cout<<"Usted cuenta con "<<PJ_A2<<  " Moneda de $0.25 que suman "<<PJ_A2<<"  moneda"<<endl;

cout<<"Usted cuenta con "<<PJ_A3<<  " Moneda de $0.50 y un total de "<<PJ_A3<<"  moneda"<<endl;

cout<<" //================================================\n";
cout<<"//==> Nombre del programa: Contador de Monedas\n";
cout<<"//==> Archivo : PorozoJose-CuentaMonedad.cpp\n";
cout<<"//==>Autor: Porozo Jose\n";
cout<<"//==>Fecha de elaboración: 2022-04-01\n";
cout<<"//==>Fecha ultima actualización: 2022-05-12\n";
cout<<"//=================================================\n";



return 0;
	
	
}



int PorozoJosemenu()
{
	int op,flag;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE POROZO JOSE**************"<<endl<<endl;
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
					 PorozoJoseSumaN();			
					break;
				case 2:
					system("clear");
					cout<<"\nCOMPARA 2 NUMEROS ";
				        PorozoJoseCompara();
					break;
				case 3:
					system("clear");
					cout<<"\n PUNTO DE VENTA ";
					
					 PorozoJosePuntoVenta();
					break;
				case 4:
					system("clear");
					cout<<"\n CALCULA LA EDAD ";
					PorozoJoselaedad();
					break;
				case 5:
					system("clear");
					cout<<"\n MAQUINA CUANTA MONEDAS ";
					PorozoJoseCuentaMoneda();
					break;
				
				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
                                     system("read -p 'Press Enter to continue...' var");
				   
	}while(op!=0);
        
        cout<<"=====================================================\n";
        cout<<"                Porozo Caicedo                       \n";
	cout<<"      Gmail: jose.porozo.caicedo@utelvt.edu.ec       \n";
	cout<<"=====================================================\n";

	return(0);

}
