//================================================

//==> Nombre del programa: Punto de venta

//==> Archivo : TeixeiraRodrigo-PuntoVenta.cpp
//==>Autor: Teixeira Rodrigo
//==>Fecha de elaboración: 2022-05-02
//==>Fecha ultima actualización: 2022-05-13
//=================================================
#include<iostream>
using namespace std;
int main()
{
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
cout<<"//==>Fecha de elaboración: 2022-05-02"<<endl;              cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;        cout<<"//================================================="<<endl;
return 0;
}

	
		
