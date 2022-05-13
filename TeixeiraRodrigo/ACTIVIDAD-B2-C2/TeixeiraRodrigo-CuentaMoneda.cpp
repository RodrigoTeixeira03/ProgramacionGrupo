//================================================

//==> Nombre del programa: Contador de monedas

//==> Archivo : TeixeiraRodrigo-CuentaMoneda.cpp
//==>Autor: Teixeira Rodrigo
//==>Fecha de elaboración: 2022-05-01
//==>Fecha ultima actualización: 2022-05-13
//=================================================
#include<iostream>
using namespace std;
int main ()
{
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
cout<<"//==>Fecha de elaboración: 2022-05-01"<<endl;              cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;        cout<<"//================================================="<<endl;
return 0;
}
