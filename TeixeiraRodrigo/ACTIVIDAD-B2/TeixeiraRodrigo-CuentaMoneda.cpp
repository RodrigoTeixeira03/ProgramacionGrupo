#include<iostream>
using namespace std;
int main ()
{
	int cm, c=0, c1=0, c2=0;
	float vm, a=0, a1=0, a2=0, cstn=0.10;
	cout<<"Cantidad de monedas a ingresar : ";
	cin>>cm;
	do{
		cout<<"Ingrese el valor de la moneda (0.10, o.25) : ";
		cin>>vm;
		c=c+1;
		a=a+vm;
		if(vm==cstn){
			c1=c1+1;
			a1=a1+vm;
		}else{
			c2=c2+1;
			a2=a2+vm;
		}
	}while(c<cm);
cout<<"El resultado fue : "<<endl;
cout<<"Cantidad de monedad ingresadas : "<<c<<endl;
cout<<"Cantidad total de dinero ingresado : "<<a<<endl;
cout<<"Cantidad de monedas de 0.10c ingresadas : "<<c1<<endl;
cout<<"Cantidad total de dinero en monedas de 0.10c : "<<a1<<endl;
cout<<"Cantidad de monedas de 0.25c ingresadas : "<<c2<<endl;
cout<<"Cantidad total de dinero en monedas de 0.25c : "<<a2<<endl;
return 0;
}
