#include<iostream>
using namespace std;

int main()
{
	int cc=0,c;
	float n,st=0;
	
	cout<<"Ingrese la cantidad de numero que desea sumar: ";
	cin>>c;
	
	do{

	cout<<"Ingrese los numeros ";
	cin>>n;
	cc=cc+1;
	st=st+n;
	
	}while(cc<c);
	
	cout<< "El resultado de la suma total es: "<< st <<endl;
	
	return 0;
}
