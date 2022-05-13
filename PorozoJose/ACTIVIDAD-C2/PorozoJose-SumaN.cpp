/*2.- Diagrama de fujo y código en c++ de un programa 
que permita sumar varios número el usuario debe 
ingresar la cantidad de número que quiere sumar y el 
programa debe mostrar la suma total de los números.*/
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
	return 0;
}
