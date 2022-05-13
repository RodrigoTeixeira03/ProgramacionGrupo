//================================================
//==> Nombre del programa: Suma de Numeros
//==> Archivo : PorozoJose-SumaN.cpp
//==>Autor: Porozo Jose
//==>Fecha de elaboración: 2022-04-01
//==>Fecha ultima actualización: 2022-05-12
//=================================================
#include<iostream>
using namespace std;
int main()
{
	int CONT=0,NU;
	
	float IN,ACUM=0;
	
	cout<<"Ingrese la cantidad de numero a sumar: ";
	
	cin>>NU;
	
	do{

	   cout<<"Ingrese los números ";
	   
	   cin>>IN;
	   
	   CONT=CONT+1;
	   
	   ACUM=ACUM+IN;
	   
	}while(CONT<NU);
	
	cout<< "El resultado de la suma total es igual: "<<ACUM<<endl;
	
	cout<<" //================================================\n";
    cout<<"//==> Nombre del programa: Suma de Numeros\n";
    cout<<"//==> Archivo : PorozoJose-SumaN.cpp\n";
    cout<<"//==>Autor: Porozo Jose\n";
    cout<<"//==>Fecha de elaboración: 2022-04-01\n";
    cout<<"//==>Fecha ultima actualización: 2022-05-12\n";
    cout<<"//=================================================\n";
	return 0;
}
