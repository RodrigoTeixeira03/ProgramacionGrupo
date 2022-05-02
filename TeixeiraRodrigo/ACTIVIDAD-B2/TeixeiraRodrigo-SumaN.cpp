#include<iostream>
using namespace std;
int main()
{
	int c=0,cn;
	float vn,a=0;
	cout<<"Ingrese la cantidad de numeros que va a sumar: ";
	cin>>cn;
	do{

	cout<<"Ingrese los números ";
	cin>>vn;
	c=c+1;
	a=a+vn;
	}while(c<cn);
	cout<< "El resultado de la suma total es : "<<a<<endl;
	return 0;
}
