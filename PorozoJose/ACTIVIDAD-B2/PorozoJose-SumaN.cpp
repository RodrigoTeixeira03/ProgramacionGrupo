/*2.- Diagrama de fujo y c�digo en c++ de un programa 
que permita sumar varios n�mero el usuario debe 
ingresar la cantidad de n�mero que quiere sumar y el 
programa debe mostrar la suma total de los n�meros.*/
#include<iostream>
using namespace std;
int main()
{
	int CONT=0,NU;
	float IN,ACUM=0;
	cout<<"Ingrese la cantidad de numero a sumar: ";
	cin>>NU;
	do{

	cout<<"Ingrese los n�meros ";
	cin>>IN;
	CONT=CONT+1;
	ACUM=ACUM+IN;
	}while(CONT<NU);
	cout<< "El resultado de la suma total es igual: "<<ACUM<<endl;
	return 0;
}
