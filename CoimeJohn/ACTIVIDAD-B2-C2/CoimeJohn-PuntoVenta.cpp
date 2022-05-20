#include<iostream>
using namespace std;
int main(){
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
	CJ_vIVA=CJ_vb*CJ_IVA;
	CJ_vdes=CJ_vb*CJ_des;	
	CJ_vf=CJ_vb+CJ_vIVA-CJ_vdes;
	cout<<"El valor bruto es : "<<CJ_vb<<endl;
	cout<<"El valor del IVA es : "<<CJ_vIVA<<endl;
	cout<<"El valor del descuento es : "<<CJ_vdes<<endl;
	
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
