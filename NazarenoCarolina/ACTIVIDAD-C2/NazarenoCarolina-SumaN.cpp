//================================================

//==> Nombre del programa: Calcular la Suma dos números

//==> Archivo : NazarenoCarolina_SumaN.cpp
//==>Autor: Carolina Nazareno
//==>Fecha de elaboración: 2022-05-01
//==>Fecha ultima actualización: 2022-05-12
//=================================================

#include<iostream>
using namespace std;

int main()
{
	int Nc_cc=0,Nc_c;
	float Nc_n,Nc_st=0;
	
	cout<<"Ingrese la cantidad de numero que desea sumar: ";
	cin>>Nc_c;
	
	do{

	cout<<"Ingrese los numeros ";
	cin>>Nc_n;
	Nc_cc=Nc_cc+1;
	Nc_st=Nc_st+Nc_n;
	
	}while(Nc_cc<Nc_c);
	
	cout<< "El resultado de la suma total es: "<< Nc_st <<endl;
	
	cout<<endl<<"//================================================"<<endl;
    cout<<"//==> Nombre del programa: Calcular la suma de dos numeros"<<endl;
    cout<<"//==> Archivo : NazarenoCarolina_SumaN.cpp"<<endl;
    cout<<"//==>Autor: Carolina Nazareno"<<endl;
    cout<<"//==>Fecha de elaboración: 2022-05-01"<<endl;
    cout<<"//==>Fecha ultima actualización: 2022-05-12"<<endl;
    cout<<"//================================================="<<endl;

	return 0;
}
