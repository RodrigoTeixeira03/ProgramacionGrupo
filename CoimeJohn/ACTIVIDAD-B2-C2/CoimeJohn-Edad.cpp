
#include<iostream>

using namespace std;

int main()
{
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
