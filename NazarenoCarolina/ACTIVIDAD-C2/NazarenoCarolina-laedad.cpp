//================================================

//==> Nombre del programa: Calcular la edad de una persona
//==> Archivo : NazarenoCarolina_laedad.cpp
//==>Autor: Carolina Nazareno
//==>Fecha de elaboración: 2022-05-01
//==>Fecha ultima actualización: 2022-05-12
//=================================================

#include<iostream>
using namespace std;

int main()
{
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
