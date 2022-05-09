#include<iostream>
using namespace std;
int main()
{
	int c=0,cp;
	float vp, a=0, vb, vIVA, vdes, vf, IVA=0.12, des=0.10;
        cout<<"Ingrese la cantidad de productos : "<<endl;
	cin>>cp;
	do{
	cout<<"Ingrede el valor de cada producto : "<<endl;
        cin>>vp;
	c=c+1;
	a=a+vp;
	}while(c<cp);{
		vb=a;
	cout<<"El valor bruto es : "<<vb<<endl;
		vIVA=vb*IVA;
	cout<<"El valor del IVA es : "<<vIVA<<endl;
		vdes=vb*des;
	cout<<"El valor del descuento es : "<<vdes<<endl;
		vf=vb+vIVA-vdes;
	cout<<"El valor final a pagar es : "<<vf<<endl;
	}
return 0;
}

	
		
