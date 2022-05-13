//================================================
//==> Nombre del programa: Calcular la edad
//==> Archivo : PorozoJose-laedad.cpp
//==>Autor: Porozo Jose
//==>Fecha de elaboración: 2022-04-01
//==>Fecha ultima actualización: 2022-05-12
//=================================================
#include<iostream>
using namespace std;
int main()
{
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
